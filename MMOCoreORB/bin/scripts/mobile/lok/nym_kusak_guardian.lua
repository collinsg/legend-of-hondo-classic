nym_kusak_guardian = Creature:new {
	objectName = "@mob/creature_names:nym_kusak_guardian",
	socialGroup = "nym",
	faction = "nym",
	level = 29,
	chanceHit = 0.37,
	damageMin = 270,
	damageMax = 280,
	baseXp = 2914,
	baseHAM = 8200,
	baseHAMmax = 10000,
	armor = 0,
	resists = {135,15,15,-1,-1,160,160,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = PACK + STALKER,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/kusak.iff"},
	lootGroups = {		{			groups = {				{group = "junk", chance = 10000000},			}		}	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"dizzyattack",""},
		{"stunattack",""}
	}
}

CreatureTemplates:addCreatureTemplate(nym_kusak_guardian, "nym_kusak_guardian")
