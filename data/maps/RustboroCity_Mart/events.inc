RustboroCity_Mart_EventObjects:: @ 8388C34
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, Common_EventScript_StandardMart, 0
	object_event 2, EVENT_OBJ_GFX_BOY_1, 0, 2, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_Mart_EventScript_157C4D, 0
	object_event 3, EVENT_OBJ_GFX_WOMAN_2, 0, 8, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, RustboroCity_Mart_EventScript_157C44, 0
	object_event 4, EVENT_OBJ_GFX_BUG_CATCHER, 0, 8, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, RustboroCity_Mart_EventScript_157C56, 0
	object_event 5, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 2, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, RustboroCity_Mart_EventScript_157BD4, 0

RustboroCity_Mart_MapWarps:: @ 8388C94
	warp_def 3, 7, 0, 2, MAP_RUSTBORO_CITY
	warp_def 4, 7, 0, 2, MAP_RUSTBORO_CITY

RustboroCity_Mart_MapEvents:: @ 8388CA4
	map_events RustboroCity_Mart_EventObjects, RustboroCity_Mart_MapWarps, 0x0, 0x0
