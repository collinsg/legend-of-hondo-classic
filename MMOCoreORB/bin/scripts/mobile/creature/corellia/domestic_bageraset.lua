domestic_bageraset = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:domestic_bageraset",
	socialGroup = "self",
	pvpFaction = "",
	faction = "",
	level = 8,
	chanceHit = 0.270000,
	damageMin = 55,
	damageMax = 65,
	range = 0,
	baseXp = 187,
	baseHAM = 750,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "meat_herbivore",
	meatAmount = 240,
	hideType = "hide_leathery",
	hideAmount = 145,
	boneType = "bone_mammal",
	boneAmount = 104,
	milk = 0.000000,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = NONE,
	diet = HERBIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"stunattack","stunChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(domestic_bageraset, "domestic_bageraset")
