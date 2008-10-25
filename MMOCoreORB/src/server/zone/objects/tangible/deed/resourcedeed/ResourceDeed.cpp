/*
 *	server/zone/objects/tangible/deed/resourcedeed/ResourceDeed.cpp generated by engine3 IDL compiler 0.55
 */

#include "ResourceDeed.h"

#include "ResourceDeedImplementation.h"

#include "../DeedObject.h"

#include "../../TangibleObject.h"

#include "../../../../packets.h"

#include "../../../player/Player.h"

#include "../../../creature/CreatureObject.h"

#include "../../../../packets/object/ObjectMenuResponse.h"

/*
 *	ResourceDeedStub
 */

ResourceDeed::ResourceDeed(CreatureObject* creature, int tempCRC, const unicode& n, const string& tempn) : DeedObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceDeedImplementation(creature, tempCRC, n, tempn);
	_impl->_setStub(this);
}

ResourceDeed::ResourceDeed(unsigned long long oid, int tempCRC, const unicode& n, const string& tempn) : DeedObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceDeedImplementation(oid, tempCRC, n, tempn);
	_impl->_setStub(this);
}

ResourceDeed::ResourceDeed(DummyConstructorParameter* param) : DeedObject(param) {
}

ResourceDeed::~ResourceDeed() {
}

int ResourceDeed::useObject(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceDeedImplementation*) _impl)->useObject(player);
}

void ResourceDeed::sendRadialResponseTo(Player* player, ObjectMenuResponse* omr) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addObjectParameter(omr);

		method.executeWithVoidReturn();
	} else
		((ResourceDeedImplementation*) _impl)->sendRadialResponseTo(player, omr);
}

void ResourceDeed::destroyDeed(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ResourceDeedImplementation*) _impl)->destroyDeed(player);
}

/*
 *	ResourceDeedAdapter
 */

ResourceDeedAdapter::ResourceDeedAdapter(ResourceDeedImplementation* obj) : DeedObjectAdapter(obj) {
}

Packet* ResourceDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	case 7:
		sendRadialResponseTo((Player*) inv->getObjectParameter(), (ObjectMenuResponse*) inv->getObjectParameter());
		break;
	case 8:
		destroyDeed((Player*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

int ResourceDeedAdapter::useObject(Player* player) {
	return ((ResourceDeedImplementation*) impl)->useObject(player);
}

void ResourceDeedAdapter::sendRadialResponseTo(Player* player, ObjectMenuResponse* omr) {
	return ((ResourceDeedImplementation*) impl)->sendRadialResponseTo(player, omr);
}

void ResourceDeedAdapter::destroyDeed(Player* player) {
	return ((ResourceDeedImplementation*) impl)->destroyDeed(player);
}

/*
 *	ResourceDeedHelper
 */

ResourceDeedHelper* ResourceDeedHelper::staticInitializer = ResourceDeedHelper::instance();

ResourceDeedHelper::ResourceDeedHelper() {
	className = "ResourceDeed";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceDeedHelper::finalizeHelper() {
	ResourceDeedHelper::finalize();
}

DistributedObject* ResourceDeedHelper::instantiateObject() {
	return new ResourceDeed(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceDeedAdapter((ResourceDeedImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ResourceDeedServant
 */

ResourceDeedServant::ResourceDeedServant(CreatureObject* creature, int tempCRC, const unicode& n, const string& tempn, int tp) : DeedObjectImplementation(creature, tempCRC, n, tempn, tp) {
	_classHelper = ResourceDeedHelper::instance();
}

ResourceDeedServant::ResourceDeedServant(unsigned long long oid, int tempCRC, const unicode& n, const string& tempn, int tp) : DeedObjectImplementation(oid, tempCRC, n, tempn, tp) {
	_classHelper = ResourceDeedHelper::instance();
}

ResourceDeedServant::~ResourceDeedServant() {
}

void ResourceDeedServant::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceDeed*) stub;
	DeedObjectServant::_setStub(stub);
}

DistributedObjectStub* ResourceDeedServant::_getStub() {
	return _this;
}

