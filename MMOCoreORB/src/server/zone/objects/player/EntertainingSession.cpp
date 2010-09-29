/*
 *	server/zone/objects/player/EntertainingSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "EntertainingSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/tangible/Instrument.h"

#include "server/zone/objects/player/events/EntertainingSessionTask.h"

#include "server/zone/objects/player/EntertainingObserver.h"

/*
 *	EntertainingSessionStub
 */

EntertainingSession::EntertainingSession(CreatureObject* ent) : Facade(DummyConstructorParameter::instance()) {
	_impl = new EntertainingSessionImplementation(ent);
	_impl->_setStub(this);
}

EntertainingSession::EntertainingSession(DummyConstructorParameter* param) : Facade(param) {
}

EntertainingSession::~EntertainingSession() {
}


void EntertainingSession::doEntertainerPatronEffects() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->doEntertainerPatronEffects();
}

void EntertainingSession::doPerformanceAction() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->doPerformanceAction();
}

void EntertainingSession::addEntertainerFlourishBuff() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->addEntertainerFlourishBuff();
}

void EntertainingSession::startEntertaining(const String& dance, const String& animation, bool isDanceSession) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(dance);
		method.addAsciiParameter(animation);
		method.addBooleanParameter(isDanceSession);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->startEntertaining(dance, animation, isDanceSession);
}

void EntertainingSession::healWounds(CreatureObject* creature, float woundHeal, float shockHeal) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(creature);
		method.addFloatParameter(woundHeal);
		method.addFloatParameter(shockHeal);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->healWounds(creature, woundHeal, shockHeal);
}

bool EntertainingSession::isInEntertainingBuilding(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(creature);

		return method.executeWithBooleanReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->isInEntertainingBuilding(creature);
}

void EntertainingSession::doFlourish(int flourishNumber) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(flourishNumber);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->doFlourish(flourishNumber);
}

bool EntertainingSession::canGiveEntertainBuff() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithBooleanReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->canGiveEntertainBuff();
}

void EntertainingSession::addFlourishXp(int xp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addSignedIntParameter(xp);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->addFlourishXp(xp);
}

void EntertainingSession::addHealingXp(int xp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addSignedIntParameter(xp);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->addHealingXp(xp);
}

int EntertainingSession::initializeSession() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithSignedIntReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->initializeSession();
}

int EntertainingSession::cancelSession() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->cancelSession();
}

int EntertainingSession::clearSession() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithSignedIntReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->clearSession();
}

void EntertainingSession::stopPlayingMusic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->stopPlayingMusic();
}

void EntertainingSession::stopDancing() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->stopDancing();
}

void EntertainingSession::activateAction() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->activateAction();
}

void EntertainingSession::startTickTask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->startTickTask();
}

void EntertainingSession::addEntertainerBuffDuration(CreatureObject* creature, int performanceType, float duration) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((EntertainingSessionImplementation*) _impl)->addEntertainerBuffDuration(creature, performanceType, duration);
}

void EntertainingSession::addEntertainerBuffStrength(CreatureObject* creature, int performanceType, float strength) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((EntertainingSessionImplementation*) _impl)->addEntertainerBuffStrength(creature, performanceType, strength);
}

void EntertainingSession::setEntertainerBuffDuration(CreatureObject* creature, int performanceType, float duration) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((EntertainingSessionImplementation*) _impl)->setEntertainerBuffDuration(creature, performanceType, duration);
}

void EntertainingSession::setEntertainerBuffStrength(CreatureObject* creature, int performanceType, float strength) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((EntertainingSessionImplementation*) _impl)->setEntertainerBuffStrength(creature, performanceType, strength);
}

int EntertainingSession::getEntertainerBuffStrength(CreatureObject* creature, int performanceType) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(creature);
		method.addSignedIntParameter(performanceType);

		return method.executeWithSignedIntReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->getEntertainerBuffStrength(creature, performanceType);
}

int EntertainingSession::getEntertainerBuffDuration(CreatureObject* creature, int performanceType) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(creature);
		method.addSignedIntParameter(performanceType);

		return method.executeWithSignedIntReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->getEntertainerBuffDuration(creature, performanceType);
}

void EntertainingSession::sendEntertainingUpdate(CreatureObject* creature, float entval, const String& performance, unsigned int perfcntr, int instrid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(creature);
		method.addFloatParameter(entval);
		method.addAsciiParameter(performance);
		method.addUnsignedIntParameter(perfcntr);
		method.addSignedIntParameter(instrid);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->sendEntertainingUpdate(creature, entval, performance, perfcntr, instrid);
}

void EntertainingSession::sendEntertainmentUpdate(CreatureObject* creature, unsigned long long entid, const String& mood, bool updateEntValue) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(creature);
		method.addUnsignedLongParameter(entid);
		method.addAsciiParameter(mood);
		method.addBooleanParameter(updateEntValue);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->sendEntertainmentUpdate(creature, entid, mood, updateEntValue);
}

void EntertainingSession::activateEntertainerBuff(CreatureObject* creature, int performanceType) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(creature);
		method.addSignedIntParameter(performanceType);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->activateEntertainerBuff(creature, performanceType);
}

Instrument* EntertainingSession::getInstrument(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(creature);

		return (Instrument*) method.executeWithObjectReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->getInstrument(creature);
}

void EntertainingSession::addWatcher(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->addWatcher(creature);
}

void EntertainingSession::addListener(CreatureObject* listener) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(listener);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->addListener(listener);
}

bool EntertainingSession::isDancing() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithBooleanReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->isDancing();
}

bool EntertainingSession::isPlayingMusic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithBooleanReturn();
	} else
		return ((EntertainingSessionImplementation*) _impl)->isPlayingMusic();
}

void EntertainingSession::removeWatcher(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->removeWatcher(creature);
}

void EntertainingSession::removeListener(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->removeListener(creature);
}

void EntertainingSession::setPerformanceName(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->setPerformanceName(name);
}

void EntertainingSession::setDancing(bool val) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else
		((EntertainingSessionImplementation*) _impl)->setDancing(val);
}

/*
 *	EntertainingSessionImplementation
 */

EntertainingSessionImplementation::EntertainingSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


EntertainingSessionImplementation::~EntertainingSessionImplementation() {
	EntertainingSessionImplementation::finalize();
}


void EntertainingSessionImplementation::_initializeImplementation() {
	_setClassHelper(EntertainingSessionHelper::instance());

	_serializationHelperMethod();
}

void EntertainingSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (EntertainingSession*) stub;
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* EntertainingSessionImplementation::_getStub() {
	return _this;
}

EntertainingSessionImplementation::operator const EntertainingSession*() {
	return _this;
}

void EntertainingSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void EntertainingSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void EntertainingSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void EntertainingSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void EntertainingSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void EntertainingSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void EntertainingSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void EntertainingSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("EntertainingSession");

	addSerializableVariable("entertainer", &entertainer);
	addSerializableVariable("observer", &observer);
	addSerializableVariable("watchers", &watchers);
	addSerializableVariable("listeners", &listeners);
	addSerializableVariable("nextTick", &nextTick);
	addSerializableVariable("performanceName", &performanceName);
	addSerializableVariable("dancing", &dancing);
	addSerializableVariable("playingMusic", &playingMusic);
	addSerializableVariable("flourishXp", &flourishXp);
	addSerializableVariable("healingXp", &healingXp);
	addSerializableVariable("flourishCount", &flourishCount);
}

EntertainingSessionImplementation::EntertainingSessionImplementation(CreatureObject* ent) {
	_initializeImplementation();
	// server/zone/objects/player/EntertainingSession.idl(89):  		entertainer = ent;
	entertainer = ent;
	// server/zone/objects/player/EntertainingSession.idl(91):  		flourishXp = 0;
	flourishXp = 0;
	// server/zone/objects/player/EntertainingSession.idl(92):  		healingXp = 0;
	healingXp = 0;
	// server/zone/objects/player/EntertainingSession.idl(93):  		flourishCount = 0;
	flourishCount = 0;
	// server/zone/objects/player/EntertainingSession.idl(95):  		observer = null;
	observer = NULL;
	// server/zone/objects/player/EntertainingSession.idl(97):  		dancing = false;
	dancing = false;
	// server/zone/objects/player/EntertainingSession.idl(98):  		playingMusic = false;
	playingMusic = false;
	// server/zone/objects/player/EntertainingSession.idl(100):  		watchers.setNoDuplicateInsertPlan();
	(&watchers)->setNoDuplicateInsertPlan();
	// server/zone/objects/player/EntertainingSession.idl(101):  		listeners.setNoDuplicateInsertPlan();
	(&listeners)->setNoDuplicateInsertPlan();
	// server/zone/objects/player/EntertainingSession.idl(103):  		Logger.setLoggingName("EntertainingSession");
	Logger::setLoggingName("EntertainingSession");
	// server/zone/objects/player/EntertainingSession.idl(104):  		Logger.setLogging(false);
	Logger::setLogging(false);
}

void EntertainingSessionImplementation::finalize() {
	// server/zone/objects/player/EntertainingSession.idl(114):  		Logger.info("deleted from ram", true);
	Logger::info("deleted from ram", true);
}

void EntertainingSessionImplementation::addFlourishXp(int xp) {
	// server/zone/objects/player/EntertainingSession.idl(126):  		flourishXp 
	if (flourishCount > 2)	// server/zone/objects/player/EntertainingSession.idl(127):  			return;
	return;
	// server/zone/objects/player/EntertainingSession.idl(129):  = flourishXp + xp;
	flourishXp = flourishXp + xp;
	// server/zone/objects/player/EntertainingSession.idl(131):  		flourishCount 
	if (flourishXp > 2 * xp)	// server/zone/objects/player/EntertainingSession.idl(132):  			flourishXp = 2 * xp;
	flourishXp = 2 * xp;
	// server/zone/objects/player/EntertainingSession.idl(134):  = flourishCount + 1;
	flourishCount = flourishCount + 1;
}

void EntertainingSessionImplementation::addHealingXp(int xp) {
	// server/zone/objects/player/EntertainingSession.idl(138):  		healingXp = healingXp + xp;
	healingXp = healingXp + xp;
}

int EntertainingSessionImplementation::initializeSession() {
	// server/zone/objects/player/EntertainingSession.idl(142):  		return 0;
	return 0;
}

int EntertainingSessionImplementation::cancelSession() {
	// server/zone/objects/player/EntertainingSession.idl(146):  		stopPlayingMusic();
	stopPlayingMusic();
	// server/zone/objects/player/EntertainingSession.idl(147):  		stopDancing();
	stopDancing();
	// server/zone/objects/player/EntertainingSession.idl(149):  		return 0;
	return 0;
}

int EntertainingSessionImplementation::clearSession() {
	// server/zone/objects/player/EntertainingSession.idl(153):  		return 0;
	return 0;
}

bool EntertainingSessionImplementation::isDancing() {
	// server/zone/objects/player/EntertainingSession.idl(188):  		return dancing;
	return dancing;
}

bool EntertainingSessionImplementation::isPlayingMusic() {
	// server/zone/objects/player/EntertainingSession.idl(192):  		return playingMusic;
	return playingMusic;
}

void EntertainingSessionImplementation::removeWatcher(CreatureObject* creature) {
	// server/zone/objects/player/EntertainingSession.idl(196):  		watchers.drop(creature);
	(&watchers)->drop(creature);
}

void EntertainingSessionImplementation::removeListener(CreatureObject* creature) {
	// server/zone/objects/player/EntertainingSession.idl(200):  		listeners.drop(creature);
	(&listeners)->drop(creature);
}

void EntertainingSessionImplementation::setPerformanceName(const String& name) {
	// server/zone/objects/player/EntertainingSession.idl(204):  		performanceName = name;
	performanceName = name;
}

void EntertainingSessionImplementation::setDancing(bool val) {
	// server/zone/objects/player/EntertainingSession.idl(208):  		dancing = val;
	dancing = val;
}

/*
 *	EntertainingSessionAdapter
 */

EntertainingSessionAdapter::EntertainingSessionAdapter(EntertainingSessionImplementation* obj) : FacadeAdapter(obj) {
}

Packet* EntertainingSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		doEntertainerPatronEffects();
		break;
	case 7:
		doPerformanceAction();
		break;
	case 8:
		addEntertainerFlourishBuff();
		break;
	case 9:
		startEntertaining(inv->getAsciiParameter(_param0_startEntertaining__String_String_bool_), inv->getAsciiParameter(_param1_startEntertaining__String_String_bool_), inv->getBooleanParameter());
		break;
	case 10:
		finalize();
		break;
	case 11:
		healWounds((CreatureObject*) inv->getObjectParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 12:
		resp->insertBoolean(isInEntertainingBuilding((CreatureObject*) inv->getObjectParameter()));
		break;
	case 13:
		doFlourish(inv->getSignedIntParameter());
		break;
	case 14:
		resp->insertBoolean(canGiveEntertainBuff());
		break;
	case 15:
		addFlourishXp(inv->getSignedIntParameter());
		break;
	case 16:
		addHealingXp(inv->getSignedIntParameter());
		break;
	case 17:
		resp->insertSignedInt(initializeSession());
		break;
	case 18:
		resp->insertSignedInt(cancelSession());
		break;
	case 19:
		resp->insertSignedInt(clearSession());
		break;
	case 20:
		stopPlayingMusic();
		break;
	case 21:
		stopDancing();
		break;
	case 22:
		activateAction();
		break;
	case 23:
		startTickTask();
		break;
	case 24:
		resp->insertSignedInt(getEntertainerBuffStrength((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 25:
		resp->insertSignedInt(getEntertainerBuffDuration((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 26:
		sendEntertainingUpdate((CreatureObject*) inv->getObjectParameter(), inv->getFloatParameter(), inv->getAsciiParameter(_param2_sendEntertainingUpdate__CreatureObject_float_String_int_int_), inv->getUnsignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 27:
		sendEntertainmentUpdate((CreatureObject*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getAsciiParameter(_param2_sendEntertainmentUpdate__CreatureObject_long_String_bool_), inv->getBooleanParameter());
		break;
	case 28:
		activateEntertainerBuff((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 29:
		resp->insertLong(getInstrument((CreatureObject*) inv->getObjectParameter())->_getObjectID());
		break;
	case 30:
		addWatcher((CreatureObject*) inv->getObjectParameter());
		break;
	case 31:
		addListener((CreatureObject*) inv->getObjectParameter());
		break;
	case 32:
		resp->insertBoolean(isDancing());
		break;
	case 33:
		resp->insertBoolean(isPlayingMusic());
		break;
	case 34:
		removeWatcher((CreatureObject*) inv->getObjectParameter());
		break;
	case 35:
		removeListener((CreatureObject*) inv->getObjectParameter());
		break;
	case 36:
		setPerformanceName(inv->getAsciiParameter(_param0_setPerformanceName__String_));
		break;
	case 37:
		setDancing(inv->getBooleanParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void EntertainingSessionAdapter::doEntertainerPatronEffects() {
	((EntertainingSessionImplementation*) impl)->doEntertainerPatronEffects();
}

void EntertainingSessionAdapter::doPerformanceAction() {
	((EntertainingSessionImplementation*) impl)->doPerformanceAction();
}

void EntertainingSessionAdapter::addEntertainerFlourishBuff() {
	((EntertainingSessionImplementation*) impl)->addEntertainerFlourishBuff();
}

void EntertainingSessionAdapter::startEntertaining(const String& dance, const String& animation, bool isDanceSession) {
	((EntertainingSessionImplementation*) impl)->startEntertaining(dance, animation, isDanceSession);
}

void EntertainingSessionAdapter::finalize() {
	((EntertainingSessionImplementation*) impl)->finalize();
}

void EntertainingSessionAdapter::healWounds(CreatureObject* creature, float woundHeal, float shockHeal) {
	((EntertainingSessionImplementation*) impl)->healWounds(creature, woundHeal, shockHeal);
}

bool EntertainingSessionAdapter::isInEntertainingBuilding(CreatureObject* creature) {
	return ((EntertainingSessionImplementation*) impl)->isInEntertainingBuilding(creature);
}

void EntertainingSessionAdapter::doFlourish(int flourishNumber) {
	((EntertainingSessionImplementation*) impl)->doFlourish(flourishNumber);
}

bool EntertainingSessionAdapter::canGiveEntertainBuff() {
	return ((EntertainingSessionImplementation*) impl)->canGiveEntertainBuff();
}

void EntertainingSessionAdapter::addFlourishXp(int xp) {
	((EntertainingSessionImplementation*) impl)->addFlourishXp(xp);
}

void EntertainingSessionAdapter::addHealingXp(int xp) {
	((EntertainingSessionImplementation*) impl)->addHealingXp(xp);
}

int EntertainingSessionAdapter::initializeSession() {
	return ((EntertainingSessionImplementation*) impl)->initializeSession();
}

int EntertainingSessionAdapter::cancelSession() {
	return ((EntertainingSessionImplementation*) impl)->cancelSession();
}

int EntertainingSessionAdapter::clearSession() {
	return ((EntertainingSessionImplementation*) impl)->clearSession();
}

void EntertainingSessionAdapter::stopPlayingMusic() {
	((EntertainingSessionImplementation*) impl)->stopPlayingMusic();
}

void EntertainingSessionAdapter::stopDancing() {
	((EntertainingSessionImplementation*) impl)->stopDancing();
}

void EntertainingSessionAdapter::activateAction() {
	((EntertainingSessionImplementation*) impl)->activateAction();
}

void EntertainingSessionAdapter::startTickTask() {
	((EntertainingSessionImplementation*) impl)->startTickTask();
}

int EntertainingSessionAdapter::getEntertainerBuffStrength(CreatureObject* creature, int performanceType) {
	return ((EntertainingSessionImplementation*) impl)->getEntertainerBuffStrength(creature, performanceType);
}

int EntertainingSessionAdapter::getEntertainerBuffDuration(CreatureObject* creature, int performanceType) {
	return ((EntertainingSessionImplementation*) impl)->getEntertainerBuffDuration(creature, performanceType);
}

void EntertainingSessionAdapter::sendEntertainingUpdate(CreatureObject* creature, float entval, const String& performance, unsigned int perfcntr, int instrid) {
	((EntertainingSessionImplementation*) impl)->sendEntertainingUpdate(creature, entval, performance, perfcntr, instrid);
}

void EntertainingSessionAdapter::sendEntertainmentUpdate(CreatureObject* creature, unsigned long long entid, const String& mood, bool updateEntValue) {
	((EntertainingSessionImplementation*) impl)->sendEntertainmentUpdate(creature, entid, mood, updateEntValue);
}

void EntertainingSessionAdapter::activateEntertainerBuff(CreatureObject* creature, int performanceType) {
	((EntertainingSessionImplementation*) impl)->activateEntertainerBuff(creature, performanceType);
}

Instrument* EntertainingSessionAdapter::getInstrument(CreatureObject* creature) {
	return ((EntertainingSessionImplementation*) impl)->getInstrument(creature);
}

void EntertainingSessionAdapter::addWatcher(CreatureObject* creature) {
	((EntertainingSessionImplementation*) impl)->addWatcher(creature);
}

void EntertainingSessionAdapter::addListener(CreatureObject* listener) {
	((EntertainingSessionImplementation*) impl)->addListener(listener);
}

bool EntertainingSessionAdapter::isDancing() {
	return ((EntertainingSessionImplementation*) impl)->isDancing();
}

bool EntertainingSessionAdapter::isPlayingMusic() {
	return ((EntertainingSessionImplementation*) impl)->isPlayingMusic();
}

void EntertainingSessionAdapter::removeWatcher(CreatureObject* creature) {
	((EntertainingSessionImplementation*) impl)->removeWatcher(creature);
}

void EntertainingSessionAdapter::removeListener(CreatureObject* creature) {
	((EntertainingSessionImplementation*) impl)->removeListener(creature);
}

void EntertainingSessionAdapter::setPerformanceName(const String& name) {
	((EntertainingSessionImplementation*) impl)->setPerformanceName(name);
}

void EntertainingSessionAdapter::setDancing(bool val) {
	((EntertainingSessionImplementation*) impl)->setDancing(val);
}

/*
 *	EntertainingSessionHelper
 */

EntertainingSessionHelper* EntertainingSessionHelper::staticInitializer = EntertainingSessionHelper::instance();

EntertainingSessionHelper::EntertainingSessionHelper() {
	className = "EntertainingSession";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void EntertainingSessionHelper::finalizeHelper() {
	EntertainingSessionHelper::finalize();
}

DistributedObject* EntertainingSessionHelper::instantiateObject() {
	return new EntertainingSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* EntertainingSessionHelper::instantiateServant() {
	return new EntertainingSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* EntertainingSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new EntertainingSessionAdapter((EntertainingSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

