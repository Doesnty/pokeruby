LilycoveCity_DepartmentStore_2F_EventObjects:: @ 838A2E8
	object_event 1, EVENT_OBJ_GFX_COOK, 0, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_159F0F, 0
	object_event 2, EVENT_OBJ_GFX_WOMAN_2, 0, 0, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_159F18, 0
	object_event 3, EVENT_OBJ_GFX_SAILOR, 0, 13, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_159F21, 0
	object_event 4, EVENT_OBJ_GFX_WOMAN_4, 0, 10, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, Common_EventScript_StandardMart, 0
	object_event 5, EVENT_OBJ_GFX_WOMAN_4, 0, 7, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_159F2A, 0
	object_event 6, EVENT_OBJ_GFX_MAN_1, 0, 2, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, LilycoveCity_DepartmentStore_1F_EventScript_ElevatorOutOfOrder, FLAG_BADGE06_GET
	object_event 7, EVENT_OBJ_GFX_MAN_1, 0, 13, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_StairsOutOfOrder, FLAG_BADGE06_GET

LilycoveCity_DepartmentStore_2F_MapWarps:: @ 838A360
	warp_def 16, 1, 0, 2, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_1F
	warp_def 13, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_3F
	warp_def 2, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR

LilycoveCity_DepartmentStore_2F_MapEvents:: @ 838A378
	map_events LilycoveCity_DepartmentStore_2F_EventObjects, LilycoveCity_DepartmentStore_2F_MapWarps, 0x0, 0x0
