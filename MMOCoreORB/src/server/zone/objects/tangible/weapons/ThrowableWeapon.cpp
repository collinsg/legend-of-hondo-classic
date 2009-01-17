/*
 *	server/zone/objects/tangible/weapons/ThrowableWeapon.cpp generated by engine3 IDL compiler 0.55
 */

#include "ThrowableWeapon.h"

#include "ThrowableWeaponImplementation.h"

#include "../../creature/CreatureObject.h"

#include "../../player/Player.h"

#include "RangedWeapon.h"

/*
 *	ThrowableWeaponStub
 */

ThrowableWeapon::ThrowableWeapon(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int tp, bool eqp) : RangedWeapon(DummyConstructorParameter::instance()) {
	_impl = new ThrowableWeaponImplementation(oid, tempCRC, n, tempn, tp, eqp);
	_impl->_setStub(this);
}

ThrowableWeapon::ThrowableWeapon(CreatureObject* creature, const String& temp, const UnicodeString& n, const String& tempn, int tp, bool eqp) : RangedWeapon(DummyConstructorParameter::instance()) {
	_impl = new ThrowableWeaponImplementation(creature, temp, n, tempn, tp, eqp);
	_impl->_setStub(this);
}

ThrowableWeapon::ThrowableWeapon(DummyConstructorParameter* param) : RangedWeapon(param) {
}

ThrowableWeapon::~ThrowableWeapon() {
}

void ThrowableWeapon::useCharge(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ThrowableWeaponImplementation*) _impl)->useCharge(player);
}

void ThrowableWeapon::remove(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ThrowableWeaponImplementation*) _impl)->remove(player);
}

int ThrowableWeapon::useObject(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((ThrowableWeaponImplementation*) _impl)->useObject(player);
}

void ThrowableWeapon::setSkill(const String& sk) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(sk);

		method.executeWithVoidReturn();
	} else
		((ThrowableWeaponImplementation*) _impl)->setSkill(sk);
}

String& ThrowableWeapon::getSkill() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithAsciiReturn(_return_getSkill);
		return _return_getSkill;
	} else
		return ((ThrowableWeaponImplementation*) _impl)->getSkill();
}

bool ThrowableWeapon::isUsefull(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((ThrowableWeaponImplementation*) _impl)->isUsefull(player);
}

unsigned int ThrowableWeapon::getSkillCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ThrowableWeaponImplementation*) _impl)->getSkillCRC();
}

/*
 *	ThrowableWeaponAdapter
 */

ThrowableWeaponAdapter::ThrowableWeaponAdapter(ThrowableWeaponImplementation* obj) : RangedWeaponAdapter(obj) {
}

Packet* ThrowableWeaponAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		useCharge((Player*) inv->getObjectParameter());
		break;
	case 7:
		remove((Player*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	case 9:
		setSkill(inv->getAsciiParameter(_param0_setSkill__String_));
		break;
	case 10:
		resp->insertAscii(getSkill());
		break;
	case 11:
		resp->insertBoolean(isUsefull((Player*) inv->getObjectParameter()));
		break;
	case 12:
		resp->insertInt(getSkillCRC());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ThrowableWeaponAdapter::useCharge(Player* player) {
	return ((ThrowableWeaponImplementation*) impl)->useCharge(player);
}

void ThrowableWeaponAdapter::remove(Player* player) {
	return ((ThrowableWeaponImplementation*) impl)->remove(player);
}

int ThrowableWeaponAdapter::useObject(Player* player) {
	return ((ThrowableWeaponImplementation*) impl)->useObject(player);
}

void ThrowableWeaponAdapter::setSkill(const String& sk) {
	return ((ThrowableWeaponImplementation*) impl)->setSkill(sk);
}

String& ThrowableWeaponAdapter::getSkill() {
	return ((ThrowableWeaponImplementation*) impl)->getSkill();
}

bool ThrowableWeaponAdapter::isUsefull(Player* player) {
	return ((ThrowableWeaponImplementation*) impl)->isUsefull(player);
}

unsigned int ThrowableWeaponAdapter::getSkillCRC() {
	return ((ThrowableWeaponImplementation*) impl)->getSkillCRC();
}

/*
 *	ThrowableWeaponHelper
 */

ThrowableWeaponHelper* ThrowableWeaponHelper::staticInitializer = ThrowableWeaponHelper::instance();

ThrowableWeaponHelper::ThrowableWeaponHelper() {
	className = "ThrowableWeapon";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ThrowableWeaponHelper::finalizeHelper() {
	ThrowableWeaponHelper::finalize();
}

DistributedObject* ThrowableWeaponHelper::instantiateObject() {
	return new ThrowableWeapon(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ThrowableWeaponHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ThrowableWeaponAdapter((ThrowableWeaponImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ThrowableWeaponServant
 */

ThrowableWeaponServant::ThrowableWeaponServant(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int tp, bool eqp) : RangedWeaponImplementation(oid, tempCRC, n, tempn, tp, eqp) {
	_classHelper = ThrowableWeaponHelper::instance();
}

ThrowableWeaponServant::ThrowableWeaponServant(CreatureObject* creature, const String& temp, const UnicodeString& n, const String& tempn, int tp, bool eqp) : RangedWeaponImplementation(creature, temp, n, tempn, tp, eqp) {
	_classHelper = ThrowableWeaponHelper::instance();
}

ThrowableWeaponServant::~ThrowableWeaponServant() {
}

void ThrowableWeaponServant::_setStub(DistributedObjectStub* stub) {
	_this = (ThrowableWeapon*) stub;
	RangedWeaponServant::_setStub(stub);
}

DistributedObjectStub* ThrowableWeaponServant::_getStub() {
	return _this;
}

