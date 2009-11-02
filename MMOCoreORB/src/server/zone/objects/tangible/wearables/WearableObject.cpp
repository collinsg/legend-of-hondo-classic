/*
 *	server/zone/objects/tangible/wearables/WearableObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WearableObject.h"

/*
 *	WearableObjectStub
 */

WearableObject::WearableObject(LuaObject* templateData) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new WearableObjectImplementation(templateData);
	_impl->_setStub(this);
}

WearableObject::WearableObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

WearableObject::~WearableObject() {
}

void WearableObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((WearableObjectImplementation*) _impl)->initializeTransientMembers();
}

/*
 *	WearableObjectImplementation
 */

WearableObjectImplementation::WearableObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

WearableObjectImplementation::~WearableObjectImplementation() {
}

void WearableObjectImplementation::_initializeImplementation() {
	_setClassHelper(WearableObjectHelper::instance());

	_serializationHelperMethod();
}

void WearableObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (WearableObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WearableObjectImplementation::_getStub() {
	return _this;
}

WearableObjectImplementation::operator const WearableObject*() {
	return _this;
}

void WearableObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WearableObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WearableObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WearableObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WearableObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WearableObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WearableObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WearableObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("WearableObject");

}

WearableObjectImplementation::WearableObjectImplementation(LuaObject* templateData) : TangibleObjectImplementation(templateData) {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/WearableObject.idl(55):  Logger.setLoggingName("WearableObject");
	Logger::setLoggingName("WearableObject");
}

/*
 *	WearableObjectAdapter
 */

WearableObjectAdapter::WearableObjectAdapter(WearableObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* WearableObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	WearableObjectHelper
 */

WearableObjectHelper* WearableObjectHelper::staticInitializer = WearableObjectHelper::instance();

WearableObjectHelper::WearableObjectHelper() {
	className = "WearableObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void WearableObjectHelper::finalizeHelper() {
	WearableObjectHelper::finalize();
}

DistributedObject* WearableObjectHelper::instantiateObject() {
	return new WearableObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WearableObjectHelper::instantiateServant() {
	return new WearableObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WearableObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WearableObjectAdapter((WearableObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

