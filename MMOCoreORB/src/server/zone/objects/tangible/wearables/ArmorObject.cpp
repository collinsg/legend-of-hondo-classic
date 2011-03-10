/*
 *	server/zone/objects/tangible/wearables/ArmorObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "ArmorObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	ArmorObjectStub
 */

ArmorObject::ArmorObject() : WearableObject(DummyConstructorParameter::instance()) {
	ArmorObjectImplementation* _implementation = new ArmorObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ArmorObject::ArmorObject(DummyConstructorParameter* param) : WearableObject(param) {
}

ArmorObject::~ArmorObject() {
}


void ArmorObject::initializeTransientMembers() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ArmorObject::loadTemplateData(SharedObjectTemplate* templateData) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void ArmorObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

int ArmorObject::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void ArmorObject::updateCraftingValues(ManufactureSchematic* schematic) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCraftingValues(schematic);
}

bool ArmorObject::isSpecial(int type) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addSignedIntParameter(type);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isSpecial(type);
}

bool ArmorObject::isVulnerable(int type) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addSignedIntParameter(type);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isVulnerable(type);
}

bool ArmorObject::isArmorObject() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isArmorObject();
}

void ArmorObject::setRating(int rate) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(rate);

		method.executeWithVoidReturn();
	} else
		_implementation->setRating(rate);
}

int ArmorObject::getRating() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getRating();
}

float ArmorObject::getKinetic() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getKinetic();
}

void ArmorObject::setKinetic(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setKinetic(value);
}

float ArmorObject::getEnergy() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getEnergy();
}

void ArmorObject::setEnergy(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setEnergy(value);
}

float ArmorObject::getElectricity() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getElectricity();
}

void ArmorObject::setElectricity(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setElectricity(value);
}

float ArmorObject::getStun() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getStun();
}

void ArmorObject::setStun(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setStun(value);
}

float ArmorObject::getBlast() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getBlast();
}

void ArmorObject::setBlast(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setBlast(value);
}

float ArmorObject::getHeat() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHeat();
}

void ArmorObject::setHeat(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setHeat(value);
}

float ArmorObject::getCold() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getCold();
}

void ArmorObject::setCold(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setCold(value);
}

float ArmorObject::getAcid() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getAcid();
}

void ArmorObject::setAcid(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setAcid(value);
}

float ArmorObject::getLightSaber() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getLightSaber();
}

void ArmorObject::setLightSaber(float value) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setLightSaber(value);
}

int ArmorObject::getHealthEncumbrance() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getHealthEncumbrance();
}

void ArmorObject::setHealthEncumbrance(int encumber) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addSignedIntParameter(encumber);

		method.executeWithVoidReturn();
	} else
		_implementation->setHealthEncumbrance(encumber);
}

int ArmorObject::getActionEncumbrance() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getActionEncumbrance();
}

void ArmorObject::setActionEncumbrance(int encumber) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addSignedIntParameter(encumber);

		method.executeWithVoidReturn();
	} else
		_implementation->setActionEncumbrance(encumber);
}

int ArmorObject::getMindEncumbrance() {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMindEncumbrance();
}

void ArmorObject::setMindEncumbrance(int encumber) {
	ArmorObjectImplementation* _implementation = (ArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);
		method.addSignedIntParameter(encumber);

		method.executeWithVoidReturn();
	} else
		_implementation->setMindEncumbrance(encumber);
}

DistributedObjectServant* ArmorObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void ArmorObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ArmorObjectImplementation
 */

ArmorObjectImplementation::ArmorObjectImplementation(DummyConstructorParameter* param) : WearableObjectImplementation(param) {
	_initializeImplementation();
}


ArmorObjectImplementation::~ArmorObjectImplementation() {
}


void ArmorObjectImplementation::finalize() {
}

void ArmorObjectImplementation::_initializeImplementation() {
	_setClassHelper(ArmorObjectHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void ArmorObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ArmorObject*) stub;
	WearableObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ArmorObjectImplementation::_getStub() {
	return _this;
}

ArmorObjectImplementation::operator const ArmorObject*() {
	return _this;
}

void ArmorObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ArmorObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ArmorObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ArmorObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ArmorObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ArmorObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ArmorObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ArmorObjectImplementation::_serializationHelperMethod() {
	WearableObjectImplementation::_serializationHelperMethod();

	_setClassName("ArmorObject");

}

void ArmorObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ArmorObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ArmorObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (WearableObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "healthEncumbrance") {
		TypeInfo<int >::parseFromBinaryStream(&healthEncumbrance, stream);
		return true;
	}

	if (_name == "actionEncumbrance") {
		TypeInfo<int >::parseFromBinaryStream(&actionEncumbrance, stream);
		return true;
	}

	if (_name == "mindEncumbrance") {
		TypeInfo<int >::parseFromBinaryStream(&mindEncumbrance, stream);
		return true;
	}

	if (_name == "rating") {
		TypeInfo<int >::parseFromBinaryStream(&rating, stream);
		return true;
	}

	if (_name == "kinetic") {
		TypeInfo<float >::parseFromBinaryStream(&kinetic, stream);
		return true;
	}

	if (_name == "energy") {
		TypeInfo<float >::parseFromBinaryStream(&energy, stream);
		return true;
	}

	if (_name == "electricity") {
		TypeInfo<float >::parseFromBinaryStream(&electricity, stream);
		return true;
	}

	if (_name == "stun") {
		TypeInfo<float >::parseFromBinaryStream(&stun, stream);
		return true;
	}

	if (_name == "blast") {
		TypeInfo<float >::parseFromBinaryStream(&blast, stream);
		return true;
	}

	if (_name == "heat") {
		TypeInfo<float >::parseFromBinaryStream(&heat, stream);
		return true;
	}

	if (_name == "cold") {
		TypeInfo<float >::parseFromBinaryStream(&cold, stream);
		return true;
	}

	if (_name == "acid") {
		TypeInfo<float >::parseFromBinaryStream(&acid, stream);
		return true;
	}

	if (_name == "lightSaber") {
		TypeInfo<float >::parseFromBinaryStream(&lightSaber, stream);
		return true;
	}

	if (_name == "specialResists") {
		TypeInfo<int >::parseFromBinaryStream(&specialResists, stream);
		return true;
	}

	if (_name == "vulnerabilites") {
		TypeInfo<int >::parseFromBinaryStream(&vulnerabilites, stream);
		return true;
	}

	if (_name == "specialBase") {
		TypeInfo<float >::parseFromBinaryStream(&specialBase, stream);
		return true;
	}


	return false;
}

void ArmorObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ArmorObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ArmorObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "healthEncumbrance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&healthEncumbrance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "actionEncumbrance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&actionEncumbrance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "mindEncumbrance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&mindEncumbrance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "rating";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&rating, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "kinetic";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&kinetic, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "energy";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&energy, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "electricity";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&electricity, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "stun";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&stun, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "blast";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&blast, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "heat";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&heat, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "cold";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&cold, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "acid";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&acid, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lightSaber";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&lightSaber, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "specialResists";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&specialResists, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "vulnerabilites";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&vulnerabilites, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "specialBase";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&specialBase, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 16 + WearableObjectImplementation::writeObjectMembers(stream);
}

ArmorObjectImplementation::ArmorObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		healthEncumbrance = 100;
	healthEncumbrance = 100;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		actionEncumbrance = 100;
	actionEncumbrance = 100;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		mindEncumbrance = 100;
	mindEncumbrance = 100;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		rating = LIGHT;
	rating = LIGHT;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		kinetic = 0;
	kinetic = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		energy = 0;
	energy = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		electricity = 0;
	electricity = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		stun = 0;
	stun = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		blast = 0;
	blast = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		heat = 0;
	heat = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		cold = 0;
	cold = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		acid = 0;
	acid = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		lightSaber = 0;
	lightSaber = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		specialResists = 0;
	specialResists = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		Logger.setLoggingName("ArmorObject");
	Logger::setLoggingName("ArmorObject");
}

bool ArmorObjectImplementation::isSpecial(int type) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return specialResists & type;
	return specialResists & type;
}

bool ArmorObjectImplementation::isVulnerable(int type) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return vulnerabilites & type;
	return vulnerabilites & type;
}

bool ArmorObjectImplementation::isArmorObject() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return true;
	return true;
}

void ArmorObjectImplementation::setRating(int rate) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		rating = rate;
	rating = rate;
}

int ArmorObjectImplementation::getRating() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return rating;
	return rating;
}

float ArmorObjectImplementation::getKinetic() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return kinetic;
	return kinetic;
}

void ArmorObjectImplementation::setKinetic(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		kinetic = value;
	kinetic = value;
}

float ArmorObjectImplementation::getEnergy() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return energy;
	return energy;
}

void ArmorObjectImplementation::setEnergy(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		energy = value;
	energy = value;
}

float ArmorObjectImplementation::getElectricity() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return electricity;
	return electricity;
}

void ArmorObjectImplementation::setElectricity(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		electricity = value;
	electricity = value;
}

float ArmorObjectImplementation::getStun() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return stun;
	return stun;
}

void ArmorObjectImplementation::setStun(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		stun = value;
	stun = value;
}

float ArmorObjectImplementation::getBlast() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return blast;
	return blast;
}

void ArmorObjectImplementation::setBlast(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		blast = value;
	blast = value;
}

float ArmorObjectImplementation::getHeat() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return heat;
	return heat;
}

void ArmorObjectImplementation::setHeat(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		heat = value;
	heat = value;
}

float ArmorObjectImplementation::getCold() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return cold;
	return cold;
}

void ArmorObjectImplementation::setCold(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		cold = value;
	cold = value;
}

float ArmorObjectImplementation::getAcid() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return acid;
	return acid;
}

void ArmorObjectImplementation::setAcid(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		acid = value;
	acid = value;
}

float ArmorObjectImplementation::getLightSaber() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return lightSaber;
	return lightSaber;
}

void ArmorObjectImplementation::setLightSaber(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		lightSaber = value;
	lightSaber = value;
}

int ArmorObjectImplementation::getHealthEncumbrance() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return healthEncumbrance;
	return healthEncumbrance;
}

void ArmorObjectImplementation::setHealthEncumbrance(int encumber) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		healthEncumbrance = encumber;
	healthEncumbrance = encumber;
}

int ArmorObjectImplementation::getActionEncumbrance() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return actionEncumbrance;
	return actionEncumbrance;
}

void ArmorObjectImplementation::setActionEncumbrance(int encumber) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		actionEncumbrance = encumber;
	actionEncumbrance = encumber;
}

int ArmorObjectImplementation::getMindEncumbrance() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		return mindEncumbrance;
	return mindEncumbrance;
}

void ArmorObjectImplementation::setMindEncumbrance(int encumber) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl():  		mindEncumbrance = encumber;
	mindEncumbrance = encumber;
}

/*
 *	ArmorObjectAdapter
 */

ArmorObjectAdapter::ArmorObjectAdapter(ArmorObjectImplementation* obj) : WearableObjectAdapter(obj) {
}

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_,RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_,RPC_ISSPECIAL__INT_,RPC_ISVULNERABLE__INT_,RPC_ISARMOROBJECT__,RPC_SETRATING__INT_,RPC_GETRATING__,RPC_GETKINETIC__,RPC_SETKINETIC__FLOAT_,RPC_GETENERGY__,RPC_SETENERGY__FLOAT_,RPC_GETELECTRICITY__,RPC_SETELECTRICITY__FLOAT_,RPC_GETSTUN__,RPC_SETSTUN__FLOAT_,RPC_GETBLAST__,RPC_SETBLAST__FLOAT_,RPC_GETHEAT__,RPC_SETHEAT__FLOAT_,RPC_GETCOLD__,RPC_SETCOLD__FLOAT_,RPC_GETACID__,RPC_SETACID__FLOAT_,RPC_GETLIGHTSABER__,RPC_SETLIGHTSABER__FLOAT_,RPC_GETHEALTHENCUMBRANCE__,RPC_SETHEALTHENCUMBRANCE__INT_,RPC_GETACTIONENCUMBRANCE__,RPC_SETACTIONENCUMBRANCE__INT_,RPC_GETMINDENCUMBRANCE__,RPC_SETMINDENCUMBRANCE__INT_};

Packet* ArmorObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_:
		updateCraftingValues((ManufactureSchematic*) inv->getObjectParameter());
		break;
	case RPC_ISSPECIAL__INT_:
		resp->insertBoolean(isSpecial(inv->getSignedIntParameter()));
		break;
	case RPC_ISVULNERABLE__INT_:
		resp->insertBoolean(isVulnerable(inv->getSignedIntParameter()));
		break;
	case RPC_ISARMOROBJECT__:
		resp->insertBoolean(isArmorObject());
		break;
	case RPC_SETRATING__INT_:
		setRating(inv->getSignedIntParameter());
		break;
	case RPC_GETRATING__:
		resp->insertSignedInt(getRating());
		break;
	case RPC_GETKINETIC__:
		resp->insertFloat(getKinetic());
		break;
	case RPC_SETKINETIC__FLOAT_:
		setKinetic(inv->getFloatParameter());
		break;
	case RPC_GETENERGY__:
		resp->insertFloat(getEnergy());
		break;
	case RPC_SETENERGY__FLOAT_:
		setEnergy(inv->getFloatParameter());
		break;
	case RPC_GETELECTRICITY__:
		resp->insertFloat(getElectricity());
		break;
	case RPC_SETELECTRICITY__FLOAT_:
		setElectricity(inv->getFloatParameter());
		break;
	case RPC_GETSTUN__:
		resp->insertFloat(getStun());
		break;
	case RPC_SETSTUN__FLOAT_:
		setStun(inv->getFloatParameter());
		break;
	case RPC_GETBLAST__:
		resp->insertFloat(getBlast());
		break;
	case RPC_SETBLAST__FLOAT_:
		setBlast(inv->getFloatParameter());
		break;
	case RPC_GETHEAT__:
		resp->insertFloat(getHeat());
		break;
	case RPC_SETHEAT__FLOAT_:
		setHeat(inv->getFloatParameter());
		break;
	case RPC_GETCOLD__:
		resp->insertFloat(getCold());
		break;
	case RPC_SETCOLD__FLOAT_:
		setCold(inv->getFloatParameter());
		break;
	case RPC_GETACID__:
		resp->insertFloat(getAcid());
		break;
	case RPC_SETACID__FLOAT_:
		setAcid(inv->getFloatParameter());
		break;
	case RPC_GETLIGHTSABER__:
		resp->insertFloat(getLightSaber());
		break;
	case RPC_SETLIGHTSABER__FLOAT_:
		setLightSaber(inv->getFloatParameter());
		break;
	case RPC_GETHEALTHENCUMBRANCE__:
		resp->insertSignedInt(getHealthEncumbrance());
		break;
	case RPC_SETHEALTHENCUMBRANCE__INT_:
		setHealthEncumbrance(inv->getSignedIntParameter());
		break;
	case RPC_GETACTIONENCUMBRANCE__:
		resp->insertSignedInt(getActionEncumbrance());
		break;
	case RPC_SETACTIONENCUMBRANCE__INT_:
		setActionEncumbrance(inv->getSignedIntParameter());
		break;
	case RPC_GETMINDENCUMBRANCE__:
		resp->insertSignedInt(getMindEncumbrance());
		break;
	case RPC_SETMINDENCUMBRANCE__INT_:
		setMindEncumbrance(inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ArmorObjectAdapter::initializeTransientMembers() {
	((ArmorObjectImplementation*) impl)->initializeTransientMembers();
}

int ArmorObjectAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((ArmorObjectImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void ArmorObjectAdapter::updateCraftingValues(ManufactureSchematic* schematic) {
	((ArmorObjectImplementation*) impl)->updateCraftingValues(schematic);
}

bool ArmorObjectAdapter::isSpecial(int type) {
	return ((ArmorObjectImplementation*) impl)->isSpecial(type);
}

bool ArmorObjectAdapter::isVulnerable(int type) {
	return ((ArmorObjectImplementation*) impl)->isVulnerable(type);
}

bool ArmorObjectAdapter::isArmorObject() {
	return ((ArmorObjectImplementation*) impl)->isArmorObject();
}

void ArmorObjectAdapter::setRating(int rate) {
	((ArmorObjectImplementation*) impl)->setRating(rate);
}

int ArmorObjectAdapter::getRating() {
	return ((ArmorObjectImplementation*) impl)->getRating();
}

float ArmorObjectAdapter::getKinetic() {
	return ((ArmorObjectImplementation*) impl)->getKinetic();
}

void ArmorObjectAdapter::setKinetic(float value) {
	((ArmorObjectImplementation*) impl)->setKinetic(value);
}

float ArmorObjectAdapter::getEnergy() {
	return ((ArmorObjectImplementation*) impl)->getEnergy();
}

void ArmorObjectAdapter::setEnergy(float value) {
	((ArmorObjectImplementation*) impl)->setEnergy(value);
}

float ArmorObjectAdapter::getElectricity() {
	return ((ArmorObjectImplementation*) impl)->getElectricity();
}

void ArmorObjectAdapter::setElectricity(float value) {
	((ArmorObjectImplementation*) impl)->setElectricity(value);
}

float ArmorObjectAdapter::getStun() {
	return ((ArmorObjectImplementation*) impl)->getStun();
}

void ArmorObjectAdapter::setStun(float value) {
	((ArmorObjectImplementation*) impl)->setStun(value);
}

float ArmorObjectAdapter::getBlast() {
	return ((ArmorObjectImplementation*) impl)->getBlast();
}

void ArmorObjectAdapter::setBlast(float value) {
	((ArmorObjectImplementation*) impl)->setBlast(value);
}

float ArmorObjectAdapter::getHeat() {
	return ((ArmorObjectImplementation*) impl)->getHeat();
}

void ArmorObjectAdapter::setHeat(float value) {
	((ArmorObjectImplementation*) impl)->setHeat(value);
}

float ArmorObjectAdapter::getCold() {
	return ((ArmorObjectImplementation*) impl)->getCold();
}

void ArmorObjectAdapter::setCold(float value) {
	((ArmorObjectImplementation*) impl)->setCold(value);
}

float ArmorObjectAdapter::getAcid() {
	return ((ArmorObjectImplementation*) impl)->getAcid();
}

void ArmorObjectAdapter::setAcid(float value) {
	((ArmorObjectImplementation*) impl)->setAcid(value);
}

float ArmorObjectAdapter::getLightSaber() {
	return ((ArmorObjectImplementation*) impl)->getLightSaber();
}

void ArmorObjectAdapter::setLightSaber(float value) {
	((ArmorObjectImplementation*) impl)->setLightSaber(value);
}

int ArmorObjectAdapter::getHealthEncumbrance() {
	return ((ArmorObjectImplementation*) impl)->getHealthEncumbrance();
}

void ArmorObjectAdapter::setHealthEncumbrance(int encumber) {
	((ArmorObjectImplementation*) impl)->setHealthEncumbrance(encumber);
}

int ArmorObjectAdapter::getActionEncumbrance() {
	return ((ArmorObjectImplementation*) impl)->getActionEncumbrance();
}

void ArmorObjectAdapter::setActionEncumbrance(int encumber) {
	((ArmorObjectImplementation*) impl)->setActionEncumbrance(encumber);
}

int ArmorObjectAdapter::getMindEncumbrance() {
	return ((ArmorObjectImplementation*) impl)->getMindEncumbrance();
}

void ArmorObjectAdapter::setMindEncumbrance(int encumber) {
	((ArmorObjectImplementation*) impl)->setMindEncumbrance(encumber);
}

/*
 *	ArmorObjectHelper
 */

ArmorObjectHelper* ArmorObjectHelper::staticInitializer = ArmorObjectHelper::instance();

ArmorObjectHelper::ArmorObjectHelper() {
	className = "ArmorObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void ArmorObjectHelper::finalizeHelper() {
	ArmorObjectHelper::finalize();
}

DistributedObject* ArmorObjectHelper::instantiateObject() {
	return new ArmorObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* ArmorObjectHelper::instantiateServant() {
	return new ArmorObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ArmorObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ArmorObjectAdapter((ArmorObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

