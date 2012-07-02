/*
 *	server/zone/objects/player/sui/transferbox/SuiTransferBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiTransferBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SuiTransferBoxStub
 */

enum {RPC_GENERATEMESSAGE__ = 6,RPC_ADDFROM__STRING_STRING_STRING_STRING_,RPC_ADDTO__STRING_STRING_STRING_STRING_,RPC_ISTRANSFERBOX__};

SuiTransferBox::SuiTransferBox(CreatureObject* player, unsigned int windowType) : SuiBox(DummyConstructorParameter::instance()) {
	SuiTransferBoxImplementation* _implementation = new SuiTransferBoxImplementation(player, windowType);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SuiTransferBox");
}

SuiTransferBox::SuiTransferBox(DummyConstructorParameter* param) : SuiBox(param) {
	_setClassName("SuiTransferBox");
}

SuiTransferBox::~SuiTransferBox() {
}



BaseMessage* SuiTransferBox::generateMessage() {
	SuiTransferBoxImplementation* _implementation = static_cast<SuiTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATEMESSAGE__);

		return static_cast<BaseMessage*>(method.executeWithObjectReturn());
	} else
		return _implementation->generateMessage();
}

void SuiTransferBox::addFrom(const String& from, const String& startingFrom, const String& inputFrom, const String& rFrom) {
	SuiTransferBoxImplementation* _implementation = static_cast<SuiTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDFROM__STRING_STRING_STRING_STRING_);
		method.addAsciiParameter(from);
		method.addAsciiParameter(startingFrom);
		method.addAsciiParameter(inputFrom);
		method.addAsciiParameter(rFrom);

		method.executeWithVoidReturn();
	} else
		_implementation->addFrom(from, startingFrom, inputFrom, rFrom);
}

void SuiTransferBox::addTo(const String& to, const String& startingTo, const String& inputTo, const String& rTo) {
	SuiTransferBoxImplementation* _implementation = static_cast<SuiTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDTO__STRING_STRING_STRING_STRING_);
		method.addAsciiParameter(to);
		method.addAsciiParameter(startingTo);
		method.addAsciiParameter(inputTo);
		method.addAsciiParameter(rTo);

		method.executeWithVoidReturn();
	} else
		_implementation->addTo(to, startingTo, inputTo, rTo);
}

bool SuiTransferBox::isTransferBox() {
	SuiTransferBoxImplementation* _implementation = static_cast<SuiTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTRANSFERBOX__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isTransferBox();
}

DistributedObjectServant* SuiTransferBox::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void SuiTransferBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiTransferBoxImplementation
 */

SuiTransferBoxImplementation::SuiTransferBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiTransferBoxImplementation::~SuiTransferBoxImplementation() {
}


void SuiTransferBoxImplementation::finalize() {
}

void SuiTransferBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiTransferBoxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiTransferBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiTransferBox*>(stub);
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiTransferBoxImplementation::_getStub() {
	return _this.get();
}

SuiTransferBoxImplementation::operator const SuiTransferBox*() {
	return _this.get();
}

void SuiTransferBoxImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SuiTransferBoxImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SuiTransferBoxImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SuiTransferBoxImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SuiTransferBoxImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SuiTransferBoxImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SuiTransferBoxImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SuiTransferBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiTransferBox");

}

void SuiTransferBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiTransferBoxImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiTransferBoxImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SuiBoxImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "SuiTransferBox.lblFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblFrom, stream);
		return true;
	}

	if (_name == "SuiTransferBox.lblStartingFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblStartingFrom, stream);
		return true;
	}

	if (_name == "SuiTransferBox.lblInputFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblInputFrom, stream);
		return true;
	}

	if (_name == "SuiTransferBox.lblTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblTo, stream);
		return true;
	}

	if (_name == "SuiTransferBox.lblStartingTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblStartingTo, stream);
		return true;
	}

	if (_name == "SuiTransferBox.lblInputTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblInputTo, stream);
		return true;
	}

	if (_name == "SuiTransferBox.convertRatioFrom") {
		TypeInfo<String >::parseFromBinaryStream(&convertRatioFrom, stream);
		return true;
	}

	if (_name == "SuiTransferBox.convertRatioTo") {
		TypeInfo<String >::parseFromBinaryStream(&convertRatioTo, stream);
		return true;
	}


	return false;
}

void SuiTransferBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiTransferBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiTransferBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiBoxImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "SuiTransferBox.lblFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiTransferBox.lblStartingFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblStartingFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiTransferBox.lblInputFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblInputFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiTransferBox.lblTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiTransferBox.lblStartingTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblStartingTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiTransferBox.lblInputTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblInputTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiTransferBox.convertRatioFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&convertRatioFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiTransferBox.convertRatioTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&convertRatioTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 8;
}

SuiTransferBoxImplementation::SuiTransferBoxImplementation(CreatureObject* player, unsigned int windowType) : SuiBoxImplementation(player, windowType, SuiBox::TRANSFERBOX) {
	_initializeImplementation();
}

bool SuiTransferBoxImplementation::isTransferBox() {
	// server/zone/objects/player/sui/transferbox/SuiTransferBox.idl():  		return true;
	return true;
}

/*
 *	SuiTransferBoxAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SuiTransferBoxAdapter::SuiTransferBoxAdapter(SuiTransferBox* obj) : SuiBoxAdapter(obj) {
}

void SuiTransferBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GENERATEMESSAGE__:
		{
			resp->insertLong(generateMessage()->_getObjectID());
		}
		break;
	case RPC_ADDFROM__STRING_STRING_STRING_STRING_:
		{
			String from; String startingFrom; String inputFrom; String rFrom; 
			addFrom(inv->getAsciiParameter(from), inv->getAsciiParameter(startingFrom), inv->getAsciiParameter(inputFrom), inv->getAsciiParameter(rFrom));
		}
		break;
	case RPC_ADDTO__STRING_STRING_STRING_STRING_:
		{
			String to; String startingTo; String inputTo; String rTo; 
			addTo(inv->getAsciiParameter(to), inv->getAsciiParameter(startingTo), inv->getAsciiParameter(inputTo), inv->getAsciiParameter(rTo));
		}
		break;
	case RPC_ISTRANSFERBOX__:
		{
			resp->insertBoolean(isTransferBox());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

BaseMessage* SuiTransferBoxAdapter::generateMessage() {
	return (static_cast<SuiTransferBox*>(stub))->generateMessage();
}

void SuiTransferBoxAdapter::addFrom(const String& from, const String& startingFrom, const String& inputFrom, const String& rFrom) {
	(static_cast<SuiTransferBox*>(stub))->addFrom(from, startingFrom, inputFrom, rFrom);
}

void SuiTransferBoxAdapter::addTo(const String& to, const String& startingTo, const String& inputTo, const String& rTo) {
	(static_cast<SuiTransferBox*>(stub))->addTo(to, startingTo, inputTo, rTo);
}

bool SuiTransferBoxAdapter::isTransferBox() {
	return (static_cast<SuiTransferBox*>(stub))->isTransferBox();
}

/*
 *	SuiTransferBoxHelper
 */

SuiTransferBoxHelper* SuiTransferBoxHelper::staticInitializer = SuiTransferBoxHelper::instance();

SuiTransferBoxHelper::SuiTransferBoxHelper() {
	className = "SuiTransferBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiTransferBoxHelper::finalizeHelper() {
	SuiTransferBoxHelper::finalize();
}

DistributedObject* SuiTransferBoxHelper::instantiateObject() {
	return new SuiTransferBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiTransferBoxHelper::instantiateServant() {
	return new SuiTransferBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiTransferBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiTransferBoxAdapter(static_cast<SuiTransferBox*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

