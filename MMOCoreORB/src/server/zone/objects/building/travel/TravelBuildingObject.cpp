/*
 *	server/zone/objects/building/travel/TravelBuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "TravelBuildingObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/cell/CellObject.h"

/*
 *	TravelBuildingObjectStub
 */

TravelBuildingObject::TravelBuildingObject() : BuildingObject(DummyConstructorParameter::instance()) {
	TravelBuildingObjectImplementation* _implementation = new TravelBuildingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TravelBuildingObject");
}

TravelBuildingObject::TravelBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
	_setClassName("TravelBuildingObject");
}

TravelBuildingObject::~TravelBuildingObject() {
}



DistributedObjectServant* TravelBuildingObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void TravelBuildingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TravelBuildingObjectImplementation
 */

TravelBuildingObjectImplementation::TravelBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}


TravelBuildingObjectImplementation::~TravelBuildingObjectImplementation() {
}


void TravelBuildingObjectImplementation::finalize() {
}

void TravelBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(TravelBuildingObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TravelBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TravelBuildingObject*>(stub);
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TravelBuildingObjectImplementation::_getStub() {
	return _this.get();
}

TravelBuildingObjectImplementation::operator const TravelBuildingObject*() {
	return _this.get();
}

void TravelBuildingObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TravelBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TravelBuildingObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TravelBuildingObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TravelBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TravelBuildingObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TravelBuildingObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TravelBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("TravelBuildingObject");

}

void TravelBuildingObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TravelBuildingObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TravelBuildingObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (BuildingObjectImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void TravelBuildingObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TravelBuildingObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TravelBuildingObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuildingObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

TravelBuildingObjectImplementation::TravelBuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/travel/TravelBuildingObject.idl():  		Logger.setLoggingName("TravelBuildingObject");
	Logger::setLoggingName("TravelBuildingObject");
}

/*
 *	TravelBuildingObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TravelBuildingObjectAdapter::TravelBuildingObjectAdapter(TravelBuildingObject* obj) : BuildingObjectAdapter(obj) {
}

void TravelBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	default:
		throw Exception("Method does not exists");
	}
}

/*
 *	TravelBuildingObjectHelper
 */

TravelBuildingObjectHelper* TravelBuildingObjectHelper::staticInitializer = TravelBuildingObjectHelper::instance();

TravelBuildingObjectHelper::TravelBuildingObjectHelper() {
	className = "TravelBuildingObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void TravelBuildingObjectHelper::finalizeHelper() {
	TravelBuildingObjectHelper::finalize();
}

DistributedObject* TravelBuildingObjectHelper::instantiateObject() {
	return new TravelBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* TravelBuildingObjectHelper::instantiateServant() {
	return new TravelBuildingObjectImplementation();
}

DistributedObjectAdapter* TravelBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TravelBuildingObjectAdapter(static_cast<TravelBuildingObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

