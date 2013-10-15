/*
 *	server/zone/objects/creature/junkdealer/JunkdealerCreature.h generated by engine3 IDL compiler 0.60
 */

#ifndef JUNKDEALERCREATURE_H_
#define JUNKDEALERCREATURE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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

#include "server/zone/objects/creature/variables/Skill.h"

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
namespace junkdealer {

class JunkdealerCreature : public CreatureObject {
public:
	static const int BLUERUG = 0xFC9F6877;

	static const int ORANGERUG = 0xEF7647E0;

	static const int SCULPTURE = 0x5000DA81;

	static const int TABLE = 0x4674A1B6;

	static const int GONG = 0xB26210DB;

	static const int JUNKCONVGENERIC = 1;

	static const int JUNKCONVARMS = 2;

	static const int JUNKCONVFINARY = 3;

	static const int JUNKCONVDENDERRORI = 4;

	static const int JUNKCONVDENDERTHEED = 5;

	static const int JUNKCONVLILABORVO = 6;

	static const int JUNKCONVMALIKVISTAL = 7;

	static const int JUNKCONVNADOWATTOS = 8;

	static const int JUNKCONVNATHANTAIKE = 9;

	static const int JUNKCONVOLLOBOJABBAS = 10;

	static const int JUNKCONVQUICHDANTOOINE = 11;

	static const int JUNKCONVREGGINYM = 12;

	static const int JUNKCONVSHEANILAKE = 13;

	static const int JUNKCONVSNEGVALARIAN = 14;

	static const int JUNKCONVJAWAGENERIC = 15;

	static const int JUNKCONVJAWAFINARY = 16;

	static const int JUNKCONVJAWAARMS = 17;

	static const int JUNKCONVJAWATUSKEN = 18;

	JunkdealerCreature();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void activateRecovery();

	/**
	 * Sends the initial trainer NPC blurb.
	 * \param player The player to send the conversation to.
	 */
	void sendInitialMessage(CreatureObject* player);

	/**
	 * Sends the initial trainer NPC options.
	 * \param player The player to send the conversation to.
	 */
	void sendInitialChoices(CreatureObject* player);

	/**
	 * Sends the intial message to start the
	 * training conversation. Checks for
	 * qualificactions.
	 * \param player The player to send the conversation to (in SceneObject form).
	 */
	void sendConversationStartTo(SceneObject* obj);

	/**
	 * Handles the options that the player has selected
	 * and sets the last conversation strings to be used
	 * to determine how to parse the option selected.
	 * \param option The numerical selection the player has made (0indexed).
	 * \param obj The player to send the conversation to (in SceneObject form).
	 */
	void selectConversationOption(int option, SceneObject* obj);

	String getConversationString(int dealerType);

	String getLocation();

	void setLocation(const String& loc);

	bool isAttackableBy(CreatureObject* object);

	void createSellJunkLootSelection(CreatureObject* player);

	bool canInventoryItemBeSoldAsJunk(TangibleObject* lootItem, int dealerType);

	void setJunkDealerBuyerType(int jdBuyerType);

	int getJunkDealerBuyerType();

	void setJunkDealerConversationType(int jdConvoType);

	int getJunkDealerConversationType();

	bool isJunkDealer();

	void sendConversationTerminate(CreatureObject* player, const String& stfFile, const String& convTerminateMsg);

	void sendConversationContinue(CreatureObject* player, const String& stfFile, const String& convMsg, const String& convOption1, const String& convOption2);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	JunkdealerCreature(DummyConstructorParameter* param);

	virtual ~JunkdealerCreature();

	friend class JunkdealerCreatureHelper;
};

} // namespace junkdealer
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::junkdealer;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace junkdealer {

class JunkdealerCreatureImplementation : public CreatureObjectImplementation {
protected:
	String location;

public:
	static const int BLUERUG = 0xFC9F6877;

	static const int ORANGERUG = 0xEF7647E0;

	static const int SCULPTURE = 0x5000DA81;

	static const int TABLE = 0x4674A1B6;

	static const int GONG = 0xB26210DB;

	static const int JUNKCONVGENERIC = 1;

	static const int JUNKCONVARMS = 2;

	static const int JUNKCONVFINARY = 3;

	static const int JUNKCONVDENDERRORI = 4;

	static const int JUNKCONVDENDERTHEED = 5;

	static const int JUNKCONVLILABORVO = 6;

	static const int JUNKCONVMALIKVISTAL = 7;

	static const int JUNKCONVNADOWATTOS = 8;

	static const int JUNKCONVNATHANTAIKE = 9;

	static const int JUNKCONVOLLOBOJABBAS = 10;

	static const int JUNKCONVQUICHDANTOOINE = 11;

	static const int JUNKCONVREGGINYM = 12;

	static const int JUNKCONVSHEANILAKE = 13;

	static const int JUNKCONVSNEGVALARIAN = 14;

	static const int JUNKCONVJAWAGENERIC = 15;

	static const int JUNKCONVJAWAFINARY = 16;

	static const int JUNKCONVJAWAARMS = 17;

	static const int JUNKCONVJAWATUSKEN = 18;

protected:
	int junkDealerBuyerType;

	int junkDealerConversationType;

public:
	JunkdealerCreatureImplementation();

	JunkdealerCreatureImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void activateRecovery();

	/**
	 * Sends the initial trainer NPC blurb.
	 * \param player The player to send the conversation to.
	 */
	void sendInitialMessage(CreatureObject* player);

	/**
	 * Sends the initial trainer NPC options.
	 * \param player The player to send the conversation to.
	 */
	void sendInitialChoices(CreatureObject* player);

	/**
	 * Sends the intial message to start the
	 * training conversation. Checks for
	 * qualificactions.
	 * \param player The player to send the conversation to (in SceneObject form).
	 */
	void sendConversationStartTo(SceneObject* obj);

	/**
	 * Handles the options that the player has selected
	 * and sets the last conversation strings to be used
	 * to determine how to parse the option selected.
	 * \param option The numerical selection the player has made (0indexed).
	 * \param obj The player to send the conversation to (in SceneObject form).
	 */
	void selectConversationOption(int option, SceneObject* obj);

	String getConversationString(int dealerType);

	String getLocation();

	void setLocation(const String& loc);

	bool isAttackableBy(CreatureObject* object);

	void createSellJunkLootSelection(CreatureObject* player);

	bool canInventoryItemBeSoldAsJunk(TangibleObject* lootItem, int dealerType);

	void setJunkDealerBuyerType(int jdBuyerType);

	virtual int getJunkDealerBuyerType();

	void setJunkDealerConversationType(int jdConvoType);

	virtual int getJunkDealerConversationType();

	bool isJunkDealer();

	void sendConversationTerminate(CreatureObject* player, const String& stfFile, const String& convTerminateMsg);

	void sendConversationContinue(CreatureObject* player, const String& stfFile, const String& convMsg, const String& convOption1, const String& convOption2);

	WeakReference<JunkdealerCreature*> _this;

	operator const JunkdealerCreature*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~JunkdealerCreatureImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class JunkdealerCreature;
};

class JunkdealerCreatureAdapter : public CreatureObjectAdapter {
public:
	JunkdealerCreatureAdapter(JunkdealerCreature* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activateRecovery();

	void sendInitialMessage(CreatureObject* player);

	void sendInitialChoices(CreatureObject* player);

	void sendConversationStartTo(SceneObject* obj);

	void selectConversationOption(int option, SceneObject* obj);

	String getConversationString(int dealerType);

	String getLocation();

	void setLocation(const String& loc);

	bool isAttackableBy(CreatureObject* object);

	void createSellJunkLootSelection(CreatureObject* player);

	bool canInventoryItemBeSoldAsJunk(TangibleObject* lootItem, int dealerType);

	void setJunkDealerBuyerType(int jdBuyerType);

	int getJunkDealerBuyerType();

	void setJunkDealerConversationType(int jdConvoType);

	int getJunkDealerConversationType();

	bool isJunkDealer();

	void sendConversationTerminate(CreatureObject* player, const String& stfFile, const String& convTerminateMsg);

	void sendConversationContinue(CreatureObject* player, const String& stfFile, const String& convMsg, const String& convOption1, const String& convOption2);

};

class JunkdealerCreatureHelper : public DistributedObjectClassHelper, public Singleton<JunkdealerCreatureHelper> {
	static JunkdealerCreatureHelper* staticInitializer;

public:
	JunkdealerCreatureHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<JunkdealerCreatureHelper>;
};

} // namespace junkdealer
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::junkdealer;

#endif /*JUNKDEALERCREATURE_H_*/
