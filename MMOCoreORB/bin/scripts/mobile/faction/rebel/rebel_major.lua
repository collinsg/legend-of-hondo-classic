rebel_major = Creature:new {
	objectName = "@mob/creature_names:rebel_major",
	socialGroup = "rebel",
	pvpFaction = "rebel",
	faction = "rebel",
	level = 22,
	chanceHit = 0.35,
	damageMin = 210,
	damageMax = 220,
	baseXp = 2219,
	baseHAM = 5900,
	baseHAMmax = 7200,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {
		"object/mobile/dressed_rebel_major_human_female_01.iff",
		"object/mobile/dressed_rebel_major_human_male_01.iff",
		"object/mobile/dressed_rebel_major_moncal_male_01.iff",
		"object/mobile/dressed_rebel_major_twilek_male_01.iff",
		"object/mobile/dressed_rebel_major_zabrak_female_01.iff",
		"object/mobile/dressed_rebel_major_zabrak_male_01.iff"},
	lootGroups = {
		{
			groups = {
				{group = "color_crystals", chance = 200000},
				{group = "junk", chance = 3600000},
				{group = "rifles", chance = 2000000},
				{group = "pistols", chance = 2000000},
				{group = "clothing_attachments", chance = 1100000},
				{group = "armor_attachments", chance = 1100000}
			},
			lootChance = 4000000
		}			
	},
	weapons = {"rebel_weapons_heavy"},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(rebel_major, "rebel_major")