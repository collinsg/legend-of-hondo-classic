/*
 *	server/zone/objects/tangible/deed/DeedObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "DeedObject.h"

#include "DeedObjectImplementation.h"

#include "../TangibleObject.h"

#include "../../../packets.h"

#include "../../player/Player.h"

#include "../../creature/CreatureObject.h"

/*
 *	DeedObjectStub
 */

DeedObject::DeedObject(CreatureObject* creature, int tempCRC, const unicode& n, const string& tempn) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new DeedObjectImplementation(creature, tempCRC, n, tempn);
	_impl->_setStub(this);
}

DeedObject::DeedObject(unsigned long long oid, int tempCRC, const unicode& n, const string& tempn) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new DeedObjectImplementation(oid, tempCRC, n, tempn);
	_impl->_setStub(this);
}

DeedObject::DeedObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

DeedObject::~DeedObject() {
}

unicode& DeedObject::getTargetName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithUnicodeReturn(_return_getTargetName);
		return _return_getTargetName;
	} else
		return ((DeedObjectImplementation*) _impl)->getTargetName();
}

string& DeedObject::getTargetFile() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithAsciiReturn(_return_getTargetFile);
		return _return_getTargetFile;
	} else
		return ((DeedObjectImplementation*) _impl)->getTargetFile();
}

string& DeedObject::getTargetTemplate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithAsciiReturn(_return_getTargetTemplate);
		return _return_getTargetTemplate;
	} else
		return ((DeedObjectImplementation*) _impl)->getTargetTemplate();
}

void DeedObject::setTargetFile(string& path) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(path);

		method.executeWithVoidReturn();
	} else
		((DeedObjectImplementation*) _impl)->setTargetFile(path);
}

string& DeedObject::getTargetTempFile() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithAsciiReturn(_return_getTargetTempFile);
		return _return_getTargetTempFile;
	} else
		return ((DeedObjectImplementation*) _impl)->getTargetTempFile();
}

int DeedObject::useObject(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((DeedObjectImplementation*) _impl)->useObject(player);
}

/*
 *	DeedObjectAdapter
 */

DeedObjectAdapter::DeedObjectAdapter(DeedObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* DeedObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertUnicode(getTargetName());
		break;
	case 7:
		resp->insertAscii(getTargetFile());
		break;
	case 8:
		resp->insertAscii(getTargetTemplate());
		break;
	case 9:
		setTargetFile(inv->getAsciiParameter(_param0_setTargetFile__string_));
		break;
	case 10:
		resp->insertAscii(getTargetTempFile());
		break;
	case 11:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

unicode& DeedObjectAdapter::getTargetName() {
	return ((DeedObjectImplementation*) impl)->getTargetName();
}

string& DeedObjectAdapter::getTargetFile() {
	return ((DeedObjectImplementation*) impl)->getTargetFile();
}

string& DeedObjectAdapter::getTargetTemplate() {
	return ((DeedObjectImplementation*) impl)->getTargetTemplate();
}

void DeedObjectAdapter::setTargetFile(string& path) {
	return ((DeedObjectImplementation*) impl)->setTargetFile(path);
}

string& DeedObjectAdapter::getTargetTempFile() {
	return ((DeedObjectImplementation*) impl)->getTargetTempFile();
}

int DeedObjectAdapter::useObject(Player* player) {
	return ((DeedObjectImplementation*) impl)->useObject(player);
}

/*
 *	DeedObjectHelper
 */

DeedObjectHelper* DeedObjectHelper::staticInitializer = DeedObjectHelper::instance();

DeedObjectHelper::DeedObjectHelper() {
	className = "DeedObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void DeedObjectHelper::finalizeHelper() {
	DeedObjectHelper::finalize();
}

DistributedObject* DeedObjectHelper::instantiateObject() {
	return new DeedObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DeedObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DeedObjectAdapter((DeedObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	DeedObjectServant
 */

DeedObjectServant::DeedObjectServant(CreatureObject* creature, int tempCRC, const unicode& n, const string& tempn, int tp) : TangibleObjectImplementation(creature, tempCRC, n, tempn, tp) {
	_classHelper = DeedObjectHelper::instance();
}

DeedObjectServant::DeedObjectServant(unsigned long long oid, int tempCRC, const unicode& n, const string& tempn, int tp) : TangibleObjectImplementation(oid, tempCRC, n, tempn, tp) {
	_classHelper = DeedObjectHelper::instance();
}

DeedObjectServant::~DeedObjectServant() {
}

void DeedObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (DeedObject*) stub;
	TangibleObjectServant::_setStub(stub);
}

DistributedObjectStub* DeedObjectServant::_getStub() {
	return _this;
}

