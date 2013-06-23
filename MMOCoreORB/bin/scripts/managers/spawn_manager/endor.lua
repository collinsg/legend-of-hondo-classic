-- Generated by SWGEmu Spawn Tool v0.12
-- {"regionName", xCenter, yCenter, radius, tier, spawnConstant, "spawnGroup1", [...]}
-- Tier is a bit mask with the following possible values where each hexadecimal position is one possible configuration.
-- That means that it is not possible to have both a world spawn area and imperial spawn area in the same region, but
-- a dynamic rebel spawn area that is also a no build zone is possible.
UNDEFINEDAREA     = 0x0000
WORLDSPAWNAREA    = 0x0001
REBELSPAWNAREA    = 0x0002
IMPERIALSPAWNAREA = 0x0004
NEUTRALSPAWNAREA  = 0x0008
STATICSPAWNAREA   = 0x0010
DYNAMICSPAWNAREA  = 0x0020
LAIRSPAWNAREA     = 0x0040
NOSPAWNAREA       = 0x0100
NOBUILDZONEAREA   = 0x1000

endor_regions = {
	{"an_outpost",0,0,{1,0},UNDEFINEDAREA,1},
        {"awning_with_pillars",278,3829,{1,30},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"central_desert",0,0,{1,0},UNDEFINEDAREA,1},
	{"central_forest",0,0,{1,0},UNDEFINEDAREA,1},
	{"central_peak",0,0,{1,0},UNDEFINEDAREA,1},
	{"death_watch_bunker",-4655,4330,{1,256},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"desert_one",0,0,{1,0},UNDEFINEDAREA,1},
	{"desert_two",0,0,{1,0},UNDEFINEDAREA,1},
	{"dulok_village_1",6066,-2472,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"dulok_village_2",-1206,2963,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"eastern_desert",0,0,{1,0},UNDEFINEDAREA,1},
	{"eastern_mountains",0,0,{1,0},UNDEFINEDAREA,1},
        {"elevated_hut",-1770,-4090,{1,50},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"endor_neutral_outpost",0,0,{1,0},UNDEFINEDAREA,1},
	{"endor_smuggler_outpost",0,0,{1,0},UNDEFINEDAREA,1},
        {"ewok_hut",3879,4211,{1,50},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"ewok_lake_village_1",1453,-3256,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"ewok_lake_village_2",-590,-5054,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"ewok_village_tree_1",83,42,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"ewok_village_tree_2",4540,-2420,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"fersal_hills",0,0,{1,0},UNDEFINEDAREA,1},
	{"forest_five",0,0,{1,0},UNDEFINEDAREA,1},
	{"forest_four",0,0,{1,0},UNDEFINEDAREA,1},
	{"forest_one",0,0,{1,0},UNDEFINEDAREA,1},
	{"forest_six",0,0,{1,0},UNDEFINEDAREA,1},
	{"forest_three",0,0,{1,0},UNDEFINEDAREA,1},
	{"forest_two",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_bordok_nw",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_bordok_sw",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_desert_marauder_ne",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_gorax_sw",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_mantigrue_nw",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_mantigrue_se",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_remmer_nw",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_remmer_se",0,0,{1,0},UNDEFINEDAREA,1},
        {"hot_springs",2372,2182,{1,50},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"hut",-1800,6023,{1,30},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"huts_and_campfire",-1538,-6013,{1,50},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"imperial_ruins",2318,5860,{1,50},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"jiberah_plains_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"jiberah_plains_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"jiberah_plains_3",0,0,{1,0},UNDEFINEDAREA,1},
	{"jiberah_plains_4",0,0,{1,0},UNDEFINEDAREA,1},
	{"jiberah_plains_5",0,0,{1,0},UNDEFINEDAREA,1},
        {"jinda_ritualists_cave",-1727,121,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"korga_cave",2163,3617,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"marauder_mountain_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"marauder_mountain_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"marauder_mountain_3",0,0,{1,0},UNDEFINEDAREA,1},
        {"marauders_stronghold",-4648,-2273,{1,200},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"medium_blurrg_sw",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_bolma_ne",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_bolma_se",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_lantern_bird_ne",0,0,{1,0},UNDEFINEDAREA,1},
	{"mertune_forest_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"mertune_forest_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"mon_teithtim_forest_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"mon_teithtim_forest_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"mountain_four",0,0,{1,0},UNDEFINEDAREA,1},
	{"mountain_one",0,0,{1,0},UNDEFINEDAREA,1},
	{"mountain_three",0,0,{1,0},UNDEFINEDAREA,1},
	{"mountain_two",0,0,{1,0},UNDEFINEDAREA,1},
	{"noragg_place_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"northeast_plains",0,0,{1,0},UNDEFINEDAREA,1},
	{"northern_mountains",0,0,{1,0},UNDEFINEDAREA,1},
	{"northern_peak",0,0,{1,0},UNDEFINEDAREA,1},
	{"northwest_plains",0,0,{1,0},UNDEFINEDAREA,1},
	{"nub_shanda",0,0,{1,0},UNDEFINEDAREA,1},
	{"oniantae_hills_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"oniantae_hills_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"oniantae_hills_3",0,0,{1,0},UNDEFINEDAREA,1},
        {"orphaned_marauder_cave",-7021,653,{1,150},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"peak_four",0,0,{1,0},UNDEFINEDAREA,1},
	{"peak_one",0,0,{1,0},UNDEFINEDAREA,1},
	{"peak_three",0,0,{1,0},UNDEFINEDAREA,1},
	{"peak_two",0,0,{1,0},UNDEFINEDAREA,1},
	{"plains_four",0,0,{1,0},UNDEFINEDAREA,1},
	{"plains_one",0,0,{1,0},UNDEFINEDAREA,1},
	{"plains_three",0,0,{1,0},UNDEFINEDAREA,1},
	{"plains_two",0,0,{1,0},UNDEFINEDAREA,1},
        {"pole_with_boxes",-3653,6125,{1,30},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"salma_desert_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"salma_desert_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"salma_desert_3",0,0,{1,0},UNDEFINEDAREA,1},
	{"salma_desert_4",0,0,{1,0},UNDEFINEDAREA,1},
	{"salma_desert_5",0,0,{1,0},UNDEFINEDAREA,1},
        {"skeleton_hut",267,-1444,{1,30},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"southeast_forest",0,0,{1,0},UNDEFINEDAREA,1},
	{"southeast_peak",0,0,{1,0},UNDEFINEDAREA,1},
	{"southwest_peak",0,0,{1,0},UNDEFINEDAREA,1},
        {"stone_village",3924,5787,{1,75},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"three_huts",2047,4316,{1,50},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"tree_stand",-1876,-1474,{1,50},STATICSPAWNAREA + NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"western_mountains",0,0,{1,0},UNDEFINEDAREA,1},
	{"world_factional_imperial",0,0,{1,-1},LAIRSPAWNAREA + IMPERIALSPAWNAREA,1,"factional_imperial"},
	{"world_factional_neutral",0,0,{1,-1},LAIRSPAWNAREA + NEUTRALSPAWNAREA,1,"factional_neutral"},
	{"world_factional_rebel",0,0,{1,-1},LAIRSPAWNAREA + REBELSPAWNAREA,1,"factional_rebel"},
	{"world_spawner",0,0,{1,-1},LAIRSPAWNAREA + WORLDSPAWNAREA,1,"endor_world_creatures"},
	{"yawari_cliffs_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_10",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_11",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_12",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_13",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_14",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_15",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_16",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_17",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_18",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_3",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_4",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_5",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_6",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_7",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_8",0,0,{1,0},UNDEFINEDAREA,1},
	{"yawari_cliffs_9",0,0,{1,0},UNDEFINEDAREA,1},
}

endor_static_spawns = {
	{"businessman",60,3175.37,24,-3490.78,156.98,0, "calm", ""},
	{"businessman",60,3190.35,24,-3434.93,256.64,0, "calm", ""},
	{"businessman",60,3239.41,24,-3432.75,321.916,0, "calm", ""},
	{"businessman",60,3270.48,24,-3452.45,289.69,0, "calm", ""},
	{"businessman",60,3246.59,24,-3500.57,28.4927,0, "calm", ""},
	{"businessman",60,3209.65,24,-3493.64,217.211,0, "calm", ""},
	{"businessman",60,-899.977,78,1548.09,107.809,0, "calm", ""},
	{"cll8_binary_load_lifter",60,3250.85,24,-3463.83,330.752,0, "calm", ""},
	{"commando",60,3196.77,24,-3483.16,359.892,0, "calm", ""},
	{"commando",60,3267.17,24,-3457.15,359.089,0, "calm", ""},
	{"commoner",60,3176.73,24,-3512.02,187.645,0, "calm", ""},
	{"commoner",60,3188.73,24,-3482.54,277.835,0, "calm", ""},
	{"commoner",60,3186.49,24,-3459.94,189.74,0, "calm", ""},
	{"commoner",60,3171.1,24,-3504.6,196.748,0, "calm", ""},
	{"commoner",60,3246.28,24,-3492.11,322.758,0, "calm", ""},
	{"commoner",60,3212.71,24.5,-3452.25,41.6667,0, "calm", ""},
	{"commoner",60,3272.55,24,-3438.99,185.321,0, "calm", ""},
	{"commoner",60,3255.57,24,-3483.66,195.741,0, "calm", ""},
	{"commoner",60,3271.4,24,-3502.14,322.22,0, "calm", ""},
	{"commoner",60,3201.34,24,-3509.29,348.067,0, "calm", ""},
	{"commoner",60,3221.86,24,-3473.87,251.839,0, "calm", ""},
	{"commoner",60,-828.009,76,1573.28,320.402,0, "calm", ""},
	{"commoner",60,-838.625,76,1574.97,333.27,0, "calm", ""},
	{"commoner",60,-864.293,79.5001,1598.78,184.686,0, "calm", ""},
	{"commoner",60,-841.483,79.5144,1602.34,240.991,0, "calm", ""},
	{"commoner",60,-851.058,80.0739,1555.56,238.812,0, "calm", ""},
	{"commoner",60,-875.462,80.0597,1571.89,84.1865,0, "calm", ""},
	{"commoner",60,-880.276,76,1604.61,30.4167,0, "calm", ""},
	{"commoner",60,-880.194,76,1624.44,273.171,0, "calm", ""},
	{"commoner",60,-880.718,76,1638.25,11.1628,0, "calm", ""},
	{"commoner",60,-896.026,80,1621.19,243.324,0, "calm", ""},
	{"criminal",60,4.60144,0.125266,3.19878,160.261,3605972, "calm", ""},
	{"kilnstrider",60,-3.44448,0.624999,-6.82681,331.362,9925367, "npc_imperial", ""},
	{"mercenary",60,3267.14,24,-3457.08,356.74,0, "calm", ""},
	{"mercenary",60,3267.15,24,-3457.11,357.849,0, "calm", ""},
	{"mercenary",60,3267.14,24,-3457.08,357.033,0, "calm", ""},
	{"noble",60,3228.48,24,-3510.48,15.5858,0, "calm", ""},
	{"noble",60,-829.243,76,1567.61,95.886,0, "calm", ""},
	{"r3",60,3250.85,24,-3464.83,263.893,0, "calm", "R3-E5"},
	{"r3",60,-950.705,73,1542.69,331.775,0, "calm", "R3-R1"},
	{"r5",60,3249.85,24,-3464.83,180.771,0, "calm", "R5-J0"},
	{"scientist",60,-874.656,80,1564.76,108.353,0, "calm", ""},
	{"scientist",60,-845.301,79.5,1599.49,197.393,0, "calm", ""},
	{"smuggler",60,-889.786,76,1591.32,182.753,0, "calm", ""},
	{"smuggler",60,-890.91,76,1591.38,253.162,0, "calm", ""},
	{"smuggler",60,-889.732,76,1592.45,319.914,0, "calm", ""},
}

endor_badges = {
	{"badge_dulok_villlage",6051,-2477,30,88},
	{"badge_ewok_tree_villlage",4661,-2425,30,86},
	{"badge_imp_outpost",-4628,-2273,30,89},
	{"badge_lake_villlage",1454,-3272,30,87},
}
