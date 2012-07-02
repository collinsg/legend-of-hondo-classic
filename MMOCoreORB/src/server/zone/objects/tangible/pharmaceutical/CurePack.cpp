/*
 *	server/zone/objects/tangible/pharmaceutical/CurePack.cpp generated by engine3 IDL compiler 0.60
 */

#include "CurePack.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	CurePackStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CALCULATEPOWER__CREATUREOBJECT_,RPC_ISAREA__,RPC_GETAREA__,RPC_GETSTATE__,RPC_GETEFFECTIVENESS__,RPC_ISCUREPACK__};

CurePack::CurePack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	CurePackImplementation* _implementation = new CurePackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CurePack");
}

CurePack::CurePack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
	_setClassName("CurePack");
}

CurePack::~CurePack() {
}



void CurePack::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

void CurePack::loadTemplateData(SharedObjectTemplate* templateData) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

int CurePack::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
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

void CurePack::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

int CurePack::calculatePower(CreatureObject* creature) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEPOWER__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->calculatePower(creature);
}

bool CurePack::isArea() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISAREA__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isArea();
}

float CurePack::getArea() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAREA__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getArea();
}

unsigned long long CurePack::getState() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTATE__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getState();
}

float CurePack::getEffectiveness() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getEffectiveness();
}

bool CurePack::isCurePack() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCUREPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCurePack();
}

DistributedObjectServant* CurePack::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void CurePack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CurePackImplementation
 */

CurePackImplementation::CurePackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}


CurePackImplementation::~CurePackImplementation() {
}


void CurePackImplementation::finalize() {
}

void CurePackImplementation::_initializeImplementation() {
	_setClassHelper(CurePackHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CurePackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CurePack*>(stub);
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CurePackImplementation::_getStub() {
	return _this.get();
}

CurePackImplementation::operator const CurePack*() {
	return _this.get();
}

void CurePackImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CurePackImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CurePackImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CurePackImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CurePackImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CurePackImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CurePackImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CurePackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("CurePack");

}

void CurePackImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CurePackImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CurePackImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (PharmaceuticalObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "CurePack.effectiveness") {
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;
	}

	if (_name == "CurePack.area") {
		TypeInfo<float >::parseFromBinaryStream(&area, stream);
		return true;
	}

	if (_name == "CurePack.state") {
		TypeInfo<unsigned long long >::parseFromBinaryStream(&state, stream);
		return true;
	}

	if (_name == "CurePack.commandToExecute") {
		TypeInfo<String >::parseFromBinaryStream(&commandToExecute, stream);
		return true;
	}


	return false;
}

void CurePackImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CurePackImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CurePackImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = PharmaceuticalObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "CurePack.effectiveness";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CurePack.area";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&area, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CurePack.state";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&state, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CurePack.commandToExecute";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&commandToExecute, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

CurePackImplementation::CurePackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		setLoggingName("CurePack");
	setLoggingName("CurePack");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		area = 0;
	area = 0;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		state = 0;
	state = 0;
}

void CurePackImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		effectiveness = values.getCurrentValue("power");
	effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		super.medicineUseRequired = values.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = values->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  	}
	if (values->hasProperty("area")){
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			area = values.getCurrentValue("area");
	area = values->getCurrentValue("area");
}
}

void CurePackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		super.loadTemplateData(templateData);
	PharmaceuticalObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		CurePackTemplate 
	if (!templateData->isCurePackTemplate())	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		CurePackTemplate stimPackTemplate = (CurePackTemplate) templateData;
	CurePackTemplate* stimPackTemplate = (CurePackTemplate*) templateData;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		effectiveness = stimPackTemplate.getEffectiveness();
	effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	PharmaceuticalObjectImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		area = stimPackTemplate.getArea();
	area = stimPackTemplate->getArea();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		state = stimPackTemplate.getState();
	state = stimPackTemplate->getState();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		commandToExecute = stimPackTemplate.getCommandToExecute();
	commandToExecute = stimPackTemplate->getCommandToExecute();
}

int CurePackImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		}
	if (player->getSkillMod("healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			player.sendSystemMessage("@error_message:insufficient_skill");
	player->sendSystemMessage("@error_message:insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			string command = commandToExecute + " ";
	String command = commandToExecute + " ";
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			command = command + String.valueOf(super.getObjectID());
	command = command + String::valueOf(PharmaceuticalObjectImplementation::getObjectID());
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			player.sendExecuteConsoleCommand(command);
	player->sendExecuteConsoleCommand(command);
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return 0;
	return 0;
}
}

void CurePackImplementation::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		super.fillAttributeList(msg, object);
	PharmaceuticalObjectImplementation::fillAttributeList(msg, object);
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		string eff = "@obj_attr_n:dot_type_";
	String eff = "@obj_attr_n:dot_type_";
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		msg.insertAttribute("examine_dot_cure", eff + CreatureState.instance().getSpecialName(state));
	msg->insertAttribute("examine_dot_cure", eff + CreatureState::instance()->getSpecialName(state));
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		msg.insertAttribute("examine_dot_cure_power", effectiveness);
	msg->insertAttribute("examine_dot_cure_power", effectiveness);
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		}
	if (isArea()){
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			msg.insertAttribute("examine_heal_area", Math.getPrecision(area, 0));
	msg->insertAttribute("examine_heal_area", Math::getPrecision(area, 0));
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			msg.insertAttribute("healing_ability", super.getMedicineUseRequired());
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::getMedicineUseRequired());
}

	else {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			msg.insertAttribute("healing_ability", super.getMedicineUseRequired());
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::getMedicineUseRequired());
}
}

int CurePackImplementation::calculatePower(CreatureObject* creature) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		float modSkill = (float) creature.getSkillMod("healing_wound_treatment");
	float modSkill = (float) creature->getSkillMod("healing_wound_treatment");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return ((100 + modSkill) / 100 * effectiveness);
	return ((100 + modSkill) / 100 * effectiveness);
}

bool CurePackImplementation::isArea() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return area != 0;
	return area != 0;
}

float CurePackImplementation::getArea() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return area;
	return area;
}

unsigned long long CurePackImplementation::getState() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return state;
	return state;
}

float CurePackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return effectiveness;
	return effectiveness;
}

bool CurePackImplementation::isCurePack() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return true;
	return true;
}

/*
 *	CurePackAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CurePackAdapter::CurePackAdapter(CurePack* obj) : PharmaceuticalObjectAdapter(obj) {
}

void CurePackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		}
		break;
	case RPC_CALCULATEPOWER__CREATUREOBJECT_:
		{
			resp->insertSignedInt(calculatePower(static_cast<CreatureObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISAREA__:
		{
			resp->insertBoolean(isArea());
		}
		break;
	case RPC_GETAREA__:
		{
			resp->insertFloat(getArea());
		}
		break;
	case RPC_GETSTATE__:
		{
			resp->insertLong(getState());
		}
		break;
	case RPC_GETEFFECTIVENESS__:
		{
			resp->insertFloat(getEffectiveness());
		}
		break;
	case RPC_ISCUREPACK__:
		{
			resp->insertBoolean(isCurePack());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int CurePackAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<CurePack*>(stub))->handleObjectMenuSelect(player, selectedID);
}

int CurePackAdapter::calculatePower(CreatureObject* creature) {
	return (static_cast<CurePack*>(stub))->calculatePower(creature);
}

bool CurePackAdapter::isArea() {
	return (static_cast<CurePack*>(stub))->isArea();
}

float CurePackAdapter::getArea() {
	return (static_cast<CurePack*>(stub))->getArea();
}

unsigned long long CurePackAdapter::getState() {
	return (static_cast<CurePack*>(stub))->getState();
}

float CurePackAdapter::getEffectiveness() {
	return (static_cast<CurePack*>(stub))->getEffectiveness();
}

bool CurePackAdapter::isCurePack() {
	return (static_cast<CurePack*>(stub))->isCurePack();
}

/*
 *	CurePackHelper
 */

CurePackHelper* CurePackHelper::staticInitializer = CurePackHelper::instance();

CurePackHelper::CurePackHelper() {
	className = "CurePack";

	Core::getObjectBroker()->registerClass(className, this);
}

void CurePackHelper::finalizeHelper() {
	CurePackHelper::finalize();
}

DistributedObject* CurePackHelper::instantiateObject() {
	return new CurePack(DummyConstructorParameter::instance());
}

DistributedObjectServant* CurePackHelper::instantiateServant() {
	return new CurePackImplementation();
}

DistributedObjectAdapter* CurePackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CurePackAdapter(static_cast<CurePack*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

