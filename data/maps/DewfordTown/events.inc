DewfordTown_EventObjects:: @ 8380B88
	object_event 1, EVENT_OBJ_GFX_WOMAN_3, 0, 15, 12, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, DewfordTown_EventScript_14E0A2, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN_1, 0, 20, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 1, 0, 3, DewfordTown_EventScript_14E002, FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	object_event 3, EVENT_OBJ_GFX_FISHERMAN, 0, 20, 14, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, DewfordTown_EventScript_14E0C6, 0
	object_event 4, EVENT_OBJ_GFX_MR_BRINEYS_BOAT, 0, 20, 8, 1, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD
	object_event 5, EVENT_OBJ_GFX_BOY_1, 0, 9, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, DewfordTown_EventScript_14E413, 0
    object_event 6, EVENT_OBJ_GFX_WOMAN_2, 0, 11, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, DewfordTown_EventScript_BrawlyWifeIntro, 0

DewfordTown_MapWarps:: @ 8380C00
	warp_def 11, 3, 0, 0, MAP_DEWFORD_TOWN_HALL
	warp_def 10, 10, 0, 0, MAP_DEWFORD_TOWN_POKEMON_CENTER_1F
	warp_def 16, 17, 0, 0, MAP_DEWFORD_TOWN_GYM
	warp_def 25, 14, 0, 0, MAP_DEWFORD_TOWN_HOUSE1
	warp_def 16, 8, 0, 0, MAP_DEWFORD_TOWN_HOUSE2
	warp_def 4, 10, 0, 0, MAP_DEWFORD_TOWN_MART

DewfordTown_MapBGEvents:: @ 8380C28
	bg_event 10, 10, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_14E0AB
	bg_event 11, 16, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_14E0B4
	bg_event 4, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, DewfordTown_EventScript_1A00EA
	bg_event 3, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, DewfordTown_EventScript_1A00EA
	bg_event 2, 4, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_14E0BD

DewfordTown_MapEvents:: @ 8380C64
	map_events DewfordTown_EventObjects, DewfordTown_MapWarps, 0x0, DewfordTown_MapBGEvents
