/*
 *	server/zone/managers/ZoneManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "ZoneManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/managers/object/ObjectManager.h"

/*
 *	ZoneManagerStub
 */

ZoneManager::ZoneManager(const String& name) : ManagedService(DummyConstructorParameter::instance()) {
	ZoneManagerImplementation* _implementation = new ZoneManagerImplementation(name);
	_impl = _implementation;
	_impl->_setStub(this);
}

ZoneManager::ZoneManager(DummyConstructorParameter* param) : ManagedService(param) {
}

ZoneManager::~ZoneManager() {
}


void ZoneManager::setZoneProcessor(ZoneProcessServer* server) {
	ZoneManagerImplementation* _implementation = (ZoneManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(server);

		method.executeWithVoidReturn();
	} else
		_implementation->setZoneProcessor(server);
}

DistributedObjectServant* ZoneManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void ZoneManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ZoneManagerImplementation
 */

ZoneManagerImplementation::ZoneManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


ZoneManagerImplementation::~ZoneManagerImplementation() {
}


void ZoneManagerImplementation::finalize() {
}

void ZoneManagerImplementation::_initializeImplementation() {
	_setClassHelper(ZoneManagerHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void ZoneManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneManagerImplementation::_getStub() {
	return _this;
}

ZoneManagerImplementation::operator const ZoneManager*() {
	return _this;
}

void ZoneManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ZoneManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ZoneManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ZoneManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ZoneManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ZoneManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ZoneManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ZoneManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("ZoneManager");

}

void ZoneManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ZoneManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ZoneManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void ZoneManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ZoneManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ZoneManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + ManagedServiceImplementation::writeObjectMembers(stream);
}

ZoneManagerImplementation::ZoneManagerImplementation(const String& name) {
	_initializeImplementation();
	// server/zone/managers/ZoneManager.idl(63):  		Logger.setLoggingName(name);
	Logger::setLoggingName(name);
	// server/zone/managers/ZoneManager.idl(65):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/ZoneManager.idl(66):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/ZoneManager.idl(68):  		zoneServer = null;
	zoneServer = NULL;
	// server/zone/managers/ZoneManager.idl(69):  		zoneProcessor = null;
	zoneProcessor = NULL;
	// server/zone/managers/ZoneManager.idl(70):  		objectManager = null;
	objectManager = NULL;
}

void ZoneManagerImplementation::setZoneProcessor(ZoneProcessServer* server) {
	// server/zone/managers/ZoneManager.idl(74):  		zoneServer = server.getZoneServer();
	zoneServer = server->getZoneServer();
	// server/zone/managers/ZoneManager.idl(75):  		zoneProcessor = server;
	zoneProcessor = server;
	// server/zone/managers/ZoneManager.idl(76):  		objectManager = zoneServer.getObjectManager();
	objectManager = zoneServer->getObjectManager();
}

/*
 *	ZoneManagerAdapter
 */

ZoneManagerAdapter::ZoneManagerAdapter(ZoneManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* ZoneManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		setZoneProcessor((ZoneProcessServer*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneManagerAdapter::setZoneProcessor(ZoneProcessServer* server) {
	((ZoneManagerImplementation*) impl)->setZoneProcessor(server);
}

/*
 *	ZoneManagerHelper
 */

ZoneManagerHelper* ZoneManagerHelper::staticInitializer = ZoneManagerHelper::instance();

ZoneManagerHelper::ZoneManagerHelper() {
	className = "ZoneManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneManagerHelper::finalizeHelper() {
	ZoneManagerHelper::finalize();
}

DistributedObject* ZoneManagerHelper::instantiateObject() {
	return new ZoneManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* ZoneManagerHelper::instantiateServant() {
	return new ZoneManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneManagerAdapter((ZoneManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

