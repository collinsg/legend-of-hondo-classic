global_imperial_outpost_imperial_small_theater = Lair:new {
	mobiles = {
		{"imperial_second_lieutenant",1},
		{"imperial_private",2},
	},
	spawnLimit = 9,
	buildingsVeryEasy = {"object/building/poi/anywhere_imperial_base_small_1.iff","object/building/poi/lok_imperial_small1.iff","object/building/poi/lok_imperial_small2.iff"},
	buildingsEasy = {"object/building/poi/anywhere_imperial_base_small_1.iff","object/building/poi/lok_imperial_small1.iff","object/building/poi/lok_imperial_small2.iff"},
	buildingsMedium = {"object/building/poi/anywhere_imperial_base_small_1.iff","object/building/poi/lok_imperial_small1.iff","object/building/poi/lok_imperial_small2.iff"},
	buildingsHard = {"object/building/poi/anywhere_imperial_base_small_1.iff","object/building/poi/lok_imperial_small1.iff","object/building/poi/lok_imperial_small2.iff"},
	buildingsVeryHard = {"object/building/poi/anywhere_imperial_base_small_1.iff","object/building/poi/lok_imperial_small1.iff","object/building/poi/lok_imperial_small2.iff"},
	mobType = "npc",
	buildingType = "theater"
}

addLairTemplate("global_imperial_outpost_imperial_small_theater", global_imperial_outpost_imperial_small_theater)
