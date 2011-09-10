/*
 *	server/zone/objects/tangible/consumable/Consumable.cpp generated by engine3 IDL compiler 0.60
 */

#include "Consumable.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/creature/buffs/Buff.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	ConsumableStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_ = 6,RPC_SETMODIFIERS__BUFF_BOOL_,RPC_ISSPICEEFFECT__,RPC_ISATTRIBUTEEFFECT__,RPC_ISDRINK__,RPC_ISFOOD__,RPC_ISFORAGEDFOOD__,RPC_ISSPICE__};

Consumable::Consumable() : TangibleObject(DummyConstructorParameter::instance()) {
	ConsumableImplementation* _implementation = new ConsumableImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

Consumable::Consumable(DummyConstructorParameter* param) : TangibleObject(param) {
}

Consumable::~Consumable() {
}


int Consumable::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void Consumable::updateCraftingValues(ManufactureSchematic* schematic) {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(schematic);
}

void Consumable::loadTemplateData(SharedObjectTemplate* templateData) {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void Consumable::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void Consumable::setModifiers(Buff* buff, bool skillModifiers) {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMODIFIERS__BUFF_BOOL_);
		method.addObjectParameter(buff);
		method.addBooleanParameter(skillModifiers);

		method.executeWithVoidReturn();
	} else
		_implementation->setModifiers(buff, skillModifiers);
}

bool Consumable::isSpiceEffect() {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSPICEEFFECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isSpiceEffect();
}

bool Consumable::isAttributeEffect() {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISATTRIBUTEEFFECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isAttributeEffect();
}

bool Consumable::isDrink() {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISDRINK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isDrink();
}

bool Consumable::isFood() {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFOOD__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isFood();
}

bool Consumable::isForagedFood() {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFORAGEDFOOD__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isForagedFood();
}

bool Consumable::isSpice() {
	ConsumableImplementation* _implementation = (ConsumableImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSPICE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isSpice();
}

DistributedObjectServant* Consumable::_getImplementation() {

	_updated = true;
	return _impl;
}

void Consumable::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ConsumableImplementation
 */

ConsumableImplementation::ConsumableImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ConsumableImplementation::~ConsumableImplementation() {
}


void ConsumableImplementation::finalize() {
}

void ConsumableImplementation::_initializeImplementation() {
	_setClassHelper(ConsumableHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ConsumableImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Consumable*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ConsumableImplementation::_getStub() {
	return _this;
}

ConsumableImplementation::operator const Consumable*() {
	return _this;
}

void ConsumableImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ConsumableImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ConsumableImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ConsumableImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ConsumableImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ConsumableImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ConsumableImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ConsumableImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("Consumable");

}

void ConsumableImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ConsumableImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ConsumableImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "duration") {
		TypeInfo<int >::parseFromBinaryStream(&duration, stream);
		return true;
	}

	if (_name == "filling") {
		TypeInfo<int >::parseFromBinaryStream(&filling, stream);
		return true;
	}

	if (_name == "nutrition") {
		TypeInfo<int >::parseFromBinaryStream(&nutrition, stream);
		return true;
	}

	if (_name == "effectType") {
		TypeInfo<int >::parseFromBinaryStream(&effectType, stream);
		return true;
	}

	if (_name == "fillingMin") {
		TypeInfo<int >::parseFromBinaryStream(&fillingMin, stream);
		return true;
	}

	if (_name == "fillingMax") {
		TypeInfo<int >::parseFromBinaryStream(&fillingMax, stream);
		return true;
	}

	if (_name == "flavorMin") {
		TypeInfo<int >::parseFromBinaryStream(&flavorMin, stream);
		return true;
	}

	if (_name == "flavorMax") {
		TypeInfo<int >::parseFromBinaryStream(&flavorMax, stream);
		return true;
	}

	if (_name == "nutritionMin") {
		TypeInfo<int >::parseFromBinaryStream(&nutritionMin, stream);
		return true;
	}

	if (_name == "nutritionMax") {
		TypeInfo<int >::parseFromBinaryStream(&nutritionMax, stream);
		return true;
	}

	if (_name == "quantityMin") {
		TypeInfo<int >::parseFromBinaryStream(&quantityMin, stream);
		return true;
	}

	if (_name == "quantityMax") {
		TypeInfo<int >::parseFromBinaryStream(&quantityMax, stream);
		return true;
	}

	if (_name == "modifiers") {
		TypeInfo<VectorMap<String, float> >::parseFromBinaryStream(&modifiers, stream);
		return true;
	}

	if (_name == "buffName") {
		TypeInfo<String >::parseFromBinaryStream(&buffName, stream);
		return true;
	}

	if (_name == "buffCRC") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&buffCRC, stream);
		return true;
	}

	if (_name == "consumableType") {
		TypeInfo<int >::parseFromBinaryStream(&consumableType, stream);
		return true;
	}

	if (_name == "foragedFood") {
		TypeInfo<int >::parseFromBinaryStream(&foragedFood, stream);
		return true;
	}

	if (_name == "speciesRestriction") {
		TypeInfo<String >::parseFromBinaryStream(&speciesRestriction, stream);
		return true;
	}


	return false;
}

void ConsumableImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ConsumableImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ConsumableImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "duration";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&duration, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "filling";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&filling, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "nutrition";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&nutrition, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "effectType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&effectType, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "fillingMin";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&fillingMin, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "fillingMax";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&fillingMax, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "flavorMin";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&flavorMin, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "flavorMax";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&flavorMax, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "nutritionMin";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&nutritionMin, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "nutritionMax";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&nutritionMax, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "quantityMin";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&quantityMin, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "quantityMax";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&quantityMax, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "modifiers";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<String, float> >::toBinaryStream(&modifiers, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "buffName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&buffName, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "buffCRC";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&buffCRC, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "consumableType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&consumableType, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "foragedFood";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&foragedFood, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "speciesRestriction";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&speciesRestriction, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 18 + TangibleObjectImplementation::writeObjectMembers(stream);
}

ConsumableImplementation::ConsumableImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/consumable/Consumable.idl():  		setLoggingName("PharmaceuticalObject");
	setLoggingName("PharmaceuticalObject");
	// server/zone/objects/tangible/consumable/Consumable.idl():  		consumableType = 0;
	consumableType = 0;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		foragedFood = 0;
	foragedFood = 0;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		duration = 30;
	duration = 30;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		filling = 0;
	filling = 0;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		effectType = EFFECT_ATTRIBUTE;
	effectType = EFFECT_ATTRIBUTE;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		fillingMin = 1;
	fillingMin = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		fillingMax = 1;
	fillingMax = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		flavorMin = 1;
	flavorMin = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		flavorMax = 1;
	flavorMax = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		nutritionMin = 1;
	nutritionMin = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		nutritionMax = 1;
	nutritionMax = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		quantityMin = 1;
	quantityMin = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		quantityMax = 1;
	quantityMax = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		modifiers.setNoDuplicateInsertPlan();
	(&modifiers)->setNoDuplicateInsertPlan();
	// server/zone/objects/tangible/consumable/Consumable.idl():  		modifiers.setNullValue(0);
	(&modifiers)->setNullValue(0);
	// server/zone/objects/tangible/consumable/Consumable.idl():  		buffCRC = 0;
	buffCRC = 0;
}

void ConsumableImplementation::updateCraftingValues(ManufactureSchematic* schematic) {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		CraftingValues craftingValues = schematic.getCraftingValues();
	CraftingValues* craftingValues = schematic->getCraftingValues();
	// server/zone/objects/tangible/consumable/Consumable.idl():  		int cond = craftingValues.getCurrentValue("hitpoints");
	int cond = craftingValues->getCurrentValue("hitpoints");
	// server/zone/objects/tangible/consumable/Consumable.idl():  		super.conditionDamage = cond;
	TangibleObjectImplementation::conditionDamage = cond;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		super.maxCondition = cond;
	TangibleObjectImplementation::maxCondition = cond;
	// server/zone/objects/tangible/consumable/Consumable.idl():  	}
	if (!isSpice()){
	// server/zone/objects/tangible/consumable/Consumable.idl():  			if(
	if (craftingValues->hasProperty("filling"))	// server/zone/objects/tangible/consumable/Consumable.idl():  				filling = (fillingMax - fillingMin) * craftingValues.getCurrentPercentage("filling") + fillingMin;
	filling = (fillingMax - fillingMin) * craftingValues->getCurrentPercentage("filling") + fillingMin;
	// server/zone/objects/tangible/consumable/Consumable.idl():  			if(
	if (craftingValues->hasProperty("quantity"))	// server/zone/objects/tangible/consumable/Consumable.idl():  				super.setUseCount((quantityMax - quantityMin) * craftingValues.getCurrentPercentage("quantity") + quantityMin);
	TangibleObjectImplementation::setUseCount((quantityMax - quantityMin) * craftingValues->getCurrentPercentage("quantity") + quantityMin);
	// server/zone/objects/tangible/consumable/Consumable.idl():  			if(
	if (craftingValues->hasProperty("flavor"))	// server/zone/objects/tangible/consumable/Consumable.idl():  				duration = (flavorMax - flavorMin) * craftingValues.getCurrentPercentage("flavor") + flavorMin;
	duration = (flavorMax - flavorMin) * craftingValues->getCurrentPercentage("flavor") + flavorMin;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		}
	if (craftingValues->hasProperty("nutrition"))	// server/zone/objects/tangible/consumable/Consumable.idl():  				nutrition = (nutritionMax - nutritionMin) * craftingValues.getCurrentPercentage("nutrition") + nutritionMin;
	nutrition = (nutritionMax - nutritionMin) * craftingValues->getCurrentPercentage("nutrition") + nutritionMin;
}
}

bool ConsumableImplementation::isSpiceEffect() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (effectType == EFFECT_SPICE);
	return (effectType == EFFECT_SPICE);
}

bool ConsumableImplementation::isAttributeEffect() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (effectType == EFFECT_ATTRIBUTE);
	return (effectType == EFFECT_ATTRIBUTE);
}

bool ConsumableImplementation::isDrink() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (consumableType == DRINK);
	return (consumableType == DRINK);
}

bool ConsumableImplementation::isFood() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (consumableType == FOOD);
	return (consumableType == FOOD);
}

bool ConsumableImplementation::isForagedFood() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (foragedFood == 1);
	return (foragedFood == 1);
}

bool ConsumableImplementation::isSpice() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (isSpiceEffect() && isFood());
	return (isSpiceEffect() && isFood());
}

/*
 *	ConsumableAdapter
 */

ConsumableAdapter::ConsumableAdapter(ConsumableImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* ConsumableAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((CreatureObject*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_SETMODIFIERS__BUFF_BOOL_:
		setModifiers((Buff*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case RPC_ISSPICEEFFECT__:
		resp->insertBoolean(isSpiceEffect());
		break;
	case RPC_ISATTRIBUTEEFFECT__:
		resp->insertBoolean(isAttributeEffect());
		break;
	case RPC_ISDRINK__:
		resp->insertBoolean(isDrink());
		break;
	case RPC_ISFOOD__:
		resp->insertBoolean(isFood());
		break;
	case RPC_ISFORAGEDFOOD__:
		resp->insertBoolean(isForagedFood());
		break;
	case RPC_ISSPICE__:
		resp->insertBoolean(isSpice());
		break;
	default:
		return NULL;
	}

	return resp;
}

int ConsumableAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return ((ConsumableImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void ConsumableAdapter::setModifiers(Buff* buff, bool skillModifiers) {
	((ConsumableImplementation*) impl)->setModifiers(buff, skillModifiers);
}

bool ConsumableAdapter::isSpiceEffect() {
	return ((ConsumableImplementation*) impl)->isSpiceEffect();
}

bool ConsumableAdapter::isAttributeEffect() {
	return ((ConsumableImplementation*) impl)->isAttributeEffect();
}

bool ConsumableAdapter::isDrink() {
	return ((ConsumableImplementation*) impl)->isDrink();
}

bool ConsumableAdapter::isFood() {
	return ((ConsumableImplementation*) impl)->isFood();
}

bool ConsumableAdapter::isForagedFood() {
	return ((ConsumableImplementation*) impl)->isForagedFood();
}

bool ConsumableAdapter::isSpice() {
	return ((ConsumableImplementation*) impl)->isSpice();
}

/*
 *	ConsumableHelper
 */

ConsumableHelper* ConsumableHelper::staticInitializer = ConsumableHelper::instance();

ConsumableHelper::ConsumableHelper() {
	className = "Consumable";

	Core::getObjectBroker()->registerClass(className, this);
}

void ConsumableHelper::finalizeHelper() {
	ConsumableHelper::finalize();
}

DistributedObject* ConsumableHelper::instantiateObject() {
	return new Consumable(DummyConstructorParameter::instance());
}

DistributedObjectServant* ConsumableHelper::instantiateServant() {
	return new ConsumableImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ConsumableHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ConsumableAdapter((ConsumableImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

