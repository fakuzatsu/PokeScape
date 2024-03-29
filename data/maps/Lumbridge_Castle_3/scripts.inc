Lumbridge_Castle_3_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Castle_3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_Castle_3_MapScripts_MAP_SCRIPT_ON_LOAD:
	call LUMBRIDGE_GYM_MUSIC
	goto LUMBRIDGE_GYM_STATE
	return


LUMBRIDGE_GYM_MUSIC::
	switch VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE
	case 4, LUMBRIDGE_GYM_MUSIC_2
	case 5, LUMBRIDGE_GYM_MUSIC_3
	return

LUMBRIDGE_GYM_MUSIC_2:
	playbgm MUS_PS_GYM, 1
	savebgm MUS_PS_GYM
	return

LUMBRIDGE_GYM_MUSIC_3:
	return


LUMBRIDGE_GYM_STATE::
	switch VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE
	case 4, LUMBRIDGE_GYM_STATE_2
	case 5, LUMBRIDGE_GYM_STATE_3
	case 6, LUMBRIDGE_GYM_STATE_4
	case 7, LUMBRIDGE_GYM_STATE_4
	case 8, LUMBRIDGE_GYM_STATE_4
	case 9, LUMBRIDGE_GYM_STATE_4
	return

LUMBRIDGE_GYM_STATE_2:
	removeobject 1
	setflag FLAG_TEMP_1
	setobjectxyperm 4, 5, 4
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setmetatile 3, 7, 1, 0
	setmetatile 4, 7, 1, 0
	setmetatile 5, 7, 1, 0
	setmetatile 5, 6, 1, 0
	setmetatile 2, 6, 17, 1
	setmetatile 2, 7, 17, 1
	setmetatile 7, 4, 26, 1
	setmetatile 8, 4, 26, 1
	special DrawWholeMapView
	release
	end

LUMBRIDGE_GYM_STATE_3:
	setobjectxyperm 4, 5, 4
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 2, 18, 4
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	setmetatile 3, 7, 1, 0
	setmetatile 4, 7, 1, 0
	setmetatile 5, 7, 1, 0
	setmetatile 5, 6, 1, 0
	setmetatile 2, 6, 17, 1
	setmetatile 2, 7, 17, 1
	setmetatile 7, 4, 26, 1
	setmetatile 8, 4, 26, 1
	setmetatile 31, 5, 2, 0
	setmetatile 32, 5, 2, 0
	setmetatile 31, 6, 1, 0
	setmetatile 30, 6, 2, 0
	setmetatile 33, 8, 17, 1
	setmetatile 33, 7, 18, 1
	setmetatile 29, 4, 17, 1
	setmetatile 28, 4, 26, 1
	special DrawWholeMapView
	release
	end

LUMBRIDGE_GYM_STATE_4:
	release
	end


NPC_DUKE_1::
	lock
	faceplayer
	namebox NPC_DUKE_1_Text_0
	goto_if_unset FLAG_BADGE01_GET, NPC_DUKE_1_2
	msgbox NPC_DUKE_1_Text_2
	hidenamebox
	release
	end

	release
	end

NPC_DUKE_1_2:
	msgbox NPC_DUKE_1_Text_1
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 4
	fadescreen FADE_FROM_BLACK
	call LUMBRIDGE_GYM_MUSIC
	goto LUMBRIDGE_GYM_STATE
	release
	end


LUMBRIDGE_GYM_GUARD_1::
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_GUARD_1_Text_0
	switch VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE
	case 3, LUMBRIDGE_GYM_GUARD_1_3
	case 4, LUMBRIDGE_GYM_GUARD_1_4
	case 5, LUMBRIDGE_GYM_GUARD_1_5
	hidenamebox
	release
	end

LUMBRIDGE_GYM_GUARD_1_3:
	msgbox LUMBRIDGE_GYM_GUARD_1_Text_1
	hidenamebox
	release
	end

LUMBRIDGE_GYM_GUARD_1_4:
	msgbox LUMBRIDGE_GYM_GUARD_1_Text_2
	hidenamebox
	release
	end

LUMBRIDGE_GYM_GUARD_1_5:
	msgbox LUMBRIDGE_GYM_GUARD_1_Text_3
	hidenamebox
	release
	end


LUMBRIDGE_GYM_GUARD_2::
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_GUARD_1_Text_0
	switch VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE
	case 3, LUMBRIDGE_GYM_GUARD_2_3
	case 4, LUMBRIDGE_GYM_GUARD_2_3
	case 5, LUMBRIDGE_GYM_GUARD_2_4
	hidenamebox
	release
	end

LUMBRIDGE_GYM_GUARD_2_3:
	msgbox LUMBRIDGE_GYM_GUARD_1_Text_1
	hidenamebox
	release
	end

LUMBRIDGE_GYM_GUARD_2_4:
	msgbox LUMBRIDGE_GYM_GUARD_2_Text_0
	hidenamebox
	release
	end


EVENTSCRIPT_LUMBRIDGECASTLE_DIARY::
	msgbox EVENTSCRIPT_LUMBRIDGECASTLE_DIARY_Text_0
	closemessage
	end


LUMBRIDGE_GYM_SIGMUND::
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_SIGMUND_Text_0
	msgbox LUMBRIDGE_GYM_SIGMUND_Text_1
	hidenamebox
	release
	end


NPC_DUKE_1_Text_0:
	.string "Duke Horacio$"

NPC_DUKE_1_Text_1:
	.string "Hi there!\p"
	.string "I'm Duke Horacio, lord of castle\n"
	.string "Lumbridge.\p"
	.string "I heard from my cook that you wish to\n"
	.string "challenge me to a battle!\p"
	.string "Very well, you will have to reach the top\n"
	.string "of the castle.\p"
	.string "I shall be waiting!$"

NPC_DUKE_1_Text_2:
	.string "You fought well earlier!\n"
	.string "I look forward to a rematch.$"

LUMBRIDGE_GYM_GUARD_1_Text_0:
	.string "Guard$"

LUMBRIDGE_GYM_GUARD_1_Text_1:
	.string "Sorry, this hallway is off limits until I\n"
	.string "sort out this mess.$"

LUMBRIDGE_GYM_GUARD_1_Text_2:
	.string "Good luck with your gym challenge!$"

LUMBRIDGE_GYM_GUARD_1_Text_3:
	.string "Welcome to Lumbridge Castle.\p"
	.string "Mind yourself.$"

LUMBRIDGE_GYM_GUARD_2_Text_0:
	.string "Welcome to Lumbridge Castle.$"

EVENTSCRIPT_LUMBRIDGECASTLE_DIARY_Text_0:
	.string "It's the Duke's Diary.\p"
	.string "Better not read it.$"

LUMBRIDGE_GYM_SIGMUND_Text_0:
	.string "Sigmund$"

LUMBRIDGE_GYM_SIGMUND_Text_1:
	.string "I think you're looking for the Duke.\p"
	.string "He's in the next room.$"
