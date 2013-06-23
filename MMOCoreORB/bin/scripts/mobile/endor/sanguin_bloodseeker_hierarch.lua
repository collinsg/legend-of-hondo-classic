sanguin_bloodseeker_hierarch = Creature:new {
	objectName = "@mob/creature_names:bloodseeker_mite_sanguine_hierarch",
	socialGroup = "bloodseeker",
	pvpFaction = "",
	faction = "",
	level = 23,
	chanceHit = 0.35,
	damageMin = 230,
	damageMax = 240,
	baseXp = 2443,
	baseHAM = 5000,
	baseHAMmax = 6100,
	armor = 0,
	resists = {15,15,0,20,0,20,20,0,-1},
	meatType = "meat_insect",
	meatAmount = 30,
	hideType = "hide_scaley",
	hideAmount = 10,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/bloodseeker_mite_hue.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(sanguin_bloodseeker_hierarch, "sanguin_bloodseeker_hierarch")
