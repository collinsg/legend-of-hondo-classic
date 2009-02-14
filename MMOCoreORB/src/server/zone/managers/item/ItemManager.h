/*
 *	server/zone/managers/item/ItemManager.h generated by engine3 IDL compiler 0.55
 */

#ifndef ITEMMANAGER_H_
#define ITEMMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

class ZoneServer;

class Zone;

#include "server/zone/ZoneProcessServerImplementation.h"

class TangibleObject;

class SceneObject;

class Weapon;

class Armor;

class DeedObject;

class BlueFrogVector;

class Player;

class ItemManager : public DistributedObjectStub {
public:
	ItemManager(ZoneServer* server, ZoneProcessServerImplementation* pServer);

	void loadStaticWorldObjects();

	TangibleObject* getPlayerItem(Player* player, long long objectid);

	void loadPlayerItems(Player* player);

	void loadDefaultPlayerItems(Player* player);

	void loadPlayerDatapadItems(Player* player);

	void loadBankItems(Player* player);

	void unloadPlayerItems(Player* player);

	void createPlayerItem(Player* player, TangibleObject* item);

	TangibleObject* clonePlayerObjectTemplate(unsigned long long objectid, TangibleObject* templ);

	TangibleObject* initializeTangibleForCrafting(Player* player, int objecttype, unsigned long long objectid, unsigned long long objectcrc, String& objectn, String& objecttemp, bool equipped);

	void savePlayerItem(Player* player, TangibleObject* item);

	void deletePlayerItem(Player* player, TangibleObject* item, bool notify);

	void transferContainerItem(Player* player, TangibleObject* item, unsigned long long destinationID);

	void loadStructurePlayerItems(Player* player, unsigned long long cellID);

	bool moveItemToDestination(Player* player, TangibleObject* item, SceneObject* destination);

	void giveForageItem(Player* player, int group, int count);

	void showDbStats(Player* player);

	void showDbDeleted(Player* player);

	void purgeDbDeleted(Player* player);

	unsigned long long getNextStaticObjectID();

	BlueFrogVector* getBFItemList();

	BlueFrogVector* getBFProfList(String& group);

	String& getBFProf(String& key);

	void giveBFItemSet(Player* player, String& set);

protected:
	ItemManager(DummyConstructorParameter* param);

	virtual ~ItemManager();

	String _return_getBFProf;

	friend class ItemManagerHelper;
};

class ItemManagerImplementation;

class ItemManagerAdapter : public DistributedObjectAdapter {
public:
	ItemManagerAdapter(ItemManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void loadStaticWorldObjects();

	TangibleObject* getPlayerItem(Player* player, long long objectid);

	void loadPlayerItems(Player* player);

	void loadDefaultPlayerItems(Player* player);

	void loadPlayerDatapadItems(Player* player);

	void loadBankItems(Player* player);

	void unloadPlayerItems(Player* player);

	void createPlayerItem(Player* player, TangibleObject* item);

	TangibleObject* clonePlayerObjectTemplate(unsigned long long objectid, TangibleObject* templ);

	TangibleObject* initializeTangibleForCrafting(Player* player, int objecttype, unsigned long long objectid, unsigned long long objectcrc, String& objectn, String& objecttemp, bool equipped);

	void savePlayerItem(Player* player, TangibleObject* item);

	void deletePlayerItem(Player* player, TangibleObject* item, bool notify);

	void transferContainerItem(Player* player, TangibleObject* item, unsigned long long destinationID);

	void loadStructurePlayerItems(Player* player, unsigned long long cellID);

	bool moveItemToDestination(Player* player, TangibleObject* item, SceneObject* destination);

	void giveForageItem(Player* player, int group, int count);

	void showDbStats(Player* player);

	void showDbDeleted(Player* player);

	void purgeDbDeleted(Player* player);

	unsigned long long getNextStaticObjectID();

	BlueFrogVector* getBFItemList();

	BlueFrogVector* getBFProfList(String& group);

	String& getBFProf(String& key);

	void giveBFItemSet(Player* player, String& set);

protected:
	String _param4_initializeTangibleForCrafting__Player_int_long_long_String_String_bool_;
	String _param5_initializeTangibleForCrafting__Player_int_long_long_String_String_bool_;
	String _param0_getBFProfList__String_;
	String _param0_getBFProf__String_;
	String _param1_giveBFItemSet__Player_String_;
};

class ItemManagerHelper : public DistributedObjectClassHelper, public Singleton<ItemManagerHelper> {
	static ItemManagerHelper* staticInitializer;

public:
	ItemManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<ItemManagerHelper>;
};

class ItemManagerServant : public DistributedObjectServant {
public:
	ItemManager* _this;

public:
	ItemManagerServant();
	virtual ~ItemManagerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*ITEMMANAGER_H_*/
