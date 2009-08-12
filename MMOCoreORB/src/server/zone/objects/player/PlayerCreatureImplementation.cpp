/*
 * PlayerCreatureImplementation.cpp
 *
 *  Created on: 18/07/2009
 *      Author: TheAnswer
 */

#include "PlayerCreature.h"

#include "server/zone/managers/object/ObjectManager.h"
#include "server/zone/packets/zone/unkByteFlag.h"
#include "server/zone/packets/zone/CmdStartScene.h"
#include "server/zone/packets/zone/ParametersMessage.h"
#include "server/zone/packets/object/CommandQueueRemove.h"

#include "server/chat/room/ChatRoom.h"

#include "events/PlayerDisconnectEvent.h"
#include "events/PlayerRecoveryEvent.h"

#include "server/zone/objects/creature/commands/QueueCommand.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "professions/SkillBox.h"

PlayerCreatureImplementation::PlayerCreatureImplementation(LuaObject* templateData) :
	CreatureObjectImplementation(templateData) {

	setLoggingName("PlayerCreature");

	owner = NULL;
	nextAction = NULL;

	nextTip = NULL;

	firstIncapacitationTime = NULL;

	disconnectEvent = NULL;
	recoveryEvent = NULL;

	logoutTimeStamp = new Time();

	chatRooms = new SortedVector<ChatRoom*>();

	setOffline();
}

void PlayerCreatureImplementation::sendToOwner(bool doClose) {
	if (owner == NULL)
		return;

	BaseMessage* byteFlag = new unkByteFlag();
	owner->sendMessage(byteFlag);

	BaseMessage* startScene = new CmdStartScene(_this);
	owner->sendMessage(startScene);

	BaseMessage* parameters = new ParametersMessage();
	owner->sendMessage(parameters);

	if (parent != NULL) {
		SceneObject* grandParent = getGrandParent();

		grandParent->sendTo(_this);
	} else
		sendTo(_this, doClose);
}

void PlayerCreatureImplementation::notifyInsert(QuadTreeEntry* entry) {
	SceneObject* scno = (SceneObject*) (((SceneObjectImplementation*) entry)->_getStub());

	if (parent != NULL) {
		SceneObject* grandParent = getGrandParent();

		if (grandParent == scno) // we already sent our grandParent to owner
			return;
	}

	if (scno->getParent() != NULL) {
		SceneObject* scnoGrandParent = scno->getGrandParent();

		if (isInRange(scnoGrandParent, 128))
			return;
	}

	if (scno != _this)
		scno->sendTo(_this, true);
}

void PlayerCreatureImplementation::notifyDissapear(QuadTreeEntry* entry) {
	SceneObject* scno = (SceneObject*) (((SceneObjectImplementation*) entry)->_getStub());

	if (scno != _this)
		scno->sendDestroyTo(_this);
}

void PlayerCreatureImplementation::logout(bool doLock) {
	wlock(doLock);

	try {
		if (disconnectEvent == NULL) {
			info("creating disconnect event");

			disconnectEvent = new PlayerDisconnectEvent(_this);

			if (isLoggingOut()) {
				server->scheduleTask(disconnectEvent, 10);
			} else {
				server->scheduleTask(disconnectEvent, 1000);
				setLoggingOut();
			}
		}
	} catch (...) {
		error("unreported exception caught in PlayerCreatureImplementation::logout(boolean doLock)");
	}

	unlock(doLock);
}

void PlayerCreatureImplementation::doRecovery() {
	if (isLinkDead()) {
		if (logoutTimeStamp->isPast()) {
			info("unloading dead link player");

			unload();

			setOffline();

			if (owner != NULL)
				owner->closeConnection(false, true);

			return;
		} else {
			info("keeping dead linked player in game");
		}
	}

	activateRecovery();
}

void PlayerCreatureImplementation::activateRecovery() {
	if (recoveryEvent == NULL) {
		recoveryEvent = new PlayerRecoveryEvent(_this);

		server->scheduleTask(recoveryEvent, 3000);
	}
}

void PlayerCreatureImplementation::unload() {
	info("unloading player");

	if (zone != NULL) {

		if (isInQuadTree()) {
			removeFromZone(true);
		}

	}
}

void PlayerCreatureImplementation::disconnect(bool closeClient, bool doLock) {
	try {
		_this->wlock(doLock);

		if (!isOnline()) {
			_this->unlock(doLock);
			return;
		}

		if (/*isInCombat() && */!isLinkDead()) {
			info("link dead");

			setLinkDead();
		} else {
			info ("disconnecting player");

			unload();

			setOffline();
		}

		if (disconnectEvent != NULL)
			disconnectEvent = NULL;

		/*if (logoutEvent != NULL) {
			server->removeEvent(logoutEvent);
			delete logoutEvent;

			logoutEvent = NULL;
		}*/

		if (closeClient && owner != NULL)
			owner->closeConnection(false, true);

		owner = NULL;

		_this->unlock();
	} catch (...) {
		_this->unlock();
	}
}

String PlayerCreatureImplementation::getFirstName() {
	UnicodeString fullName = objectName->getCustomString();

    int idx = fullName.indexOf(' ');

    if (idx != -1) {
    	return fullName.subString(0, idx).toString();
    } else {
    	return fullName.toString();
    }
}
