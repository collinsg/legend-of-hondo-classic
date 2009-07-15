/*
 *	server/zone/Zone.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONE_H_
#define ZONE_H_

#include "engine/orb/DistributedObjectBroker.h"

namespace server {
namespace zone {

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/managers/planet/HeightMap.h"

#include "engine/util/QuadTree.h"

#include "engine/sched/ScheduleManager.h"

#include "system/lang/Time.h"

#include "engine/sched/ScheduleManager.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {

class Zone : public ManagedObject {
public:
	Zone(ZoneServer* zserv, ZoneProcessServerImplementation* processor, int zoneid);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	int getZoneID();

	ZoneServer* getZoneServer();

	unsigned long long getGalacticTime();

	unsigned int getWeatherID();

	void setWeatherID(unsigned int value);

	void changeWeatherID(int value);

	bool isWeatherEnabled();

	void setWeatherEnabled(bool value);

	void setWeatherWindX(float value);

	void setWeatherWindY(float value);

	float getWeatherWindX();

	float getWeatherWindY();

protected:
	Zone(DummyConstructorParameter* param);

	virtual ~Zone();

	friend class ZoneHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneImplementation : public ManagedObjectImplementation, public QuadTree {
	int zoneID;

	ZoneProcessServerImplementation* processor;

	ScheduleManager* scheduler;

	ZoneServer* server;

	Time* galacticTime;

	HeightMap* heightMap;

	float weatherWindX;

	float weatherWindY;

	unsigned int weatherID;

	bool weatherEnabled;

public:
	ZoneImplementation(ZoneServer* zserv, ZoneProcessServerImplementation* processor, int zoneid);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	int getZoneID();

	ZoneServer* getZoneServer();

	unsigned long long getGalacticTime();

	unsigned int getWeatherID();

	void setWeatherID(unsigned int value);

	void changeWeatherID(int value);

	bool isWeatherEnabled();

	void setWeatherEnabled(bool value);

	void setWeatherWindX(float value);

	void setWeatherWindY(float value);

	float getWeatherWindX();

	float getWeatherWindY();

	Zone* _this;

protected:
	virtual ~ZoneImplementation();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

	friend class Zone;
};

class ZoneAdapter : public ManagedObjectAdapter {
public:
	ZoneAdapter(ZoneImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	int getZoneID();

	ZoneServer* getZoneServer();

	unsigned long long getGalacticTime();

	unsigned int getWeatherID();

	void setWeatherID(unsigned int value);

	void changeWeatherID(int value);

	bool isWeatherEnabled();

	void setWeatherEnabled(bool value);

	void setWeatherWindX(float value);

	void setWeatherWindY(float value);

	float getWeatherWindX();

	float getWeatherWindY();

};

class ZoneHelper : public DistributedObjectClassHelper, public Singleton<ZoneHelper> {
	static ZoneHelper* staticInitializer;

public:
	ZoneHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONE_H_*/
