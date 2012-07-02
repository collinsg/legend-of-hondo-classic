/*
 *	server/zone/objects/mission/CraftingMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingMissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	CraftingMissionObjectiveStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_,RPC_ABORT__};

CraftingMissionObjective::CraftingMissionObjective(MissionObject* mission) : DeliverMissionObjective(DummyConstructorParameter::instance()) {
	CraftingMissionObjectiveImplementation* _implementation = new CraftingMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CraftingMissionObjective");
}

CraftingMissionObjective::CraftingMissionObjective(DummyConstructorParameter* param) : DeliverMissionObjective(param) {
	_setClassName("CraftingMissionObjective");
}

CraftingMissionObjective::~CraftingMissionObjective() {
}



void CraftingMissionObjective::initializeTransientMembers() {
	CraftingMissionObjectiveImplementation* _implementation = static_cast<CraftingMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CraftingMissionObjective::updateMissionStatus(CreatureObject* player) {
	CraftingMissionObjectiveImplementation* _implementation = static_cast<CraftingMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->updateMissionStatus(player);
}

void CraftingMissionObjective::abort() {
	CraftingMissionObjectiveImplementation* _implementation = static_cast<CraftingMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

DistributedObjectServant* CraftingMissionObjective::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void CraftingMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CraftingMissionObjectiveImplementation
 */

CraftingMissionObjectiveImplementation::CraftingMissionObjectiveImplementation(DummyConstructorParameter* param) : DeliverMissionObjectiveImplementation(param) {
	_initializeImplementation();
}


CraftingMissionObjectiveImplementation::~CraftingMissionObjectiveImplementation() {
	CraftingMissionObjectiveImplementation::finalize();
}


void CraftingMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(CraftingMissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CraftingMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CraftingMissionObjective*>(stub);
	DeliverMissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingMissionObjectiveImplementation::_getStub() {
	return _this.get();
}

CraftingMissionObjectiveImplementation::operator const CraftingMissionObjective*() {
	return _this.get();
}

void CraftingMissionObjectiveImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CraftingMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CraftingMissionObjectiveImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CraftingMissionObjectiveImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CraftingMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CraftingMissionObjectiveImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CraftingMissionObjectiveImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CraftingMissionObjectiveImplementation::_serializationHelperMethod() {
	DeliverMissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("CraftingMissionObjective");

}

void CraftingMissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CraftingMissionObjectiveImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CraftingMissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (DeliverMissionObjectiveImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void CraftingMissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CraftingMissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CraftingMissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = DeliverMissionObjectiveImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

CraftingMissionObjectiveImplementation::CraftingMissionObjectiveImplementation(MissionObject* mission) : DeliverMissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/CraftingMissionObjective.idl():  		Logger.setLoggingName("CraftingMissionObjective");
	Logger::setLoggingName("CraftingMissionObjective");
}

void CraftingMissionObjectiveImplementation::finalize() {
}

void CraftingMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/CraftingMissionObjective.idl():  		super.initializeTransientMembers();
	DeliverMissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/CraftingMissionObjective.idl():  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
}

/*
 *	CraftingMissionObjectiveAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CraftingMissionObjectiveAdapter::CraftingMissionObjectiveAdapter(CraftingMissionObjective* obj) : DeliverMissionObjectiveAdapter(obj) {
}

void CraftingMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_FINALIZE__:
		{
			finalize();
		}
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_:
		{
			updateMissionStatus(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ABORT__:
		{
			abort();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void CraftingMissionObjectiveAdapter::finalize() {
	(static_cast<CraftingMissionObjective*>(stub))->finalize();
}

void CraftingMissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<CraftingMissionObjective*>(stub))->initializeTransientMembers();
}

void CraftingMissionObjectiveAdapter::updateMissionStatus(CreatureObject* player) {
	(static_cast<CraftingMissionObjective*>(stub))->updateMissionStatus(player);
}

void CraftingMissionObjectiveAdapter::abort() {
	(static_cast<CraftingMissionObjective*>(stub))->abort();
}

/*
 *	CraftingMissionObjectiveHelper
 */

CraftingMissionObjectiveHelper* CraftingMissionObjectiveHelper::staticInitializer = CraftingMissionObjectiveHelper::instance();

CraftingMissionObjectiveHelper::CraftingMissionObjectiveHelper() {
	className = "CraftingMissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void CraftingMissionObjectiveHelper::finalizeHelper() {
	CraftingMissionObjectiveHelper::finalize();
}

DistributedObject* CraftingMissionObjectiveHelper::instantiateObject() {
	return new CraftingMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingMissionObjectiveHelper::instantiateServant() {
	return new CraftingMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingMissionObjectiveAdapter(static_cast<CraftingMissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

