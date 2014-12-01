corvetteKlaatuConvoTemplate = ConvoTemplate:new {
	initialScreen = "",
	templateType = "Lua",
	luaClassHandler = "ticketTakerKlaatuConvoHandler",
	screens = {}
}

start = ConvoScreen:new {
	id = "start",
	leftDialog = "@conversation/corvette_neutral_pilot:s_1e10bbe3", -- If you have to run around out here, don't touch anything! I'm dealing with some highly sensitive equipment in this area and don't want your clumsy fingers breaking something.
	stopConversation = "false",
	options = {}
}

corvetteKlaatuConvoTemplate:addScreen(start);

sorry = ConvoScreen:new {
	id = "sorry",
	leftDialog = "@conversation/corvette_neutral_pilot:s_f0008c9b", -- Whatever. Try to leave more quietly than you arrived.
	stopConversation = "true",
	options = {}
}

corvetteKlaatuConvoTemplate:addScreen(sorry);

too_many_to_help = ConvoScreen:new {
	id = "too_many_to_help",
	leftDialog = "@conversation/corvette_neutral_pilot:s_6423c2d5", -- Well, I could normally help you, but the transportation I can provide only has room for 10 or less. You'll need to reduce your group size and then speak with me again.
	stopConversation = "true",
	options = {}
}

corvetteKlaatuConvoTemplate:addScreen(too_many_to_help);

continue = ConvoScreen:new {
	id = "continue",
	leftDialog = "@conversation/corvette_neutral_pilot:s_fc033618", -- Me? And just how exactly would I do that? Wait... wait. Don't go. Why do you want to do something like that?
	stopConversation = "false",
	options = {}
}

corvetteKlaatuConvoTemplate:addScreen(continue);

in_my_way = ConvoScreen:new {
	id = "in_my_way",
	leftDialog = "@conversation/corvette_neutral_pilot:s_ba55259a", -- Good. You'd only be in my way.
	stopConversation = "true",
	options = {}
}

corvetteKlaatuConvoTemplate:addScreen(in_my_way);

mission_too_many = ConvoScreen:new {
	id = "mission_too_many",
	leftDialog = "@conversation/corvette_neutral_pilot:s_f2d8c3c4", -- Hmmm... reminds me of some information I overheard recently. I might be able to help you, but the transportation I can provide only has room for 10 or less. You'll need to reduce your group size and then speak with me again.
	stopConversation = "true",
	options = {}
}

corvetteKlaatuConvoTemplate:addScreen(mission_too_many);

mission = ConvoScreen:new {
	id = "mission",
	leftDialog = "@conversation/corvette_neutral_pilot:s_c4c8b476", -- Hmmm... reminds me of some information I overheard recently. Don't you worry about where I heard it! Just be glad that I did, because I think I can help you. Oh, something you should know - after you get to the corvette, you'll have an hour to conclude your business. After an hour, it's too late. Game over. Mission failed.
	stopConversation = "false",
	options = {
		{"@conversation/corvette_neutral_pilot:s_d553beb4","good_luck"}, -- I've changed my mind, and I'm leaving.
		{"@conversation/corvette_neutral_pilot:s_62aa5014","not_so_fast"}, -- Good, when can we go?
	}
}

corvetteKlaatuConvoTemplate:addScreen(mission);

not_so_fast = ConvoScreen:new {
	id = "not_so_fast",
	leftDialog = "@conversation/corvette_neutral_pilot:s_801d58df", -- Whoa... hold on there. Not so fast. First I need to know you have proper authorization for this... I'm willing to help you, but I've gotta know this is legit. Jabba'd have my head if I started providing transportation to just anyone claiming to be on some mission. You got a travel authorization form?
	stopConversation = "true",
	options = {}
}

corvetteKlaatuConvoTemplate:addScreen(not_so_fast);

good_luck = ConvoScreen:new {
	id = "good_luck",
	leftDialog = "@conversation/corvette_neutral_pilot:s_18d816d4", -- Hey, no worries to me. Good luck explaining your cowardice to Jabba... assuming you really were doing this for him. [laughs]
	stopConversation = "true",
	options = {}
}

corvetteKlaatuConvoTemplate:addScreen(good_luck);

addConversationTemplate("corvetteKlaatuConvoTemplate", corvetteKlaatuConvoTemplate);

