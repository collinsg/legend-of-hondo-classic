/*
 *	server/zone/objects/waypoint/WaypointObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WaypointObject.h"

/*
 *	WaypointObjectStub
 */

WaypointObject::WaypointObject(LuaObject* templateData) : IntangibleObject(DummyConstructorParameter::instance()) {
	_impl = new WaypointObjectImplementation(templateData);
	_impl->_setStub(this);
}

WaypointObject::WaypointObject(DummyConstructorParameter* param) : IntangibleObject(param) {
}

WaypointObject::~WaypointObject() {
}

void WaypointObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->initializeTransientMembers();
}

void WaypointObject::changeStatus(bool status) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(status);

		method.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->changeStatus(status);
}

void WaypointObject::switchStatus() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->switchStatus();
}

bool WaypointObject::getStatus() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return ((WaypointObjectImplementation*) _impl)->getStatus();
}

void WaypointObject::setInternalNote(const String& message) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addAsciiParameter(message);

		method.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->setInternalNote(message);
}

void WaypointObject::setPlanetName(const String& planet) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addAsciiParameter(planet);

		method.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->setPlanetName(planet);
}

unsigned int WaypointObject::getPlanetCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((WaypointObjectImplementation*) _impl)->getPlanetCRC();
}

String WaypointObject::getInternalNote() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithAsciiReturn(_return_getInternalNote);
		return _return_getInternalNote;
	} else
		return ((WaypointObjectImplementation*) _impl)->getInternalNote();
}

String WaypointObject::getPlanetName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithAsciiReturn(_return_getPlanetName);
		return _return_getPlanetName;
	} else
		return ((WaypointObjectImplementation*) _impl)->getPlanetName();
}

/*
 *	WaypointObjectImplementation
 */

WaypointObjectImplementation::WaypointObjectImplementation(DummyConstructorParameter* param) : IntangibleObjectImplementation(param) {
	_initializeImplementation();
}

WaypointObjectImplementation::~WaypointObjectImplementation() {
}

void WaypointObjectImplementation::_initializeImplementation() {
	_setClassHelper(WaypointObjectHelper::instance());

	_serializationHelperMethod();
}

void WaypointObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (WaypointObject*) stub;
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WaypointObjectImplementation::_getStub() {
	return _this;
}

WaypointObjectImplementation::operator const WaypointObject*() {
	return _this;
}

void WaypointObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WaypointObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WaypointObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WaypointObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WaypointObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WaypointObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WaypointObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WaypointObjectImplementation::_serializationHelperMethod() {
	IntangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("WaypointObject");

	addSerializableVariable("internalNote", &internalNote);
	addSerializableVariable("planetName", &planetName);
	addSerializableVariable("active", &active);
}

WaypointObjectImplementation::WaypointObjectImplementation(LuaObject* templateData) : IntangibleObjectImplementation(templateData) {
	_initializeImplementation();
	// server/zone/objects/waypoint/WaypointObject.idl(60):  internalNote = "EMPTY";
	internalNote = "EMPTY";
	// server/zone/objects/waypoint/WaypointObject.idl(62):  Logger.setLoggingName("WaypointObject");
	Logger::setLoggingName("WaypointObject");
}

void WaypointObjectImplementation::changeStatus(bool status) {
	// server/zone/objects/waypoint/WaypointObject.idl(68):  active = status;
	active = status;
}

void WaypointObjectImplementation::switchStatus() {
	// server/zone/objects/waypoint/WaypointObject.idl(72):  
	if (active)	// server/zone/objects/waypoint/WaypointObject.idl(73):  active = false;
	active = false;

	else 	// server/zone/objects/waypoint/WaypointObject.idl(76):  active = true;
	active = true;
}

bool WaypointObjectImplementation::getStatus() {
	// server/zone/objects/waypoint/WaypointObject.idl(80):  return active;
	return active;
}

void WaypointObjectImplementation::setInternalNote(const String& message) {
	// server/zone/objects/waypoint/WaypointObject.idl(84):  internalNote = message;
	internalNote = message;
}

void WaypointObjectImplementation::setPlanetName(const String& planet) {
	// server/zone/objects/waypoint/WaypointObject.idl(88):  planetName = planet;
	planetName = planet;
}

String WaypointObjectImplementation::getInternalNote() {
	// server/zone/objects/waypoint/WaypointObject.idl(94):  return internalNote;
	return internalNote;
}

String WaypointObjectImplementation::getPlanetName() {
	// server/zone/objects/waypoint/WaypointObject.idl(98):  return planetName;
	return planetName;
}

/*
 *	WaypointObjectAdapter
 */

WaypointObjectAdapter::WaypointObjectAdapter(WaypointObjectImplementation* obj) : IntangibleObjectAdapter(obj) {
}

Packet* WaypointObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	WaypointObjectHelper
 */

WaypointObjectHelper* WaypointObjectHelper::staticInitializer = WaypointObjectHelper::instance();

WaypointObjectHelper::WaypointObjectHelper() {
	className = "WaypointObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void WaypointObjectHelper::finalizeHelper() {
	WaypointObjectHelper::finalize();
}

DistributedObject* WaypointObjectHelper::instantiateObject() {
	return new WaypointObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WaypointObjectHelper::instantiateServant() {
	return new WaypointObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WaypointObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WaypointObjectAdapter((WaypointObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

