/*
 *	server/zone/objects/tangible/terminal/camp/CampTerminal.cpp generated by engine3 IDL compiler 0.55
 */

#include "CampTerminal.h"

#include "CampTerminalImplementation.h"

#include "../../campkit/campsite/CampSite.h"

#include "../Terminal.h"

#include "../../../player/Player.h"

/*
 *	CampTerminalStub
 */

CampTerminal::CampTerminal(CampSite* camp, unsigned long long objid, float x, float z, float y) : Terminal(DummyConstructorParameter::instance()) {
	_impl = new CampTerminalImplementation(camp, objid, x, z, y);
	_impl->_setStub(this);
}

CampTerminal::CampTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

CampTerminal::~CampTerminal() {
}

int CampTerminal::useObject(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((CampTerminalImplementation*) _impl)->useObject(player);
}

CampSite* CampTerminal::getCampSite() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return (CampSite*) method.executeWithObjectReturn();
	} else
		return ((CampTerminalImplementation*) _impl)->getCampSite();
}

/*
 *	CampTerminalAdapter
 */

CampTerminalAdapter::CampTerminalAdapter(CampTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* CampTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	case 7:
		resp->insertLong(getCampSite()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

int CampTerminalAdapter::useObject(Player* player) {
	return ((CampTerminalImplementation*) impl)->useObject(player);
}

CampSite* CampTerminalAdapter::getCampSite() {
	return ((CampTerminalImplementation*) impl)->getCampSite();
}

/*
 *	CampTerminalHelper
 */

CampTerminalHelper* CampTerminalHelper::staticInitializer = CampTerminalHelper::instance();

CampTerminalHelper::CampTerminalHelper() {
	className = "CampTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CampTerminalHelper::finalizeHelper() {
	CampTerminalHelper::finalize();
}

DistributedObject* CampTerminalHelper::instantiateObject() {
	return new CampTerminal(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CampTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CampTerminalAdapter((CampTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CampTerminalServant
 */

CampTerminalServant::CampTerminalServant(unsigned int objCRC, unsigned long long objid, const UnicodeString& n, const String& tempn, float x, float z, float y, int TerminalType) : TerminalImplementation(objCRC, objid, n, tempn, x, z, y, TerminalType) {
	_classHelper = CampTerminalHelper::instance();
}

CampTerminalServant::~CampTerminalServant() {
}

void CampTerminalServant::_setStub(DistributedObjectStub* stub) {
	_this = (CampTerminal*) stub;
	TerminalServant::_setStub(stub);
}

DistributedObjectStub* CampTerminalServant::_getStub() {
	return _this;
}

