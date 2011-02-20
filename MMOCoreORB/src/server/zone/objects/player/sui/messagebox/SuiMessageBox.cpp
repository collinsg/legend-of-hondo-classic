/*
 *	server/zone/objects/player/sui/messagebox/SuiMessageBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiMessageBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	SuiMessageBoxStub
 */

SuiMessageBox::SuiMessageBox(PlayerCreature* player, unsigned int windowType) : SuiBox(DummyConstructorParameter::instance()) {
	SuiMessageBoxImplementation* _implementation = new SuiMessageBoxImplementation(player, windowType);
	_impl = _implementation;
	_impl->_setStub(this);
}

SuiMessageBox::SuiMessageBox(DummyConstructorParameter* param) : SuiBox(param) {
}

SuiMessageBox::~SuiMessageBox() {
}


BaseMessage* SuiMessageBox::generateMessage() {
	SuiMessageBoxImplementation* _implementation = (SuiMessageBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return _implementation->generateMessage();
}

bool SuiMessageBox::isMessageBox() {
	SuiMessageBoxImplementation* _implementation = (SuiMessageBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMessageBox();
}

DistributedObjectServant* SuiMessageBox::_getImplementation() {

	_updated = true;
	return _impl;
}

void SuiMessageBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiMessageBoxImplementation
 */

SuiMessageBoxImplementation::SuiMessageBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiMessageBoxImplementation::~SuiMessageBoxImplementation() {
}


void SuiMessageBoxImplementation::finalize() {
}

void SuiMessageBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiMessageBoxHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void SuiMessageBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SuiMessageBox*) stub;
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiMessageBoxImplementation::_getStub() {
	return _this;
}

SuiMessageBoxImplementation::operator const SuiMessageBox*() {
	return _this;
}

void SuiMessageBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SuiMessageBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SuiMessageBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SuiMessageBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SuiMessageBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SuiMessageBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SuiMessageBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SuiMessageBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiMessageBox");

}

void SuiMessageBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SuiMessageBoxImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiMessageBoxImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SuiBoxImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void SuiMessageBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiMessageBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiMessageBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + SuiBoxImplementation::writeObjectMembers(stream);
}

SuiMessageBoxImplementation::SuiMessageBoxImplementation(PlayerCreature* player, unsigned int windowType) : SuiBoxImplementation(player, windowType, SuiBox::MESSAGEBOX) {
	_initializeImplementation();
	// server/zone/objects/player/sui/messagebox/SuiMessageBox.idl():  		;
}

bool SuiMessageBoxImplementation::isMessageBox() {
	// server/zone/objects/player/sui/messagebox/SuiMessageBox.idl():  		return true;
	return true;
}

/*
 *	SuiMessageBoxAdapter
 */

SuiMessageBoxAdapter::SuiMessageBoxAdapter(SuiMessageBoxImplementation* obj) : SuiBoxAdapter(obj) {
}

enum {RPC_GENERATEMESSAGE__ = 6,RPC_ISMESSAGEBOX__};

Packet* SuiMessageBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_GENERATEMESSAGE__:
		resp->insertLong(generateMessage()->_getObjectID());
		break;
	case RPC_ISMESSAGEBOX__:
		resp->insertBoolean(isMessageBox());
		break;
	default:
		return NULL;
	}

	return resp;
}

BaseMessage* SuiMessageBoxAdapter::generateMessage() {
	return ((SuiMessageBoxImplementation*) impl)->generateMessage();
}

bool SuiMessageBoxAdapter::isMessageBox() {
	return ((SuiMessageBoxImplementation*) impl)->isMessageBox();
}

/*
 *	SuiMessageBoxHelper
 */

SuiMessageBoxHelper* SuiMessageBoxHelper::staticInitializer = SuiMessageBoxHelper::instance();

SuiMessageBoxHelper::SuiMessageBoxHelper() {
	className = "SuiMessageBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiMessageBoxHelper::finalizeHelper() {
	SuiMessageBoxHelper::finalize();
}

DistributedObject* SuiMessageBoxHelper::instantiateObject() {
	return new SuiMessageBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiMessageBoxHelper::instantiateServant() {
	return new SuiMessageBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiMessageBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiMessageBoxAdapter((SuiMessageBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

