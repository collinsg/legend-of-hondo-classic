/*
 *	server/zone/objects/creature/NonPlayerCreatureObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef NONPLAYERCREATUREOBJECT_H_
#define NONPLAYERCREATUREOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/core/ManagedObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/lang/Time.h"

#include "system/util/SortedVector.h"

#include "server/zone/objects/creature/CreatureObject.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class NonPlayerCreatureObject : public CreatureObject {
public:
	NonPlayerCreatureObject();

	bool isAttackableBy(CreatureObject* object);

protected:
	NonPlayerCreatureObject(DummyConstructorParameter* param);

	virtual ~NonPlayerCreatureObject();

	friend class NonPlayerCreatureObjectHelper;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class NonPlayerCreatureObjectImplementation : public CreatureObjectImplementation {

public:
	NonPlayerCreatureObjectImplementation();

	NonPlayerCreatureObjectImplementation(DummyConstructorParameter* param);

	bool isAttackableBy(CreatureObject* object);

	NonPlayerCreatureObject* _this;

	operator const NonPlayerCreatureObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~NonPlayerCreatureObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class NonPlayerCreatureObject;
};

class NonPlayerCreatureObjectAdapter : public CreatureObjectAdapter {
public:
	NonPlayerCreatureObjectAdapter(NonPlayerCreatureObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool isAttackableBy(CreatureObject* object);

};

class NonPlayerCreatureObjectHelper : public DistributedObjectClassHelper, public Singleton<NonPlayerCreatureObjectHelper> {
	static NonPlayerCreatureObjectHelper* staticInitializer;

public:
	NonPlayerCreatureObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<NonPlayerCreatureObjectHelper>;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#endif /*NONPLAYERCREATUREOBJECT_H_*/
