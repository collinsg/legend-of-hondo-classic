/*
 *	server/zone/objects/creature/NonPlayerCreatureObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "NonPlayerCreatureObject.h"

#include "server/zone/Zone.h"

/*
 *	NonPlayerCreatureObjectStub
 */

NonPlayerCreatureObject::NonPlayerCreatureObject() : CreatureObject(DummyConstructorParameter::instance()) {
	_impl = new NonPlayerCreatureObjectImplementation();
	_impl->_setStub(this);
}

NonPlayerCreatureObject::NonPlayerCreatureObject(DummyConstructorParameter* param) : CreatureObject(param) {
}

NonPlayerCreatureObject::~NonPlayerCreatureObject() {
}


bool NonPlayerCreatureObject::isAttackableBy(CreatureObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isAttackableBy(object);
}

/*
 *	NonPlayerCreatureObjectImplementation
 */

NonPlayerCreatureObjectImplementation::NonPlayerCreatureObjectImplementation(DummyConstructorParameter* param) : CreatureObjectImplementation(param) {
	_initializeImplementation();
}

NonPlayerCreatureObjectImplementation::~NonPlayerCreatureObjectImplementation() {
}


void NonPlayerCreatureObjectImplementation::finalize() {
}

void NonPlayerCreatureObjectImplementation::_initializeImplementation() {
	_setClassHelper(NonPlayerCreatureObjectHelper::instance());

	_serializationHelperMethod();
}

void NonPlayerCreatureObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (NonPlayerCreatureObject*) stub;
	CreatureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* NonPlayerCreatureObjectImplementation::_getStub() {
	return _this;
}

NonPlayerCreatureObjectImplementation::operator const NonPlayerCreatureObject*() {
	return _this;
}

void NonPlayerCreatureObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void NonPlayerCreatureObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void NonPlayerCreatureObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void NonPlayerCreatureObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void NonPlayerCreatureObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void NonPlayerCreatureObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void NonPlayerCreatureObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void NonPlayerCreatureObjectImplementation::_serializationHelperMethod() {
	CreatureObjectImplementation::_serializationHelperMethod();

	_setClassName("NonPlayerCreatureObject");

}

NonPlayerCreatureObjectImplementation::NonPlayerCreatureObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(57):  		Logger.setLoggingName("NonPlayerCreatureObject");
	Logger::setLoggingName("NonPlayerCreatureObject");
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(58):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(59):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
}

bool NonPlayerCreatureObjectImplementation::isAttackableBy(CreatureObject* object) {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(69):  		if 
	if (object == _this)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(70):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(72):  		return 
	if (_this->isDead())	// server/zone/objects/creature/NonPlayerCreatureObject.idl(73):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(75):  true;
	return true;
}

/*
 *	NonPlayerCreatureObjectAdapter
 */

NonPlayerCreatureObjectAdapter::NonPlayerCreatureObjectAdapter(NonPlayerCreatureObjectImplementation* obj) : CreatureObjectAdapter(obj) {
}

Packet* NonPlayerCreatureObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertBoolean(isAttackableBy((CreatureObject*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

bool NonPlayerCreatureObjectAdapter::isAttackableBy(CreatureObject* object) {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isAttackableBy(object);
}

/*
 *	NonPlayerCreatureObjectHelper
 */

NonPlayerCreatureObjectHelper* NonPlayerCreatureObjectHelper::staticInitializer = NonPlayerCreatureObjectHelper::instance();

NonPlayerCreatureObjectHelper::NonPlayerCreatureObjectHelper() {
	className = "NonPlayerCreatureObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void NonPlayerCreatureObjectHelper::finalizeHelper() {
	NonPlayerCreatureObjectHelper::finalize();
}

DistributedObject* NonPlayerCreatureObjectHelper::instantiateObject() {
	return new NonPlayerCreatureObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* NonPlayerCreatureObjectHelper::instantiateServant() {
	return new NonPlayerCreatureObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* NonPlayerCreatureObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new NonPlayerCreatureObjectAdapter((NonPlayerCreatureObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

