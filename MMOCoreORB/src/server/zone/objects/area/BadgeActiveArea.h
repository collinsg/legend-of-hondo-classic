/*
 *	server/zone/objects/area/BadgeActiveArea.h generated by engine3 IDL compiler 0.60
 */

#ifndef BADGEACTIVEAREA_H_
#define BADGEACTIVEAREA_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#include "server/zone/objects/area/ActiveArea.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class BadgeActiveArea : public ActiveArea {
public:
	BadgeActiveArea();

	void notifyEnter(SceneObject* player);

	void setBadge(unsigned int a);

	unsigned int getBadge();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	BadgeActiveArea(DummyConstructorParameter* param);

	virtual ~BadgeActiveArea();

	friend class BadgeActiveAreaHelper;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace area {

class BadgeActiveAreaImplementation : public ActiveAreaImplementation {
public:
	unsigned int areaBadge;

	BadgeActiveAreaImplementation();

	BadgeActiveAreaImplementation(DummyConstructorParameter* param);

	void notifyEnter(SceneObject* player);

	void setBadge(unsigned int a);

	unsigned int getBadge();

	BadgeActiveArea* _this;

	operator const BadgeActiveArea*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~BadgeActiveAreaImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class BadgeActiveArea;
};

class BadgeActiveAreaAdapter : public ActiveAreaAdapter {
public:
	BadgeActiveAreaAdapter(BadgeActiveAreaImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyEnter(SceneObject* player);

	void setBadge(unsigned int a);

	unsigned int getBadge();

};

class BadgeActiveAreaHelper : public DistributedObjectClassHelper, public Singleton<BadgeActiveAreaHelper> {
	static BadgeActiveAreaHelper* staticInitializer;

public:
	BadgeActiveAreaHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BadgeActiveAreaHelper>;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#endif /*BADGEACTIVEAREA_H_*/
