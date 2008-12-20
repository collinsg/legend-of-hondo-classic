/*
 *	server/zone/ZoneServer.h generated by engine3 IDL compiler 0.55
 */

#ifndef ZONESERVER_H_
#define ZONESERVER_H_

#include "engine/orb/DistributedObjectBroker.h"

class SceneObject;

class UserManager;

class GuildManager;

class PlayerManager;

class CraftingManager;

class ItemManager;

class ResourceManager;

class LootTableManager;

class BazaarManager;

class BankManager;

class MissionManager;

class CreatureManager;

class ChatManager;

class Zone;

#include "../db/ServerDatabase.h"

class ZoneServer : public DistributedObjectStub {
public:
	ZoneServer(int threadcount);

	void start(int port, int conn);

	void stop();

	void startManagers();

	void addObject(SceneObject* obj, bool doLock = true);

	SceneObject* getObject(unsigned long long oid, bool doLock = true);

	SceneObject* removeObject(unsigned long long oid, bool doLock = true);

	SceneObject* removeObject(SceneObject* obj, bool doLock = true);

	bool destroyObject(SceneObject* obj, bool doLock = true);

	SceneObject* getCachedObject(unsigned long long oid, bool doLock = true);

	SceneObject* removeCachedObject(unsigned long long oid, bool doLock = true);

	SceneObject* removeCachedObject(SceneObject* obj, bool doLock = true);

	bool banUser(String& name, String& admin);

	bool kickUser(String& name, String& admin);

	void changeUserCap(int amount = 50);

	void addTotalSentPacket(int count);

	void addTotalResentPacket(int count);

	void lock();

	void unlock();

	void increaseTotalDeletedPlayers();

	void printInfo();

	void fixScheduler();

	ChatManager* getChatManager();

	GuildManager* getGuildManager();

	PlayerManager* getPlayerManager();

	UserManager* getUserManager();

	CraftingManager* getCraftingManager();

	ItemManager* getItemManager();

	ResourceManager* getResourceManager();

	LootTableManager* getLootTableManager();

	BazaarManager* getBazaarManager();

	BankManager* getBankManager();

	MissionManager* getMissionManager();

	CreatureManager* getCreatureManager(int zone);

	Zone* getZone(int index);

	String& getServerName();

	bool isServerLocked();

	bool isServerOnline();

	bool isServerOffline();

	bool isServerLoading();

	int getServerState();

	int getConnectionCount();

	int getTotalPlayers();

	int getMaxPlayers();

	int getDeletedPlayers();

	unsigned long long getStartTimestamp();

	void setXpScale(int scale);

	int getXpScale();

	unsigned long long getNextCreatureID(bool doLock = true);

	unsigned long long getNextID(bool doLock = true);

	unsigned long long getNextCellID(bool doLock = true);

	void setServerState(int state);

	void setServerStateLocked();

	void setServerStateOnline();

protected:
	ZoneServer(DummyConstructorParameter* param);

	virtual ~ZoneServer();

	String _return_getServerName;

	friend class ZoneServerHelper;
};

class ZoneServerImplementation;

class ZoneServerAdapter : public DistributedObjectAdapter {
public:
	ZoneServerAdapter(ZoneServerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void start(int port, int conn);

	void stop();

	void startManagers();

	void addObject(SceneObject* obj, bool doLock);

	SceneObject* getObject(unsigned long long oid, bool doLock);

	SceneObject* removeObject(unsigned long long oid, bool doLock);

	SceneObject* removeObject(SceneObject* obj, bool doLock);

	bool destroyObject(SceneObject* obj, bool doLock);

	SceneObject* getCachedObject(unsigned long long oid, bool doLock);

	SceneObject* removeCachedObject(unsigned long long oid, bool doLock);

	SceneObject* removeCachedObject(SceneObject* obj, bool doLock);

	bool banUser(String& name, String& admin);

	bool kickUser(String& name, String& admin);

	void changeUserCap(int amount);

	void addTotalSentPacket(int count);

	void addTotalResentPacket(int count);

	void lock();

	void unlock();

	void increaseTotalDeletedPlayers();

	void printInfo();

	void fixScheduler();

	ChatManager* getChatManager();

	GuildManager* getGuildManager();

	PlayerManager* getPlayerManager();

	UserManager* getUserManager();

	CraftingManager* getCraftingManager();

	ItemManager* getItemManager();

	ResourceManager* getResourceManager();

	LootTableManager* getLootTableManager();

	BazaarManager* getBazaarManager();

	BankManager* getBankManager();

	MissionManager* getMissionManager();

	CreatureManager* getCreatureManager(int zone);

	Zone* getZone(int index);

	String& getServerName();

	bool isServerLocked();

	bool isServerOnline();

	bool isServerOffline();

	bool isServerLoading();

	int getServerState();

	int getConnectionCount();

	int getTotalPlayers();

	int getMaxPlayers();

	int getDeletedPlayers();

	unsigned long long getStartTimestamp();

	void setXpScale(int scale);

	int getXpScale();

	unsigned long long getNextCreatureID(bool doLock);

	unsigned long long getNextID(bool doLock);

	unsigned long long getNextCellID(bool doLock);

	void setServerState(int state);

	void setServerStateLocked();

	void setServerStateOnline();

protected:
	String _param0_banUser__String_String_;
	String _param1_banUser__String_String_;
	String _param0_kickUser__String_String_;
	String _param1_kickUser__String_String_;
};

class ZoneServerHelper : public DistributedObjectClassHelper, public Singleton<ZoneServerHelper> {
	static ZoneServerHelper* staticInitializer;

public:
	ZoneServerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<ZoneServerHelper>;
};

class ZoneServerServant : public DistributedObjectServant {
public:
	ZoneServer* _this;

public:
	ZoneServerServant();
	virtual ~ZoneServerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*ZONESERVER_H_*/
