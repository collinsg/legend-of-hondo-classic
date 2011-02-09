/*
 *	server/zone/objects/player/ImageDesignSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "ImageDesignSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/player/events/ImageDesignTimeoutEvent.h"

/*
 *	ImageDesignSessionStub
 */

ImageDesignSession::ImageDesignSession(CreatureObject* parent) : Facade(DummyConstructorParameter::instance()) {
	ImageDesignSessionImplementation* _implementation = new ImageDesignSessionImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
}

ImageDesignSession::ImageDesignSession(DummyConstructorParameter* param) : Facade(param) {
}

ImageDesignSession::~ImageDesignSession() {
}


void ImageDesignSession::startImageDesign(PlayerCreature* object, PlayerCreature* designer, PlayerCreature* targetPlayer, unsigned long long tent, int type) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->startImageDesign(object, designer, targetPlayer, tent, type);
}

void ImageDesignSession::updateImageDesign(unsigned long long object, unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addUnsignedLongParameter(object);
		method.addUnsignedLongParameter(designer);
		method.addUnsignedLongParameter(targetPlayer);
		method.addUnsignedLongParameter(tent);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		_implementation->updateImageDesign(object, designer, targetPlayer, tent, type);
}

void ImageDesignSession::cancelImageDesign(unsigned long long object, unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedLongParameter(object);
		method.addUnsignedLongParameter(designer);
		method.addUnsignedLongParameter(targetPlayer);
		method.addUnsignedLongParameter(tent);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		_implementation->cancelImageDesign(object, designer, targetPlayer, tent, type);
}

int ImageDesignSession::initializeSession() {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int ImageDesignSession::cancelSession() {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int ImageDesignSession::clearSession() {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

void ImageDesignSession::clearIdTimeoutEvent() {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		_implementation->clearIdTimeoutEvent();
}

void ImageDesignSession::dequeueIdTimeoutEvent() {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		_implementation->dequeueIdTimeoutEvent();
}

void ImageDesignSession::sessionTimeout() {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		_implementation->sessionTimeout();
}

void ImageDesignSession::setHairObject(String& hair) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(hair);

		method.executeWithVoidReturn();
	} else
		_implementation->setHairObject(hair);
}

void ImageDesignSession::setUkstring1(String& uk1) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(uk1);

		method.executeWithVoidReturn();
	} else
		_implementation->setUkstring1(uk1);
}

void ImageDesignSession::setTimeStamp(unsigned int time) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addUnsignedIntParameter(time);

		method.executeWithVoidReturn();
	} else
		_implementation->setTimeStamp(time);
}

void ImageDesignSession::setRequiredPayment(unsigned int rp) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addUnsignedIntParameter(rp);

		method.executeWithVoidReturn();
	} else
		_implementation->setRequiredPayment(rp);
}

void ImageDesignSession::setOfferedPayment(unsigned int op) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addUnsignedIntParameter(op);

		method.executeWithVoidReturn();
	} else
		_implementation->setOfferedPayment(op);
}

void ImageDesignSession::setDesignerAccepted(byte da) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addByteParameter(da);

		method.executeWithVoidReturn();
	} else
		_implementation->setDesignerAccepted(da);
}

void ImageDesignSession::setTargetAccepted(unsigned int ta) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedIntParameter(ta);

		method.executeWithVoidReturn();
	} else
		_implementation->setTargetAccepted(ta);
}

void ImageDesignSession::setStatMigration(byte sm) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addByteParameter(sm);

		method.executeWithVoidReturn();
	} else
		_implementation->setStatMigration(sm);
}

void ImageDesignSession::setUnknownInt1(unsigned int value) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setUnknownInt1(value);
}

void ImageDesignSession::setUnknownInt4(unsigned int value) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setUnknownInt4(value);
}

void ImageDesignSession::setUnknownInt5(unsigned int value) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setUnknownInt5(value);
}

void ImageDesignSession::setUnknownInt6(unsigned int value) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setUnknownInt6(value);
}

void ImageDesignSession::setUnknownInt7(unsigned int value) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setUnknownInt7(value);
}

void ImageDesignSession::setSizeFloatAttrs(unsigned int sfa) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addUnsignedIntParameter(sfa);

		method.executeWithVoidReturn();
	} else
		_implementation->setSizeFloatAttrs(sfa);
}

void ImageDesignSession::setAttributesSize(unsigned int val) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addUnsignedIntParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setAttributesSize(val);
}

void ImageDesignSession::setHoloEmote(String& val) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addAsciiParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setHoloEmote(val);
}

int ImageDesignSession::doPayment() {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->doPayment();
}

void ImageDesignSession::setFloatMap(VectorMap<String, float>& map) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setFloatMap(map);
}

void ImageDesignSession::setColorMap(VectorMap<String, unsigned int>& map) {
	ImageDesignSessionImplementation* _implementation = (ImageDesignSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setColorMap(map);
}

DistributedObjectServant* ImageDesignSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void ImageDesignSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ImageDesignSessionImplementation
 */

ImageDesignSessionImplementation::ImageDesignSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


ImageDesignSessionImplementation::~ImageDesignSessionImplementation() {
}


void ImageDesignSessionImplementation::finalize() {
}

void ImageDesignSessionImplementation::_initializeImplementation() {
	_setClassHelper(ImageDesignSessionHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void ImageDesignSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ImageDesignSession*) stub;
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* ImageDesignSessionImplementation::_getStub() {
	return _this;
}

ImageDesignSessionImplementation::operator const ImageDesignSession*() {
	return _this;
}

void ImageDesignSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ImageDesignSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ImageDesignSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ImageDesignSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ImageDesignSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ImageDesignSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ImageDesignSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ImageDesignSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("ImageDesignSession");

}

void ImageDesignSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ImageDesignSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ImageDesignSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "hairObject") {
		TypeInfo<String >::parseFromBinaryStream(&hairObject, stream);
		return true;
	}

	if (_name == "ukstring1") {
		TypeInfo<String >::parseFromBinaryStream(&ukstring1, stream);
		return true;
	}

	if (_name == "ukint1") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&ukint1, stream);
		return true;
	}

	if (_name == "timestamp") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&timestamp, stream);
		return true;
	}

	if (_name == "requiredPayment") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&requiredPayment, stream);
		return true;
	}

	if (_name == "offeredPayment") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&offeredPayment, stream);
		return true;
	}

	if (_name == "designerAccepted") {
		TypeInfo<byte >::parseFromBinaryStream(&designerAccepted, stream);
		return true;
	}

	if (_name == "targetAccepted") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&targetAccepted, stream);
		return true;
	}

	if (_name == "statMigration") {
		TypeInfo<byte >::parseFromBinaryStream(&statMigration, stream);
		return true;
	}

	if (_name == "ukint4") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&ukint4, stream);
		return true;
	}

	if (_name == "ukint5") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&ukint5, stream);
		return true;
	}

	if (_name == "ukint6") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&ukint6, stream);
		return true;
	}

	if (_name == "ukint7") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&ukint7, stream);
		return true;
	}

	if (_name == "sizeFloatAttrs") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&sizeFloatAttrs, stream);
		return true;
	}

	if (_name == "attributesSize") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&attributesSize, stream);
		return true;
	}

	if (_name == "holoEmote") {
		TypeInfo<String >::parseFromBinaryStream(&holoEmote, stream);
		return true;
	}

	if (_name == "floatMap") {
		TypeInfo<VectorMap<String, float> >::parseFromBinaryStream(&floatMap, stream);
		return true;
	}

	if (_name == "colorMap") {
		TypeInfo<VectorMap<String, unsigned int> >::parseFromBinaryStream(&colorMap, stream);
		return true;
	}

	if (_name == "idMgr") {
		TypeInfo<ImageDesignManager* >::parseFromBinaryStream(&idMgr, stream);
		return true;
	}

	if (_name == "designerCreature") {
		TypeInfo<ManagedWeakReference<PlayerCreature* > >::parseFromBinaryStream(&designerCreature, stream);
		return true;
	}

	if (_name == "targetCreature") {
		TypeInfo<ManagedWeakReference<PlayerCreature* > >::parseFromBinaryStream(&targetCreature, stream);
		return true;
	}


	return false;
}

void ImageDesignSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ImageDesignSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ImageDesignSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "hairObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&hairObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "ukstring1";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&ukstring1, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "ukint1";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&ukint1, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "timestamp";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&timestamp, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "requiredPayment";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&requiredPayment, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "offeredPayment";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&offeredPayment, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "designerAccepted";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&designerAccepted, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "targetAccepted";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&targetAccepted, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "statMigration";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&statMigration, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "ukint4";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&ukint4, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "ukint5";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&ukint5, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "ukint6";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&ukint6, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "ukint7";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&ukint7, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "sizeFloatAttrs";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&sizeFloatAttrs, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "attributesSize";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&attributesSize, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "holoEmote";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&holoEmote, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "floatMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<String, float> >::toBinaryStream(&floatMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "colorMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<String, unsigned int> >::toBinaryStream(&colorMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "idMgr";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ImageDesignManager* >::toBinaryStream(&idMgr, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "designerCreature";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<PlayerCreature* > >::toBinaryStream(&designerCreature, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "targetCreature";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<PlayerCreature* > >::toBinaryStream(&targetCreature, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 21 + FacadeImplementation::writeObjectMembers(stream);
}

ImageDesignSessionImplementation::ImageDesignSessionImplementation(CreatureObject* parent) {
	_initializeImplementation();
	// server/zone/objects/player/ImageDesignSession.idl(99):  		Logger.setLoggingName("ImageDesignSession");
	Logger::setLoggingName("ImageDesignSession");
	// server/zone/objects/player/ImageDesignSession.idl(100):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/ImageDesignSession.idl(102):  		initializeSession();
	initializeSession();
	// server/zone/objects/player/ImageDesignSession.idl(104):  		hairObject = "";
	hairObject = "";
	// server/zone/objects/player/ImageDesignSession.idl(105):  		ukstring1 = "";
	ukstring1 = "";
	// server/zone/objects/player/ImageDesignSession.idl(106):  		ukint1 = 0;
	ukint1 = 0;
	// server/zone/objects/player/ImageDesignSession.idl(107):   		timestamp = 0;
	timestamp = 0;
	// server/zone/objects/player/ImageDesignSession.idl(108):  	 	requiredPayment = 0;
	requiredPayment = 0;
	// server/zone/objects/player/ImageDesignSession.idl(109):  	 	offeredPayment = 0;
	offeredPayment = 0;
	// server/zone/objects/player/ImageDesignSession.idl(110):  		designerAccepted = 0;
	designerAccepted = 0;
	// server/zone/objects/player/ImageDesignSession.idl(111):  	 	targetAccepted = 0;
	targetAccepted = 0;
	// server/zone/objects/player/ImageDesignSession.idl(112):  	 	statMigration = 0;
	statMigration = 0;
	// server/zone/objects/player/ImageDesignSession.idl(113):  	 	ukint4 = 0;
	ukint4 = 0;
	// server/zone/objects/player/ImageDesignSession.idl(114):  	 	ukint5 = 0;
	ukint5 = 0;
	// server/zone/objects/player/ImageDesignSession.idl(115):  	 	ukint6 = 0;
	ukint6 = 0;
	// server/zone/objects/player/ImageDesignSession.idl(116):  	 	ukint7 = 0;
	ukint7 = 0;
	// server/zone/objects/player/ImageDesignSession.idl(117):  	 	sizeFloatAttrs = 0;
	sizeFloatAttrs = 0;
	// server/zone/objects/player/ImageDesignSession.idl(118):  		attributesSize = 0;
	attributesSize = 0;
	// server/zone/objects/player/ImageDesignSession.idl(120):  		designerCreature = null;
	designerCreature = NULL;
	// server/zone/objects/player/ImageDesignSession.idl(121):  		targetCreature = null;
	targetCreature = NULL;
	// server/zone/objects/player/ImageDesignSession.idl(123):  		floatMap.removeAll();
	(&floatMap)->removeAll();
	// server/zone/objects/player/ImageDesignSession.idl(124):  		colorMap.removeAll();
	(&colorMap)->removeAll();
}

int ImageDesignSessionImplementation::cancelSession() {
	// server/zone/objects/player/ImageDesignSession.idl(140):  
	if (designerCreature == NULL){
	// server/zone/objects/player/ImageDesignSession.idl(141):  			return 0;
	return 0;
}

	else {
	// server/zone/objects/player/ImageDesignSession.idl(143):  			designerCreature.dropActiveSession(SessionFacadeType.IMAGEDESIGN);
	designerCreature->dropActiveSession(SessionFacadeType::IMAGEDESIGN);
}
	// server/zone/objects/player/ImageDesignSession.idl(146):  
	if (targetCreature == NULL){
	// server/zone/objects/player/ImageDesignSession.idl(147):  			return 0;
	return 0;
}

	else {
	// server/zone/objects/player/ImageDesignSession.idl(149):  			targetCreature.dropActiveSession(SessionFacadeType.IMAGEDESIGN);
	targetCreature->dropActiveSession(SessionFacadeType::IMAGEDESIGN);
}
	// server/zone/objects/player/ImageDesignSession.idl(152):  		dequeueIdTimeoutEvent();
	dequeueIdTimeoutEvent();
	// server/zone/objects/player/ImageDesignSession.idl(154):  		return 0;
	return 0;
}

int ImageDesignSessionImplementation::clearSession() {
	// server/zone/objects/player/ImageDesignSession.idl(158):  		return 0;
	return 0;
}

void ImageDesignSessionImplementation::clearIdTimeoutEvent() {
	// server/zone/objects/player/ImageDesignSession.idl(162):  		idTimeoutEvent = null;
	idTimeoutEvent = NULL;
}

void ImageDesignSessionImplementation::dequeueIdTimeoutEvent() {
	// server/zone/objects/player/ImageDesignSession.idl(166):  	}
	if (idTimeoutEvent != NULL){
	// server/zone/objects/player/ImageDesignSession.idl(167):  			idTimeoutEvent.cancel();
	idTimeoutEvent->cancel();
	// server/zone/objects/player/ImageDesignSession.idl(168):  			idTimeoutEvent = null;
	idTimeoutEvent = NULL;
}
}

void ImageDesignSessionImplementation::sessionTimeout() {
	// server/zone/objects/player/ImageDesignSession.idl(173):  	}
	if (designerCreature != NULL || targetCreature != NULL){
	// server/zone/objects/player/ImageDesignSession.idl(174):  			sizeFloatAttrs = 0;
	sizeFloatAttrs = 0;
	// server/zone/objects/player/ImageDesignSession.idl(175):  			attributesSize = 0;
	attributesSize = 0;
	// server/zone/objects/player/ImageDesignSession.idl(176):  			designerCreature.sendSystemMessage("Image Design Session has Timed Out. Changes Aborted.");
	designerCreature->sendSystemMessage("Image Design Session has Timed Out. Changes Aborted.");
	// server/zone/objects/player/ImageDesignSession.idl(177):  			targetCreature.sendSystemMessage("Image Design Session has Timed Out. Changes Aborted.");
	targetCreature->sendSystemMessage("Image Design Session has Timed Out. Changes Aborted.");
	// server/zone/objects/player/ImageDesignSession.idl(178):  			cancelImageDesign(designerCreature.getObjectID(), designerCreature.getObjectID(), targetCreature.getObjectID(), 0, 0);
	cancelImageDesign(designerCreature->getObjectID(), designerCreature->getObjectID(), targetCreature->getObjectID(), 0, 0);
	// server/zone/objects/player/ImageDesignSession.idl(179):  			cancelImageDesign(targetCreature.getObjectID(), designerCreature.getObjectID(), targetCreature.getObjectID(), 0, 0);
	cancelImageDesign(targetCreature->getObjectID(), designerCreature->getObjectID(), targetCreature->getObjectID(), 0, 0);
}
}

void ImageDesignSessionImplementation::setHairObject(String& hair) {
	// server/zone/objects/player/ImageDesignSession.idl(184):  		hairObject = hair;
	hairObject = hair;
}

void ImageDesignSessionImplementation::setUkstring1(String& uk1) {
	// server/zone/objects/player/ImageDesignSession.idl(188):  		ukstring1 = uk1;
	ukstring1 = uk1;
}

void ImageDesignSessionImplementation::setTimeStamp(unsigned int time) {
	// server/zone/objects/player/ImageDesignSession.idl(192):  		timestamp = time;
	timestamp = time;
}

void ImageDesignSessionImplementation::setRequiredPayment(unsigned int rp) {
	// server/zone/objects/player/ImageDesignSession.idl(196):  		requiredPayment = rp;
	requiredPayment = rp;
}

void ImageDesignSessionImplementation::setOfferedPayment(unsigned int op) {
	// server/zone/objects/player/ImageDesignSession.idl(200):  		offeredPayment = op;
	offeredPayment = op;
}

void ImageDesignSessionImplementation::setDesignerAccepted(byte da) {
	// server/zone/objects/player/ImageDesignSession.idl(204):  		designerAccepted = da;
	designerAccepted = da;
}

void ImageDesignSessionImplementation::setTargetAccepted(unsigned int ta) {
	// server/zone/objects/player/ImageDesignSession.idl(208):  		targetAccepted = ta;
	targetAccepted = ta;
}

void ImageDesignSessionImplementation::setStatMigration(byte sm) {
	// server/zone/objects/player/ImageDesignSession.idl(212):  		statMigration = sm;
	statMigration = sm;
}

void ImageDesignSessionImplementation::setUnknownInt1(unsigned int value) {
	// server/zone/objects/player/ImageDesignSession.idl(216):  		ukint1 = value;
	ukint1 = value;
}

void ImageDesignSessionImplementation::setUnknownInt4(unsigned int value) {
	// server/zone/objects/player/ImageDesignSession.idl(220):  		ukint4 = value;
	ukint4 = value;
}

void ImageDesignSessionImplementation::setUnknownInt5(unsigned int value) {
	// server/zone/objects/player/ImageDesignSession.idl(224):  		ukint5 = value;
	ukint5 = value;
}

void ImageDesignSessionImplementation::setUnknownInt6(unsigned int value) {
	// server/zone/objects/player/ImageDesignSession.idl(228):  		ukint6 = value;
	ukint6 = value;
}

void ImageDesignSessionImplementation::setUnknownInt7(unsigned int value) {
	// server/zone/objects/player/ImageDesignSession.idl(232):  		ukint7 = value;
	ukint7 = value;
}

void ImageDesignSessionImplementation::setSizeFloatAttrs(unsigned int sfa) {
	// server/zone/objects/player/ImageDesignSession.idl(236):  		sizeFloatAttrs = sfa;
	sizeFloatAttrs = sfa;
}

void ImageDesignSessionImplementation::setAttributesSize(unsigned int val) {
	// server/zone/objects/player/ImageDesignSession.idl(240):  		attributesSize = val;
	attributesSize = val;
}

void ImageDesignSessionImplementation::setHoloEmote(String& val) {
	// server/zone/objects/player/ImageDesignSession.idl(244):  		holoEmote = val;
	holoEmote = val;
}

/*
 *	ImageDesignSessionAdapter
 */

ImageDesignSessionAdapter::ImageDesignSessionAdapter(ImageDesignSessionImplementation* obj) : FacadeAdapter(obj) {
}

Packet* ImageDesignSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		updateImageDesign(inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter(), inv->getSignedIntParameter());
		break;
	case 7:
		cancelImageDesign(inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter(), inv->getSignedIntParameter());
		break;
	case 8:
		resp->insertSignedInt(initializeSession());
		break;
	case 9:
		resp->insertSignedInt(cancelSession());
		break;
	case 10:
		resp->insertSignedInt(clearSession());
		break;
	case 11:
		clearIdTimeoutEvent();
		break;
	case 12:
		dequeueIdTimeoutEvent();
		break;
	case 13:
		sessionTimeout();
		break;
	case 14:
		setHairObject(inv->getAsciiParameter(_param0_setHairObject__String_));
		break;
	case 15:
		setUkstring1(inv->getAsciiParameter(_param0_setUkstring1__String_));
		break;
	case 16:
		setTimeStamp(inv->getUnsignedIntParameter());
		break;
	case 17:
		setRequiredPayment(inv->getUnsignedIntParameter());
		break;
	case 18:
		setOfferedPayment(inv->getUnsignedIntParameter());
		break;
	case 19:
		setDesignerAccepted(inv->getByteParameter());
		break;
	case 20:
		setTargetAccepted(inv->getUnsignedIntParameter());
		break;
	case 21:
		setStatMigration(inv->getByteParameter());
		break;
	case 22:
		setUnknownInt1(inv->getUnsignedIntParameter());
		break;
	case 23:
		setUnknownInt4(inv->getUnsignedIntParameter());
		break;
	case 24:
		setUnknownInt5(inv->getUnsignedIntParameter());
		break;
	case 25:
		setUnknownInt6(inv->getUnsignedIntParameter());
		break;
	case 26:
		setUnknownInt7(inv->getUnsignedIntParameter());
		break;
	case 27:
		setSizeFloatAttrs(inv->getUnsignedIntParameter());
		break;
	case 28:
		setAttributesSize(inv->getUnsignedIntParameter());
		break;
	case 29:
		setHoloEmote(inv->getAsciiParameter(_param0_setHoloEmote__String_));
		break;
	case 30:
		resp->insertSignedInt(doPayment());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ImageDesignSessionAdapter::updateImageDesign(unsigned long long object, unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type) {
	((ImageDesignSessionImplementation*) impl)->updateImageDesign(object, designer, targetPlayer, tent, type);
}

void ImageDesignSessionAdapter::cancelImageDesign(unsigned long long object, unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type) {
	((ImageDesignSessionImplementation*) impl)->cancelImageDesign(object, designer, targetPlayer, tent, type);
}

int ImageDesignSessionAdapter::initializeSession() {
	return ((ImageDesignSessionImplementation*) impl)->initializeSession();
}

int ImageDesignSessionAdapter::cancelSession() {
	return ((ImageDesignSessionImplementation*) impl)->cancelSession();
}

int ImageDesignSessionAdapter::clearSession() {
	return ((ImageDesignSessionImplementation*) impl)->clearSession();
}

void ImageDesignSessionAdapter::clearIdTimeoutEvent() {
	((ImageDesignSessionImplementation*) impl)->clearIdTimeoutEvent();
}

void ImageDesignSessionAdapter::dequeueIdTimeoutEvent() {
	((ImageDesignSessionImplementation*) impl)->dequeueIdTimeoutEvent();
}

void ImageDesignSessionAdapter::sessionTimeout() {
	((ImageDesignSessionImplementation*) impl)->sessionTimeout();
}

void ImageDesignSessionAdapter::setHairObject(String& hair) {
	((ImageDesignSessionImplementation*) impl)->setHairObject(hair);
}

void ImageDesignSessionAdapter::setUkstring1(String& uk1) {
	((ImageDesignSessionImplementation*) impl)->setUkstring1(uk1);
}

void ImageDesignSessionAdapter::setTimeStamp(unsigned int time) {
	((ImageDesignSessionImplementation*) impl)->setTimeStamp(time);
}

void ImageDesignSessionAdapter::setRequiredPayment(unsigned int rp) {
	((ImageDesignSessionImplementation*) impl)->setRequiredPayment(rp);
}

void ImageDesignSessionAdapter::setOfferedPayment(unsigned int op) {
	((ImageDesignSessionImplementation*) impl)->setOfferedPayment(op);
}

void ImageDesignSessionAdapter::setDesignerAccepted(byte da) {
	((ImageDesignSessionImplementation*) impl)->setDesignerAccepted(da);
}

void ImageDesignSessionAdapter::setTargetAccepted(unsigned int ta) {
	((ImageDesignSessionImplementation*) impl)->setTargetAccepted(ta);
}

void ImageDesignSessionAdapter::setStatMigration(byte sm) {
	((ImageDesignSessionImplementation*) impl)->setStatMigration(sm);
}

void ImageDesignSessionAdapter::setUnknownInt1(unsigned int value) {
	((ImageDesignSessionImplementation*) impl)->setUnknownInt1(value);
}

void ImageDesignSessionAdapter::setUnknownInt4(unsigned int value) {
	((ImageDesignSessionImplementation*) impl)->setUnknownInt4(value);
}

void ImageDesignSessionAdapter::setUnknownInt5(unsigned int value) {
	((ImageDesignSessionImplementation*) impl)->setUnknownInt5(value);
}

void ImageDesignSessionAdapter::setUnknownInt6(unsigned int value) {
	((ImageDesignSessionImplementation*) impl)->setUnknownInt6(value);
}

void ImageDesignSessionAdapter::setUnknownInt7(unsigned int value) {
	((ImageDesignSessionImplementation*) impl)->setUnknownInt7(value);
}

void ImageDesignSessionAdapter::setSizeFloatAttrs(unsigned int sfa) {
	((ImageDesignSessionImplementation*) impl)->setSizeFloatAttrs(sfa);
}

void ImageDesignSessionAdapter::setAttributesSize(unsigned int val) {
	((ImageDesignSessionImplementation*) impl)->setAttributesSize(val);
}

void ImageDesignSessionAdapter::setHoloEmote(String& val) {
	((ImageDesignSessionImplementation*) impl)->setHoloEmote(val);
}

int ImageDesignSessionAdapter::doPayment() {
	return ((ImageDesignSessionImplementation*) impl)->doPayment();
}

/*
 *	ImageDesignSessionHelper
 */

ImageDesignSessionHelper* ImageDesignSessionHelper::staticInitializer = ImageDesignSessionHelper::instance();

ImageDesignSessionHelper::ImageDesignSessionHelper() {
	className = "ImageDesignSession";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ImageDesignSessionHelper::finalizeHelper() {
	ImageDesignSessionHelper::finalize();
}

DistributedObject* ImageDesignSessionHelper::instantiateObject() {
	return new ImageDesignSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* ImageDesignSessionHelper::instantiateServant() {
	return new ImageDesignSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ImageDesignSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ImageDesignSessionAdapter((ImageDesignSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

