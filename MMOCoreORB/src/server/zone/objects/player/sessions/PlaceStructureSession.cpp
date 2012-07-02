/*
 *	server/zone/objects/player/sessions/PlaceStructureSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlaceStructureSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/tangible/deed/structure/StructureDeed.h"

#include "server/zone/managers/planet/PlanetManager.h"

#include "server/zone/managers/structure/StructureManager.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/area/ActiveArea.h"

/*
 *	PlaceStructureSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 6,RPC_CONSTRUCTSTRUCTURE__FLOAT_FLOAT_INT_,RPC_COMPLETESESSION__,RPC_CANCELSESSION__,RPC_CLEARSESSION__};

PlaceStructureSession::PlaceStructureSession(CreatureObject* creature, StructureDeed* deed) : Facade(DummyConstructorParameter::instance()) {
	PlaceStructureSessionImplementation* _implementation = new PlaceStructureSessionImplementation(creature, deed);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PlaceStructureSession");
}

PlaceStructureSession::PlaceStructureSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("PlaceStructureSession");
}

PlaceStructureSession::~PlaceStructureSession() {
}



int PlaceStructureSession::initializeSession() {
	PlaceStructureSessionImplementation* _implementation = static_cast<PlaceStructureSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int PlaceStructureSession::constructStructure(float x, float y, int angle) {
	PlaceStructureSessionImplementation* _implementation = static_cast<PlaceStructureSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONSTRUCTSTRUCTURE__FLOAT_FLOAT_INT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(angle);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->constructStructure(x, y, angle);
}

int PlaceStructureSession::completeSession() {
	PlaceStructureSessionImplementation* _implementation = static_cast<PlaceStructureSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->completeSession();
}

int PlaceStructureSession::cancelSession() {
	PlaceStructureSessionImplementation* _implementation = static_cast<PlaceStructureSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int PlaceStructureSession::clearSession() {
	PlaceStructureSessionImplementation* _implementation = static_cast<PlaceStructureSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

DistributedObjectServant* PlaceStructureSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void PlaceStructureSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PlaceStructureSessionImplementation
 */

PlaceStructureSessionImplementation::PlaceStructureSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


PlaceStructureSessionImplementation::~PlaceStructureSessionImplementation() {
}


void PlaceStructureSessionImplementation::finalize() {
}

void PlaceStructureSessionImplementation::_initializeImplementation() {
	_setClassHelper(PlaceStructureSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PlaceStructureSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PlaceStructureSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* PlaceStructureSessionImplementation::_getStub() {
	return _this.get();
}

PlaceStructureSessionImplementation::operator const PlaceStructureSession*() {
	return _this.get();
}

void PlaceStructureSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void PlaceStructureSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void PlaceStructureSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void PlaceStructureSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void PlaceStructureSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void PlaceStructureSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void PlaceStructureSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void PlaceStructureSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("PlaceStructureSession");

}

void PlaceStructureSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PlaceStructureSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PlaceStructureSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "PlaceStructureSession.creatureObject") {
		TypeInfo<ManagedReference<CreatureObject* > >::parseFromBinaryStream(&creatureObject, stream);
		return true;
	}

	if (_name == "PlaceStructureSession.deedObject") {
		TypeInfo<ManagedReference<StructureDeed* > >::parseFromBinaryStream(&deedObject, stream);
		return true;
	}

	if (_name == "PlaceStructureSession.positionX") {
		TypeInfo<float >::parseFromBinaryStream(&positionX, stream);
		return true;
	}

	if (_name == "PlaceStructureSession.positionY") {
		TypeInfo<float >::parseFromBinaryStream(&positionY, stream);
		return true;
	}

	if (_name == "PlaceStructureSession.directionAngle") {
		TypeInfo<int >::parseFromBinaryStream(&directionAngle, stream);
		return true;
	}

	if (_name == "PlaceStructureSession.constructionBarricade") {
		TypeInfo<ManagedReference<SceneObject* > >::parseFromBinaryStream(&constructionBarricade, stream);
		return true;
	}

	if (_name == "PlaceStructureSession.zone") {
		TypeInfo<ManagedReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;
	}


	return false;
}

void PlaceStructureSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PlaceStructureSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PlaceStructureSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "PlaceStructureSession.creatureObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<CreatureObject* > >::toBinaryStream(&creatureObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlaceStructureSession.deedObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<StructureDeed* > >::toBinaryStream(&deedObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlaceStructureSession.positionX";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&positionX, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlaceStructureSession.positionY";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&positionY, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlaceStructureSession.directionAngle";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&directionAngle, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlaceStructureSession.constructionBarricade";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&constructionBarricade, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlaceStructureSession.zone";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<Zone* > >::toBinaryStream(&zone, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 7;
}

PlaceStructureSessionImplementation::PlaceStructureSessionImplementation(CreatureObject* creature, StructureDeed* deed) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		Logger.setLoggingName("PlaceStructureSession");
	Logger::setLoggingName("PlaceStructureSession");
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		creatureObject = creature;
	creatureObject = creature;
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		deedObject = deed;
	deedObject = deed;
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		zone = creature.getZone();
	zone = creature->getZone();
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		positionX = 0;
	positionX = 0;
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		positionY = 0;
	positionY = 0;
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		directionAngle = 0;
	directionAngle = 0;
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		constructionBarricade = null;
	constructionBarricade = NULL;
}

int PlaceStructureSessionImplementation::initializeSession() {
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		return 0;
	return 0;
}

int PlaceStructureSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		creatureObject.dropActiveSession(SessionFacadeType.PLACESTRUCTURE);
	creatureObject->dropActiveSession(SessionFacadeType::PLACESTRUCTURE);
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		return 0;
	return 0;
}

int PlaceStructureSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/PlaceStructureSession.idl():  		return 0;
	return 0;
}

/*
 *	PlaceStructureSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PlaceStructureSessionAdapter::PlaceStructureSessionAdapter(PlaceStructureSession* obj) : FacadeAdapter(obj) {
}

void PlaceStructureSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		{
			resp->insertSignedInt(initializeSession());
		}
		break;
	case RPC_CONSTRUCTSTRUCTURE__FLOAT_FLOAT_INT_:
		{
			resp->insertSignedInt(constructStructure(inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter()));
		}
		break;
	case RPC_COMPLETESESSION__:
		{
			resp->insertSignedInt(completeSession());
		}
		break;
	case RPC_CANCELSESSION__:
		{
			resp->insertSignedInt(cancelSession());
		}
		break;
	case RPC_CLEARSESSION__:
		{
			resp->insertSignedInt(clearSession());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int PlaceStructureSessionAdapter::initializeSession() {
	return (static_cast<PlaceStructureSession*>(stub))->initializeSession();
}

int PlaceStructureSessionAdapter::constructStructure(float x, float y, int angle) {
	return (static_cast<PlaceStructureSession*>(stub))->constructStructure(x, y, angle);
}

int PlaceStructureSessionAdapter::completeSession() {
	return (static_cast<PlaceStructureSession*>(stub))->completeSession();
}

int PlaceStructureSessionAdapter::cancelSession() {
	return (static_cast<PlaceStructureSession*>(stub))->cancelSession();
}

int PlaceStructureSessionAdapter::clearSession() {
	return (static_cast<PlaceStructureSession*>(stub))->clearSession();
}

/*
 *	PlaceStructureSessionHelper
 */

PlaceStructureSessionHelper* PlaceStructureSessionHelper::staticInitializer = PlaceStructureSessionHelper::instance();

PlaceStructureSessionHelper::PlaceStructureSessionHelper() {
	className = "PlaceStructureSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void PlaceStructureSessionHelper::finalizeHelper() {
	PlaceStructureSessionHelper::finalize();
}

DistributedObject* PlaceStructureSessionHelper::instantiateObject() {
	return new PlaceStructureSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlaceStructureSessionHelper::instantiateServant() {
	return new PlaceStructureSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlaceStructureSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlaceStructureSessionAdapter(static_cast<PlaceStructureSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

