afarathu_brute = Creature:new {
	objectName = "@mob/creature_names:afarathu_cult_brute",
	socialGroup = "Afarathu",
	pvpFaction = "Afarathu",
	faction = "afarathu",
	level = 11,
	chanceHit = 0.28,
	damageMin = 90,
	damageMax = 110,
	baseXp = 514,
	baseHAM = 810,
	baseHAMmax = 990,
	armor = 0,
	resists = {10,5,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_selonian_m_01.iff",
		"object/mobile/dressed_selonian_m_02.iff",
		"object/mobile/dressed_selonian_m_03.iff",
		"object/mobile/dressed_selonian_m_04.iff",
		"object/mobile/dressed_selonian_m_05.iff",
		"object/mobile/dressed_selonian_m_06.iff",
		"object/mobile/dressed_selonian_m_07.iff",
		"object/mobile/dressed_selonian_m_08.iff",
		"object/mobile/dressed_selonian_m_09.iff",
		"object/mobile/dressed_selonian_m_10.iff",
		"object/mobile/dressed_selonian_m_11.iff",
		"object/mobile/dressed_selonian_m_12.iff"},
	lootGroups = {
      	{
			groups = {
				{group = "junk", chance = 6000000},
				{group = "loot_kits", chance = 3500000},
				{group = "tailor_components", chance = 500000}
			},
			lootChance = 4500000
		}
	},
	weapons = {"pirate_weapons_medium"},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(afarathu_brute, "afarathu_brute")
