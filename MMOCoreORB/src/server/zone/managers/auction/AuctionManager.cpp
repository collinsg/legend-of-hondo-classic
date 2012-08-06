/*
 *	server/zone/managers/auction/AuctionManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "AuctionManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/auction/AuctionsMap.h"

#include "server/zone/objects/auction/AuctionItem.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	AuctionManagerStub
 */

enum {RPC_INITIALIZE__ = 6,RPC_GETITEMATTRIBUTES__CREATUREOBJECT_LONG_,RPC_GETDATA__CREATUREOBJECT_INT_LONG_INT_INT_INT_INT_,RPC_RETRIEVEITEM__CREATUREOBJECT_LONG_LONG_,RPC_BUYITEM__CREATUREOBJECT_LONG_INT_INT_,RPC_DOAUCTIONBID__CREATUREOBJECT_AUCTIONITEM_INT_INT_,RPC_DOINSTANTBUY__CREATUREOBJECT_AUCTIONITEM_,RPC_CHECKBIDAUCTION__CREATUREOBJECT_AUCTIONITEM_INT_INT_,RPC_CANCELITEM__CREATUREOBJECT_LONG_,RPC_GETAUCTIONMAP__,RPC_CHECKVENDORITEMS__,RPC_CHECKAUCTIONS__,RPC_GETVENDORUID__SCENEOBJECT_,RPC_UPDATEVENDORUID__SCENEOBJECT_STRING_STRING_,RPC_UPDATEVENDORSEARCH__SCENEOBJECT_BOOL_,RPC_EXPIRESALE__AUCTIONITEM_,RPC_EXPIREBIDAUCTION__AUCTIONITEM_,RPC_EXPIREAUCTION__AUCTIONITEM_,RPC_DELETEEXPIREDSALE__AUCTIONITEM_,RPC_ISMARKETENABLED__,RPC_SETMARKETENABLED__BOOL_,RPC_DISPLAYINFO__CREATUREOBJECT_,RPC_UPDATEAUCTIONOWNER__AUCTIONITEM_CREATUREOBJECT_};

AuctionManager::AuctionManager(ZoneServer* server) : ManagedService(DummyConstructorParameter::instance()) {
	AuctionManagerImplementation* _implementation = new AuctionManagerImplementation(server);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("AuctionManager");
}

AuctionManager::AuctionManager(DummyConstructorParameter* param) : ManagedService(param) {
	_setClassName("AuctionManager");
}

AuctionManager::~AuctionManager() {
}



void AuctionManager::initialize() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void AuctionManager::addSaleItem(CreatureObject* player, unsigned long long objectid, SceneObject* vendor, const UnicodeString& description, int price, unsigned int duration, bool auction, bool premium) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->addSaleItem(player, objectid, vendor, description, price, duration, auction, premium);
}

AuctionItem* AuctionManager::createVendorItem(CreatureObject* player, SceneObject* objectToSell, SceneObject* vendor, const UnicodeString& description, int price, unsigned int duration, bool auction, bool premium) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->createVendorItem(player, objectToSell, vendor, description, price, duration, auction, premium);
}

int AuctionManager::checkSaleItem(CreatureObject* player, SceneObject* object, SceneObject* vendor, int price, bool premium) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->checkSaleItem(player, object, vendor, price, premium);
}

void AuctionManager::getItemAttributes(CreatureObject* player, unsigned long long objectid) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETITEMATTRIBUTES__CREATUREOBJECT_LONG_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);

		method.executeWithVoidReturn();
	} else
		_implementation->getItemAttributes(player, objectid);
}

void AuctionManager::getData(CreatureObject* player, int extent, unsigned long long vendorObjectID, int screen, unsigned int category, int count, int offset) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDATA__CREATUREOBJECT_INT_LONG_INT_INT_INT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(extent);
		method.addUnsignedLongParameter(vendorObjectID);
		method.addSignedIntParameter(screen);
		method.addUnsignedIntParameter(category);
		method.addSignedIntParameter(count);
		method.addSignedIntParameter(offset);

		method.executeWithVoidReturn();
	} else
		_implementation->getData(player, extent, vendorObjectID, screen, category, count, offset);
}

void AuctionManager::getAuctionData(CreatureObject* player, SceneObject* usedVendor, const String& planet, const String& region, SceneObject* vendor, int screen, unsigned int category, int count, int offset) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->getAuctionData(player, usedVendor, planet, region, vendor, screen, category, count, offset);
}

int AuctionManager::checkRetrieve(CreatureObject* player, unsigned long long objectIdToRetrieve, SceneObject* vendor) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->checkRetrieve(player, objectIdToRetrieve, vendor);
}

void AuctionManager::retrieveItem(CreatureObject* player, unsigned long long objectid, unsigned long long vendorID) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RETRIEVEITEM__CREATUREOBJECT_LONG_LONG_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);
		method.addUnsignedLongParameter(vendorID);

		method.executeWithVoidReturn();
	} else
		_implementation->retrieveItem(player, objectid, vendorID);
}

void AuctionManager::buyItem(CreatureObject* player, unsigned long long objectid, int price1, int price2) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_BUYITEM__CREATUREOBJECT_LONG_INT_INT_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		method.executeWithVoidReturn();
	} else
		_implementation->buyItem(player, objectid, price1, price2);
}

void AuctionManager::doAuctionBid(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOAUCTIONBID__CREATUREOBJECT_AUCTIONITEM_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		method.executeWithVoidReturn();
	} else
		_implementation->doAuctionBid(player, item, price1, price2);
}

void AuctionManager::doInstantBuy(CreatureObject* player, AuctionItem* item) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOINSTANTBUY__CREATUREOBJECT_AUCTIONITEM_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		_implementation->doInstantBuy(player, item);
}

int AuctionManager::checkBidAuction(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKBIDAUCTION__CREATUREOBJECT_AUCTIONITEM_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->checkBidAuction(player, item, price1, price2);
}

void AuctionManager::cancelItem(CreatureObject* player, unsigned long long objectID) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELITEM__CREATUREOBJECT_LONG_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		_implementation->cancelItem(player, objectID);
}

AuctionQueryHeadersResponseMessage* AuctionManager::fillAuctionQueryHeadersResponseMessage(CreatureObject* player, SceneObject* vendor, TerminalListVector* terminalList, int screen, unsigned int category, int count, int offset) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->fillAuctionQueryHeadersResponseMessage(player, vendor, terminalList, screen, category, count, offset);
}

AuctionsMap* AuctionManager::getAuctionMap() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAUCTIONMAP__);

		return static_cast<AuctionsMap*>(method.executeWithObjectReturn());
	} else
		return _implementation->getAuctionMap();
}

void AuctionManager::checkVendorItems() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKVENDORITEMS__);

		method.executeWithVoidReturn();
	} else
		_implementation->checkVendorItems();
}

void AuctionManager::checkAuctions() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKAUCTIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->checkAuctions();
}

String AuctionManager::getVendorUID(SceneObject* vendor) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETVENDORUID__SCENEOBJECT_);
		method.addObjectParameter(vendor);

		String _return_getVendorUID;
		method.executeWithAsciiReturn(_return_getVendorUID);
		return _return_getVendorUID;
	} else
		return _implementation->getVendorUID(vendor);
}

void AuctionManager::updateVendorUID(SceneObject* vendor, const String& oldUID, const String& newUID) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEVENDORUID__SCENEOBJECT_STRING_STRING_);
		method.addObjectParameter(vendor);
		method.addAsciiParameter(oldUID);
		method.addAsciiParameter(newUID);

		method.executeWithVoidReturn();
	} else
		_implementation->updateVendorUID(vendor, oldUID, newUID);
}

void AuctionManager::updateVendorSearch(SceneObject* vendor, bool enabled) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEVENDORSEARCH__SCENEOBJECT_BOOL_);
		method.addObjectParameter(vendor);
		method.addBooleanParameter(enabled);

		method.executeWithVoidReturn();
	} else
		_implementation->updateVendorSearch(vendor, enabled);
}

void AuctionManager::expireSale(AuctionItem* item) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_EXPIRESALE__AUCTIONITEM_);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		_implementation->expireSale(item);
}

void AuctionManager::expireBidAuction(AuctionItem* item) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_EXPIREBIDAUCTION__AUCTIONITEM_);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		_implementation->expireBidAuction(item);
}

void AuctionManager::expireAuction(AuctionItem* item) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_EXPIREAUCTION__AUCTIONITEM_);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		_implementation->expireAuction(item);
}

void AuctionManager::deleteExpiredSale(AuctionItem* item) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DELETEEXPIREDSALE__AUCTIONITEM_);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		_implementation->deleteExpiredSale(item);
}

bool AuctionManager::isMarketEnabled() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISMARKETENABLED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMarketEnabled();
}

void AuctionManager::setMarketEnabled(bool value) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMARKETENABLED__BOOL_);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setMarketEnabled(value);
}

void AuctionManager::displayInfo(CreatureObject* player) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DISPLAYINFO__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->displayInfo(player);
}

void AuctionManager::updateAuctionOwner(AuctionItem* item, CreatureObject* player) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEAUCTIONOWNER__AUCTIONITEM_CREATUREOBJECT_);
		method.addObjectParameter(item);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->updateAuctionOwner(item, player);
}

DistributedObjectServant* AuctionManager::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void AuctionManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	AuctionManagerImplementation
 */

AuctionManagerImplementation::AuctionManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


AuctionManagerImplementation::~AuctionManagerImplementation() {
}


void AuctionManagerImplementation::finalize() {
}

void AuctionManagerImplementation::_initializeImplementation() {
	_setClassHelper(AuctionManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void AuctionManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<AuctionManager*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* AuctionManagerImplementation::_getStub() {
	return _this.get();
}

AuctionManagerImplementation::operator const AuctionManager*() {
	return _this.get();
}

void AuctionManagerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void AuctionManagerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void AuctionManagerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void AuctionManagerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void AuctionManagerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void AuctionManagerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void AuctionManagerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void AuctionManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("AuctionManager");

}

void AuctionManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AuctionManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool AuctionManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "AuctionManager.auctionMap") {
		TypeInfo<ManagedReference<AuctionsMap* > >::parseFromBinaryStream(&auctionMap, stream);
		return true;
	}

	if (_name == "AuctionManager.zoneServer") {
		TypeInfo<ManagedReference<ZoneServer* > >::parseFromBinaryStream(&zoneServer, stream);
		return true;
	}

	if (_name == "AuctionManager.auctionEvents") {
		TypeInfo<VectorMap<unsigned long long, Reference<Task*> > >::parseFromBinaryStream(&auctionEvents, stream);
		return true;
	}

	if (_name == "AuctionManager.pendingUIDUpdates") {
		TypeInfo<VectorMap<ManagedReference<SceneObject* >, String> >::parseFromBinaryStream(&pendingUIDUpdates, stream);
		return true;
	}

	if (_name == "AuctionManager.pendingOldUIDUpdates") {
		TypeInfo<VectorMap<ManagedReference<SceneObject* >, String> >::parseFromBinaryStream(&pendingOldUIDUpdates, stream);
		return true;
	}

	if (_name == "AuctionManager.marketEnabled") {
		TypeInfo<bool >::parseFromBinaryStream(&marketEnabled, stream);
		return true;
	}


	return false;
}

void AuctionManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AuctionManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AuctionManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServiceImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "AuctionManager.auctionMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<AuctionsMap* > >::toBinaryStream(&auctionMap, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AuctionManager.zoneServer";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ZoneServer* > >::toBinaryStream(&zoneServer, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AuctionManager.auctionEvents";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<unsigned long long, Reference<Task*> > >::toBinaryStream(&auctionEvents, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AuctionManager.pendingUIDUpdates";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<ManagedReference<SceneObject* >, String> >::toBinaryStream(&pendingUIDUpdates, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AuctionManager.pendingOldUIDUpdates";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<ManagedReference<SceneObject* >, String> >::toBinaryStream(&pendingOldUIDUpdates, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AuctionManager.marketEnabled";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&marketEnabled, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 6;
}

AuctionManagerImplementation::AuctionManagerImplementation(ZoneServer* server) {
	_initializeImplementation();
	// server/zone/managers/auction/AuctionManager.idl():  		zoneServer = server;
	zoneServer = server;
	// server/zone/managers/auction/AuctionManager.idl():  		Logger.setLoggingName("AuctionManager");
	Logger::setLoggingName("AuctionManager");
	// server/zone/managers/auction/AuctionManager.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/auction/AuctionManager.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/auction/AuctionManager.idl():  		marketEnabled = false;
	marketEnabled = false;
	// server/zone/managers/auction/AuctionManager.idl():  		auctionEvents.setNoDuplicateInsertPlan();
	(&auctionEvents)->setNoDuplicateInsertPlan();
	// server/zone/managers/auction/AuctionManager.idl():  		auctionEvents.setNullValue(null);
	(&auctionEvents)->setNullValue(NULL);
}

AuctionsMap* AuctionManagerImplementation::getAuctionMap() {
	// server/zone/managers/auction/AuctionManager.idl():  		return auctionMap;
	return auctionMap;
}

void AuctionManagerImplementation::updateVendorUID(SceneObject* vendor, const String& oldUID, const String& newUID) {
	// server/zone/managers/auction/AuctionManager.idl():  		auctionMap.
	if (auctionMap == NULL){
	// server/zone/managers/auction/AuctionManager.idl():  			pendingUIDUpdates.put(vendor, newUID);
	(&pendingUIDUpdates)->put(vendor, newUID);
	// server/zone/managers/auction/AuctionManager.idl():  			pendingOldUIDUpdates.put(vendor, oldUID);
	(&pendingOldUIDUpdates)->put(vendor, oldUID);
	// server/zone/managers/auction/AuctionManager.idl():  			return;
	return;
}
	// server/zone/managers/auction/AuctionManager.idl():  		auctionMap.updateUID(vendor, oldUID, newUID);
	auctionMap->updateUID(vendor, oldUID, newUID);
}

void AuctionManagerImplementation::updateVendorSearch(SceneObject* vendor, bool enabled) {
	// server/zone/managers/auction/AuctionManager.idl():  		auctionMap.updateVendorSearch(vendor, enabled);
	auctionMap->updateVendorSearch(vendor, enabled);
}

bool AuctionManagerImplementation::isMarketEnabled() {
	// server/zone/managers/auction/AuctionManager.idl():  		return marketEnabled == true;
	return marketEnabled == true;
}

void AuctionManagerImplementation::setMarketEnabled(bool value) {
	Locker _locker(_this.get());
	// server/zone/managers/auction/AuctionManager.idl():  		marketEnabled = value;
	marketEnabled = value;
}

/*
 *	AuctionManagerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


AuctionManagerAdapter::AuctionManagerAdapter(AuctionManager* obj) : ManagedServiceAdapter(obj) {
}

void AuctionManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZE__:
		{
			initialize();
		}
		break;
	case RPC_GETITEMATTRIBUTES__CREATUREOBJECT_LONG_:
		{
			getItemAttributes(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter());
		}
		break;
	case RPC_GETDATA__CREATUREOBJECT_INT_LONG_INT_INT_INT_INT_:
		{
			getData(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getUnsignedLongParameter(), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		}
		break;
	case RPC_RETRIEVEITEM__CREATUREOBJECT_LONG_LONG_:
		{
			retrieveItem(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter());
		}
		break;
	case RPC_BUYITEM__CREATUREOBJECT_LONG_INT_INT_:
		{
			buyItem(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		}
		break;
	case RPC_DOAUCTIONBID__CREATUREOBJECT_AUCTIONITEM_INT_INT_:
		{
			doAuctionBid(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<AuctionItem*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		}
		break;
	case RPC_DOINSTANTBUY__CREATUREOBJECT_AUCTIONITEM_:
		{
			doInstantBuy(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<AuctionItem*>(inv->getObjectParameter()));
		}
		break;
	case RPC_CHECKBIDAUCTION__CREATUREOBJECT_AUCTIONITEM_INT_INT_:
		{
			resp->insertSignedInt(checkBidAuction(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<AuctionItem*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getSignedIntParameter()));
		}
		break;
	case RPC_CANCELITEM__CREATUREOBJECT_LONG_:
		{
			cancelItem(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter());
		}
		break;
	case RPC_GETAUCTIONMAP__:
		{
			resp->insertLong(getAuctionMap()->_getObjectID());
		}
		break;
	case RPC_CHECKVENDORITEMS__:
		{
			checkVendorItems();
		}
		break;
	case RPC_CHECKAUCTIONS__:
		{
			checkAuctions();
		}
		break;
	case RPC_GETVENDORUID__SCENEOBJECT_:
		{
			resp->insertAscii(getVendorUID(static_cast<SceneObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_UPDATEVENDORUID__SCENEOBJECT_STRING_STRING_:
		{
			String oldUID; String newUID; 
			updateVendorUID(static_cast<SceneObject*>(inv->getObjectParameter()), inv->getAsciiParameter(oldUID), inv->getAsciiParameter(newUID));
		}
		break;
	case RPC_UPDATEVENDORSEARCH__SCENEOBJECT_BOOL_:
		{
			updateVendorSearch(static_cast<SceneObject*>(inv->getObjectParameter()), inv->getBooleanParameter());
		}
		break;
	case RPC_EXPIRESALE__AUCTIONITEM_:
		{
			expireSale(static_cast<AuctionItem*>(inv->getObjectParameter()));
		}
		break;
	case RPC_EXPIREBIDAUCTION__AUCTIONITEM_:
		{
			expireBidAuction(static_cast<AuctionItem*>(inv->getObjectParameter()));
		}
		break;
	case RPC_EXPIREAUCTION__AUCTIONITEM_:
		{
			expireAuction(static_cast<AuctionItem*>(inv->getObjectParameter()));
		}
		break;
	case RPC_DELETEEXPIREDSALE__AUCTIONITEM_:
		{
			deleteExpiredSale(static_cast<AuctionItem*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ISMARKETENABLED__:
		{
			resp->insertBoolean(isMarketEnabled());
		}
		break;
	case RPC_SETMARKETENABLED__BOOL_:
		{
			setMarketEnabled(inv->getBooleanParameter());
		}
		break;
	case RPC_DISPLAYINFO__CREATUREOBJECT_:
		{
			displayInfo(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_UPDATEAUCTIONOWNER__AUCTIONITEM_CREATUREOBJECT_:
		{
			updateAuctionOwner(static_cast<AuctionItem*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void AuctionManagerAdapter::initialize() {
	(static_cast<AuctionManager*>(stub))->initialize();
}

void AuctionManagerAdapter::getItemAttributes(CreatureObject* player, unsigned long long objectid) {
	(static_cast<AuctionManager*>(stub))->getItemAttributes(player, objectid);
}

void AuctionManagerAdapter::getData(CreatureObject* player, int extent, unsigned long long vendorObjectID, int screen, unsigned int category, int count, int offset) {
	(static_cast<AuctionManager*>(stub))->getData(player, extent, vendorObjectID, screen, category, count, offset);
}

void AuctionManagerAdapter::retrieveItem(CreatureObject* player, unsigned long long objectid, unsigned long long vendorID) {
	(static_cast<AuctionManager*>(stub))->retrieveItem(player, objectid, vendorID);
}

void AuctionManagerAdapter::buyItem(CreatureObject* player, unsigned long long objectid, int price1, int price2) {
	(static_cast<AuctionManager*>(stub))->buyItem(player, objectid, price1, price2);
}

void AuctionManagerAdapter::doAuctionBid(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	(static_cast<AuctionManager*>(stub))->doAuctionBid(player, item, price1, price2);
}

void AuctionManagerAdapter::doInstantBuy(CreatureObject* player, AuctionItem* item) {
	(static_cast<AuctionManager*>(stub))->doInstantBuy(player, item);
}

int AuctionManagerAdapter::checkBidAuction(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	return (static_cast<AuctionManager*>(stub))->checkBidAuction(player, item, price1, price2);
}

void AuctionManagerAdapter::cancelItem(CreatureObject* player, unsigned long long objectID) {
	(static_cast<AuctionManager*>(stub))->cancelItem(player, objectID);
}

AuctionsMap* AuctionManagerAdapter::getAuctionMap() {
	return (static_cast<AuctionManager*>(stub))->getAuctionMap();
}

void AuctionManagerAdapter::checkVendorItems() {
	(static_cast<AuctionManager*>(stub))->checkVendorItems();
}

void AuctionManagerAdapter::checkAuctions() {
	(static_cast<AuctionManager*>(stub))->checkAuctions();
}

String AuctionManagerAdapter::getVendorUID(SceneObject* vendor) {
	return (static_cast<AuctionManager*>(stub))->getVendorUID(vendor);
}

void AuctionManagerAdapter::updateVendorUID(SceneObject* vendor, const String& oldUID, const String& newUID) {
	(static_cast<AuctionManager*>(stub))->updateVendorUID(vendor, oldUID, newUID);
}

void AuctionManagerAdapter::updateVendorSearch(SceneObject* vendor, bool enabled) {
	(static_cast<AuctionManager*>(stub))->updateVendorSearch(vendor, enabled);
}

void AuctionManagerAdapter::expireSale(AuctionItem* item) {
	(static_cast<AuctionManager*>(stub))->expireSale(item);
}

void AuctionManagerAdapter::expireBidAuction(AuctionItem* item) {
	(static_cast<AuctionManager*>(stub))->expireBidAuction(item);
}

void AuctionManagerAdapter::expireAuction(AuctionItem* item) {
	(static_cast<AuctionManager*>(stub))->expireAuction(item);
}

void AuctionManagerAdapter::deleteExpiredSale(AuctionItem* item) {
	(static_cast<AuctionManager*>(stub))->deleteExpiredSale(item);
}

bool AuctionManagerAdapter::isMarketEnabled() {
	return (static_cast<AuctionManager*>(stub))->isMarketEnabled();
}

void AuctionManagerAdapter::setMarketEnabled(bool value) {
	(static_cast<AuctionManager*>(stub))->setMarketEnabled(value);
}

void AuctionManagerAdapter::displayInfo(CreatureObject* player) {
	(static_cast<AuctionManager*>(stub))->displayInfo(player);
}

void AuctionManagerAdapter::updateAuctionOwner(AuctionItem* item, CreatureObject* player) {
	(static_cast<AuctionManager*>(stub))->updateAuctionOwner(item, player);
}

/*
 *	AuctionManagerHelper
 */

AuctionManagerHelper* AuctionManagerHelper::staticInitializer = AuctionManagerHelper::instance();

AuctionManagerHelper::AuctionManagerHelper() {
	className = "AuctionManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void AuctionManagerHelper::finalizeHelper() {
	AuctionManagerHelper::finalize();
}

DistributedObject* AuctionManagerHelper::instantiateObject() {
	return new AuctionManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* AuctionManagerHelper::instantiateServant() {
	return new AuctionManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* AuctionManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AuctionManagerAdapter(static_cast<AuctionManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

