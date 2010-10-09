male_snorbal_calf = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:male_snorbal_calf",
	socialGroup = "Snorbal",
	pvpFaction = "",
	faction = "",
	level = 22,
	chanceHit = 0.330000,
	damageMin = 190,
	damageMax = 200,
	range = 0,
	baseXp = 1803,
	baseHAM = 5550,
	armor = 0,
	resists = {30,30,-1,0,0,-1,0,-1,-1},
	meatType = "meat_herbivore",
	meatAmount = 500,
	hideType = "hide_leathery",
	hideAmount = 401,
	boneType = "bone_mammal",
	boneAmount = 351,
	milk = 0.000000,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = HERD,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"dizzyattack","dizzyChance=50"},
		{"stunattack","stunChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(male_snorbal_calf, "male_snorbal_calf")
