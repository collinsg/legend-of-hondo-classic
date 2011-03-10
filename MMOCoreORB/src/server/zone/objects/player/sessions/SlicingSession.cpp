/*
 *	server/zone/objects/player/sessions/SlicingSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "SlicingSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

/*
 *	SlicingSessionStub
 */

SlicingSession::SlicingSession(CreatureObject* parent) : Facade(DummyConstructorParameter::instance()) {
	SlicingSessionImplementation* _implementation = new SlicingSessionImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
}

SlicingSession::SlicingSession(DummyConstructorParameter* param) : Facade(param) {
}

SlicingSession::~SlicingSession() {
}


void SlicingSession::initalizeSlicingMenu(PlayerCreature* pl, TangibleObject* obj) {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->initalizeSlicingMenu(pl, obj);
}

void SlicingSession::handleMenuSelect(PlayerCreature* pl, byte menuID, SuiListBox* suiBox) {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->handleMenuSelect(pl, menuID, suiBox);
}

int SlicingSession::initializeSession() {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int SlicingSession::cancelSession() {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int SlicingSession::clearSession() {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

void SlicingSession::endSlicing() {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->endSlicing();
}

int SlicingSession::getSlicingSkill(PlayerCreature* slicer) {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(slicer);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSlicingSkill(slicer);
}

bool SlicingSession::hasPrecisionLaserKnife() {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasPrecisionLaserKnife();
}

bool SlicingSession::hasWeaponUpgradeKit() {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasWeaponUpgradeKit();
}

bool SlicingSession::hasArmorUpgradeKit() {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasArmorUpgradeKit();
}

void SlicingSession::useClampFromInventory(SlicingTool* clamp) {
	SlicingSessionImplementation* _implementation = (SlicingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(clamp);

		method.executeWithVoidReturn();
	} else
		_implementation->useClampFromInventory(clamp);
}

DistributedObjectServant* SlicingSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void SlicingSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SlicingSessionImplementation
 */

SlicingSessionImplementation::SlicingSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


SlicingSessionImplementation::~SlicingSessionImplementation() {
}


void SlicingSessionImplementation::finalize() {
}

void SlicingSessionImplementation::_initializeImplementation() {
	_setClassHelper(SlicingSessionHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void SlicingSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SlicingSession*) stub;
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* SlicingSessionImplementation::_getStub() {
	return _this;
}

SlicingSessionImplementation::operator const SlicingSession*() {
	return _this;
}

void SlicingSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SlicingSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SlicingSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SlicingSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SlicingSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SlicingSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SlicingSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SlicingSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("SlicingSession");

}

void SlicingSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SlicingSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SlicingSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "player") {
		TypeInfo<ManagedWeakReference<PlayerCreature* > >::parseFromBinaryStream(&player, stream);
		return true;
	}

	if (_name == "slicingSuiBox") {
		TypeInfo<ManagedReference<SuiListBox* > >::parseFromBinaryStream(&slicingSuiBox, stream);
		return true;
	}

	if (_name == "firstCable") {
		TypeInfo<byte >::parseFromBinaryStream(&firstCable, stream);
		return true;
	}

	if (_name == "nodeCable") {
		TypeInfo<byte >::parseFromBinaryStream(&nodeCable, stream);
		return true;
	}

	if (_name == "cableBlue") {
		TypeInfo<bool >::parseFromBinaryStream(&cableBlue, stream);
		return true;
	}

	if (_name == "cableRed") {
		TypeInfo<bool >::parseFromBinaryStream(&cableRed, stream);
		return true;
	}

	if (_name == "usedNode") {
		TypeInfo<bool >::parseFromBinaryStream(&usedNode, stream);
		return true;
	}

	if (_name == "usedClamp") {
		TypeInfo<bool >::parseFromBinaryStream(&usedClamp, stream);
		return true;
	}


	return false;
}

void SlicingSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SlicingSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SlicingSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "player";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<PlayerCreature* > >::toBinaryStream(&player, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "slicingSuiBox";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<SuiListBox* > >::toBinaryStream(&slicingSuiBox, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "firstCable";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&firstCable, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "nodeCable";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&nodeCable, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "cableBlue";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&cableBlue, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "cableRed";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&cableRed, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "usedNode";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&usedNode, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "usedClamp";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&usedClamp, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 8 + FacadeImplementation::writeObjectMembers(stream);
}

SlicingSessionImplementation::SlicingSessionImplementation(CreatureObject* parent) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/SlicingSession.idl():  		Logger.setLoggingName("SlicingSession");
	Logger::setLoggingName("SlicingSession");
	// server/zone/objects/player/sessions/SlicingSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/SlicingSession.idl():  		initializeSession();
	initializeSession();
}

int SlicingSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/SlicingSession.idl():  		if 
	if (player != NULL)	// server/zone/objects/player/sessions/SlicingSession.idl():  			player.dropActiveSession(SessionFacadeType.SLICING);
	player->dropActiveSession(SessionFacadeType::SLICING);
	// server/zone/objects/player/sessions/SlicingSession.idl():  		clearSession(
	if (tangibleObject != NULL)	// server/zone/objects/player/sessions/SlicingSession.idl():  			tangibleObject.dropActiveSession(SessionFacadeType.SLICING);
	tangibleObject->dropActiveSession(SessionFacadeType::SLICING);
	// server/zone/objects/player/sessions/SlicingSession.idl():  		clearSession();
	clearSession();
	// server/zone/objects/player/sessions/SlicingSession.idl():  		return 0;
	return 0;
}

int SlicingSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/SlicingSession.idl():  		player = null;
	player = NULL;
	// server/zone/objects/player/sessions/SlicingSession.idl():  		tangibleObject = null;
	tangibleObject = NULL;
	// server/zone/objects/player/sessions/SlicingSession.idl():  		return 0;
	return 0;
}

String SlicingSessionImplementation::getPrefix(TangibleObject* obj) {
	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	if (obj->isMissionTerminal())	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "terminal_";
	return "terminal_";

	else 	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	if (obj->isWeaponObject())	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "weapon_";
	return "weapon_";

	else 	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	if (obj->isArmorObject())	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "armor_";
	return "armor_";

	else 	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	if (obj->isContainerObject() || tangibleObject->getGameObjectType() == 8245)	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "container_";
	return "container_";

	else 	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	return "";
}

byte SlicingSessionImplementation::getProgress() {
	// server/zone/objects/player/sessions/SlicingSession.idl():  		return ((byte) cableBlue + (byte) cableRed);
	return ((byte) cableBlue + (byte) cableRed);
}

/*
 *	SlicingSessionAdapter
 */

SlicingSessionAdapter::SlicingSessionAdapter(SlicingSessionImplementation* obj) : FacadeAdapter(obj) {
}

enum {RPC_INITIALIZESESSION__,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_ENDSLICING__,RPC_GETSLICINGSKILL__PLAYERCREATURE_,RPC_HASPRECISIONLASERKNIFE__,RPC_HASWEAPONUPGRADEKIT__,RPC_HASARMORUPGRADEKIT__,RPC_USECLAMPFROMINVENTORY__SLICINGTOOL_,};

Packet* SlicingSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		resp->insertSignedInt(initializeSession());
		break;
	case RPC_CANCELSESSION__:
		resp->insertSignedInt(cancelSession());
		break;
	case RPC_CLEARSESSION__:
		resp->insertSignedInt(clearSession());
		break;
	case RPC_ENDSLICING__:
		endSlicing();
		break;
	case RPC_GETSLICINGSKILL__PLAYERCREATURE_:
		resp->insertSignedInt(getSlicingSkill((PlayerCreature*) inv->getObjectParameter()));
		break;
	case RPC_HASPRECISIONLASERKNIFE__:
		resp->insertBoolean(hasPrecisionLaserKnife());
		break;
	case RPC_HASWEAPONUPGRADEKIT__:
		resp->insertBoolean(hasWeaponUpgradeKit());
		break;
	case RPC_HASARMORUPGRADEKIT__:
		resp->insertBoolean(hasArmorUpgradeKit());
		break;
	case RPC_USECLAMPFROMINVENTORY__SLICINGTOOL_:
		useClampFromInventory((SlicingTool*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

int SlicingSessionAdapter::initializeSession() {
	return ((SlicingSessionImplementation*) impl)->initializeSession();
}

int SlicingSessionAdapter::cancelSession() {
	return ((SlicingSessionImplementation*) impl)->cancelSession();
}

int SlicingSessionAdapter::clearSession() {
	return ((SlicingSessionImplementation*) impl)->clearSession();
}

void SlicingSessionAdapter::endSlicing() {
	((SlicingSessionImplementation*) impl)->endSlicing();
}

int SlicingSessionAdapter::getSlicingSkill(PlayerCreature* slicer) {
	return ((SlicingSessionImplementation*) impl)->getSlicingSkill(slicer);
}

bool SlicingSessionAdapter::hasPrecisionLaserKnife() {
	return ((SlicingSessionImplementation*) impl)->hasPrecisionLaserKnife();
}

bool SlicingSessionAdapter::hasWeaponUpgradeKit() {
	return ((SlicingSessionImplementation*) impl)->hasWeaponUpgradeKit();
}

bool SlicingSessionAdapter::hasArmorUpgradeKit() {
	return ((SlicingSessionImplementation*) impl)->hasArmorUpgradeKit();
}

void SlicingSessionAdapter::useClampFromInventory(SlicingTool* clamp) {
	((SlicingSessionImplementation*) impl)->useClampFromInventory(clamp);
}

/*
 *	SlicingSessionHelper
 */

SlicingSessionHelper* SlicingSessionHelper::staticInitializer = SlicingSessionHelper::instance();

SlicingSessionHelper::SlicingSessionHelper() {
	className = "SlicingSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void SlicingSessionHelper::finalizeHelper() {
	SlicingSessionHelper::finalize();
}

DistributedObject* SlicingSessionHelper::instantiateObject() {
	return new SlicingSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* SlicingSessionHelper::instantiateServant() {
	return new SlicingSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SlicingSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SlicingSessionAdapter((SlicingSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

