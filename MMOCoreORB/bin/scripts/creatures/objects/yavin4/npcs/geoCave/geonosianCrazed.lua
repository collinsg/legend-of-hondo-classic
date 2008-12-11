--Copyright (C) 2008 <SWGEmu>


--This File is part of Core3.

--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.

--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.

--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.

--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.

--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 
--which carries forward this exception.
geonosianCrazed = Creature:new {
	objectName = "geonosianCrazed",  -- Lua Object Name
	creatureType = "NPC",
	gender = "",

	speciesName = "geonosian_crazed_guard",
	stfName = "mob/creature_names",
	objectCRC = 3023268625, 
	socialGroup = "geo",
	level = 75,

	combatFlags = ATTACKABLE_FLAG + ENEMY_FLAG + AGGRESSIVE_FLAG,

	healthMax = 14000,
	healthMin = 12000,
	strength = 3000,
	constitution = 3000,

	actionMax = 14000,
	actionMin = 12000,
	quickness = 3000,
	stamina = 3000,

	mindMax = 14000,
	mindMin = 12000,
	focus = 3000,
	willpower = 3000,

	height = 1, -- Size of creature
	armor = 1, -- 0 = None; 1 = Light; 2 = Medium; 3 = Heavy
	kinetic = 25,
	energy = 35,
	electricity = 25,
	stun = 0,
	blast = -1,
	heat = 65,
	cold = 25,
	acid = -1,
	lightsaber = 0,

	accuracy = 320,

	healer = 0,

	pack = 1,
	herd = 0,
	stalker = 0,
	killer = 1,
	aggressive = 1,
	invincible = 0, 

	meleeDefense = 1,  
	rangedDefense = 1,

	attackCreatureOnSight = "", -- Enter socialGroups 

	weapon = "object/weapon/creature/shared_creature_default_weapon.iff", -- File path to weapon -> object\xxx\xxx\xx
	weaponName = "Crazed Geonosian", -- Name ex. 'a Vibrolance'
	weaponTemp = "creature_default_weapon", -- Weapon Template ex. 'lance_vibrolance'
	weaponClass = "UnarmedMeleeWeapon", -- Weapon Class ex. 'PolearmMeleeWeapon'
	weaponEquipped = 1,
	weaponMinDamage = 200,
	weaponMaxDamage = 500,
	weaponAttackSpeed = 1,
	weaponDamageType = "KINETIC", -- ELECTRICITY, KINETIC, etc
	weaponArmorPiercing = "LIGHT", -- LIGHT, NONE, MEDIUM, HEAVY

	alternateWeapon = "", -- File path to weapon -> object\xxx\xxx\xx
	alternateWeaponName = "", -- Name ex. 'a Vibrolance'
	alternateWeaponTemp = "", -- Weapon Template ex. 'lance_vibrolance'
	alternateWeaponClass = "", -- Weapon Class ex. 'PolearmMeleeWeapon'
	alternateWeaponEquipped = 0,
	alternateWeaponMinDamage = 0,
	alternateWeaponMaxDamage = 0,
	alternateWeaponAttackSpeed = 0,
	alternateWeaponDamageType = "", -- ELECTRICITY, KINETIC, etc
	alternateWeaponArmorPiercing = "", -- LIGHT, NONE, MEDIUM, HEAVY

	internalNPCDamageModifier = 0.3, -- Damage Modifier to other NPC's

	lootGroup = "0,1,80", --Group it belongs to for loot

	tame = 0,  -- Likely hood to be tamed

	milk = 0,

	boneType = "",
	boneMax = 0,

	hideType = "",
	hideMax = 0,

	meatType = "",
	meatMax = 0,

	skills = { "geonosianCrazedAttack1", "geonosianCrazedAttack2", "geonosianCrazedAttack3", "geonosianCrazedAttack4"  },
	respawnTimer = 180,

	behaviorScript = "", -- Link to the behavior script for this object
}

Creatures:addCreature(geonosianCrazed, 3023268625) --  Add to Global Table
