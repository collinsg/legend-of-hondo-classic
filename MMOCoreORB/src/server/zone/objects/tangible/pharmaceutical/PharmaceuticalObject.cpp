/*
 *	server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "PharmaceuticalObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	PharmaceuticalObjectStub
 */

PharmaceuticalObject::PharmaceuticalObject() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new PharmaceuticalObjectImplementation();
	_impl->_setStub(this);
}

PharmaceuticalObject::PharmaceuticalObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

PharmaceuticalObject::~PharmaceuticalObject() {
}


int PharmaceuticalObject::getMedicineUseRequired() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithSignedIntReturn();
	} else
		return ((PharmaceuticalObjectImplementation*) _impl)->getMedicineUseRequired();
}

float PharmaceuticalObject::getRange(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(creature);

		return method.executeWithFloatReturn();
	} else
		return ((PharmaceuticalObjectImplementation*) _impl)->getRange(creature);
}

bool PharmaceuticalObject::isArea() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithBooleanReturn();
	} else
		return ((PharmaceuticalObjectImplementation*) _impl)->isArea();
}

float PharmaceuticalObject::getArea() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithFloatReturn();
	} else
		return ((PharmaceuticalObjectImplementation*) _impl)->getArea();
}

bool PharmaceuticalObject::isPharmaceuticalObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return ((PharmaceuticalObjectImplementation*) _impl)->isPharmaceuticalObject();
}

bool PharmaceuticalObject::isStimPack() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithBooleanReturn();
	} else
		return ((PharmaceuticalObjectImplementation*) _impl)->isStimPack();
}

bool PharmaceuticalObject::isRangedStimPack() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithBooleanReturn();
	} else
		return ((PharmaceuticalObjectImplementation*) _impl)->isRangedStimPack();
}

/*
 *	PharmaceuticalObjectImplementation
 */

PharmaceuticalObjectImplementation::PharmaceuticalObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

PharmaceuticalObjectImplementation::~PharmaceuticalObjectImplementation() {
}


void PharmaceuticalObjectImplementation::finalize() {
}

void PharmaceuticalObjectImplementation::_initializeImplementation() {
	_setClassHelper(PharmaceuticalObjectHelper::instance());

	_serializationHelperMethod();
}

void PharmaceuticalObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PharmaceuticalObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PharmaceuticalObjectImplementation::_getStub() {
	return _this;
}

PharmaceuticalObjectImplementation::operator const PharmaceuticalObject*() {
	return _this;
}

void PharmaceuticalObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PharmaceuticalObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PharmaceuticalObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PharmaceuticalObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PharmaceuticalObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PharmaceuticalObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PharmaceuticalObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PharmaceuticalObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("PharmaceuticalObject");

	addSerializableVariable("medicineUseRequired", &medicineUseRequired);
}

PharmaceuticalObjectImplementation::PharmaceuticalObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl(61):  		setLoggingName("PharmaceuticalObject");
	setLoggingName("PharmaceuticalObject");
}

int PharmaceuticalObjectImplementation::getMedicineUseRequired() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl(65):  		return medicineUseRequired;
	return medicineUseRequired;
}

float PharmaceuticalObjectImplementation::getRange(CreatureObject* creature) {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl(69):  		return 5;
	return 5;
}

bool PharmaceuticalObjectImplementation::isArea() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl(73):  		return false;
	return false;
}

float PharmaceuticalObjectImplementation::getArea() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl(77):  		return 0;
	return 0;
}

bool PharmaceuticalObjectImplementation::isPharmaceuticalObject() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl(81):  		return true;
	return true;
}

bool PharmaceuticalObjectImplementation::isStimPack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl(85):  		return false;
	return false;
}

bool PharmaceuticalObjectImplementation::isRangedStimPack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl(89):  		return false;
	return false;
}

/*
 *	PharmaceuticalObjectAdapter
 */

PharmaceuticalObjectAdapter::PharmaceuticalObjectAdapter(PharmaceuticalObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* PharmaceuticalObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(getMedicineUseRequired());
		break;
	case 7:
		resp->insertFloat(getRange((CreatureObject*) inv->getObjectParameter()));
		break;
	case 8:
		resp->insertBoolean(isArea());
		break;
	case 9:
		resp->insertFloat(getArea());
		break;
	case 10:
		resp->insertBoolean(isPharmaceuticalObject());
		break;
	case 11:
		resp->insertBoolean(isStimPack());
		break;
	case 12:
		resp->insertBoolean(isRangedStimPack());
		break;
	default:
		return NULL;
	}

	return resp;
}

int PharmaceuticalObjectAdapter::getMedicineUseRequired() {
	return ((PharmaceuticalObjectImplementation*) impl)->getMedicineUseRequired();
}

float PharmaceuticalObjectAdapter::getRange(CreatureObject* creature) {
	return ((PharmaceuticalObjectImplementation*) impl)->getRange(creature);
}

bool PharmaceuticalObjectAdapter::isArea() {
	return ((PharmaceuticalObjectImplementation*) impl)->isArea();
}

float PharmaceuticalObjectAdapter::getArea() {
	return ((PharmaceuticalObjectImplementation*) impl)->getArea();
}

bool PharmaceuticalObjectAdapter::isPharmaceuticalObject() {
	return ((PharmaceuticalObjectImplementation*) impl)->isPharmaceuticalObject();
}

bool PharmaceuticalObjectAdapter::isStimPack() {
	return ((PharmaceuticalObjectImplementation*) impl)->isStimPack();
}

bool PharmaceuticalObjectAdapter::isRangedStimPack() {
	return ((PharmaceuticalObjectImplementation*) impl)->isRangedStimPack();
}

/*
 *	PharmaceuticalObjectHelper
 */

PharmaceuticalObjectHelper* PharmaceuticalObjectHelper::staticInitializer = PharmaceuticalObjectHelper::instance();

PharmaceuticalObjectHelper::PharmaceuticalObjectHelper() {
	className = "PharmaceuticalObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PharmaceuticalObjectHelper::finalizeHelper() {
	PharmaceuticalObjectHelper::finalize();
}

DistributedObject* PharmaceuticalObjectHelper::instantiateObject() {
	return new PharmaceuticalObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* PharmaceuticalObjectHelper::instantiateServant() {
	return new PharmaceuticalObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PharmaceuticalObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PharmaceuticalObjectAdapter((PharmaceuticalObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

