/*
 *	server/zone/objects/player/PlayerCreature.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLAYERCREATURE_H_
#define PLAYERCREATURE_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {

class ZoneClientSession;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject;

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class Container;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace events {

class PlayerDisconnectEvent;

} // namespace events
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::events;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace events {

class PlayerRecoveryEvent;

} // namespace events
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::events;

namespace server {
namespace chat {
namespace room {

class ChatRoom;

} // namespace room
} // namespace chat
} // namespace server

using namespace server::chat::room;

#include "system/lang/Time.h"

#include "system/util/SortedVector.h"

#include "engine/util/QuadTreeEntry.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "engine/service/proto/BasePacket.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature : public CreatureObject {
public:
	static const int ONLINE = 1;

	static const int OFFLINE = 2;

	static const int LINKDEAD = 3;

	static const int LOGGINGIN = 4;

	static const int LOGGINGOUT = 5;

	static const int LOADING = 6;

	PlayerCreature(LuaObject* templateData);

	void initializeTransientMembers();

	void notifyInsert(QuadTreeEntry* entry);

	void notifyDissapear(QuadTreeEntry* entry);

	void disconnect(bool closeClient, bool doLock);

	void unload();

	void reload(ZoneClientSession* client);

	void logout(bool doLock);

	void activateRecovery();

	void doRecovery();

	void sendMessage(BasePacket* msg);

	void sendToOwner(bool doClose = true);

	bool isOnline();

	bool isOffline();

	bool isLoading();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	unsigned int getAccountID();

	ZoneClientSession* getClient();

	byte getRaceID();

	unsigned long long getSavedParentID();

	int getSavedZoneID();

	String getFirstName();

	String getLastName();

	void setSavedParentID(unsigned long long id);

	void setSavedZoneID(int id);

	void setClient(ZoneClientSession* cli);

	void setBiography(const UnicodeString& bio);

	void setRaceID(byte id);

	void setOffline();

	void setLinkDead();

	void setOnline();

	void setLoggingOut();

	void setAccountID(unsigned int id);

	void clearDisconnectEvent();

	void clearRecoveryEvent();

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

protected:
	PlayerCreature(DummyConstructorParameter* param);

	virtual ~PlayerCreature();

	String _return_getFirstName;
	String _return_getLastName;

	friend class PlayerCreatureHelper;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreatureImplementation : public CreatureObjectImplementation {
protected:
	ManagedReference<ZoneClientSession* > owner;

	int savedZoneID;

	unsigned long long savedParentID;

	int onlineStatus;

	Time logoutTimeStamp;

	unsigned int accountID;

	String raceFile;

	byte raceID;

	String startingLocation;

	String startingProfession;

	UnicodeString biography;

	byte lotsRemaining;

	PlayerDisconnectEvent* disconnectEvent;

	PlayerRecoveryEvent* recoveryEvent;

	Time nextAction;

	Time nextTip;

	SortedVector<ManagedReference<ChatRoom* > > chatRooms;

	byte incapacitationCounter;

	Time firstIncapacitationTime;

	int pvpRating;

	int factionStatus;

public:
	static const int ONLINE = 1;

	static const int OFFLINE = 2;

	static const int LINKDEAD = 3;

	static const int LOGGINGIN = 4;

	static const int LOGGINGOUT = 5;

	static const int LOADING = 6;

	PlayerCreatureImplementation(LuaObject* templateData);

	PlayerCreatureImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void notifyInsert(QuadTreeEntry* entry);

	void notifyDissapear(QuadTreeEntry* entry);

	void disconnect(bool closeClient, bool doLock);

	void unload();

	void reload(ZoneClientSession* client);

	void logout(bool doLock);

	void activateRecovery();

	void doRecovery();

	void sendMessage(BasePacket* msg);

	void sendToOwner(bool doClose = true);

	bool isOnline();

	bool isOffline();

	bool isLoading();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	unsigned int getAccountID();

	ZoneClientSession* getClient();

	byte getRaceID();

	unsigned long long getSavedParentID();

	int getSavedZoneID();

	String getFirstName();

	String getLastName();

	void setSavedParentID(unsigned long long id);

	void setSavedZoneID(int id);

	void setClient(ZoneClientSession* cli);

	void setBiography(const UnicodeString& bio);

	void setRaceID(byte id);

	void setOffline();

	void setLinkDead();

	void setOnline();

	void setLoggingOut();

	void setAccountID(unsigned int id);

	void clearDisconnectEvent();

	void clearRecoveryEvent();

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

	PlayerCreature* _this;

	operator const PlayerCreature*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~PlayerCreatureImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class PlayerCreature;
};

class PlayerCreatureAdapter : public CreatureObjectAdapter {
public:
	PlayerCreatureAdapter(PlayerCreatureImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void disconnect(bool closeClient, bool doLock);

	void unload();

	void reload(ZoneClientSession* client);

	void logout(bool doLock);

	void activateRecovery();

	void doRecovery();

	void sendMessage(BasePacket* msg);

	void sendToOwner(bool doClose);

	bool isOnline();

	bool isOffline();

	bool isLoading();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	unsigned int getAccountID();

	ZoneClientSession* getClient();

	byte getRaceID();

	unsigned long long getSavedParentID();

	int getSavedZoneID();

	String getFirstName();

	String getLastName();

	void setSavedParentID(unsigned long long id);

	void setSavedZoneID(int id);

	void setClient(ZoneClientSession* cli);

	void setBiography(const UnicodeString& bio);

	void setRaceID(byte id);

	void setOffline();

	void setLinkDead();

	void setOnline();

	void setLoggingOut();

	void setAccountID(unsigned int id);

	void clearDisconnectEvent();

	void clearRecoveryEvent();

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

protected:
	UnicodeString _param0_setBiography__UnicodeString_;
};

class PlayerCreatureHelper : public DistributedObjectClassHelper, public Singleton<PlayerCreatureHelper> {
	static PlayerCreatureHelper* staticInitializer;

public:
	PlayerCreatureHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerCreatureHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*PLAYERCREATURE_H_*/
