FortreeCity_Mart_MapScripts:: @ 8158066
	.byte 0

FortreeCity_Mart_EventScript_158067:: @ 8158067
	lock
	faceplayer
	message FortreeCity_Mart_Text_1A0BE4
	waitmessage
	pokemart FortreeCity_Mart_Items
	msgbox FortreeCity_Mart_Text_1A0C02, 4
	release
	end

	.align 2
FortreeCity_Mart_Items:: @ 8158080
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_WOOD_MAIL
	.2byte ITEM_X_SPEED
    .2byte ITEM_SILVER_POWDER
	.2byte ITEM_NONE
	release
	end

FortreeCity_Mart_EventScript_158098:: @ 8158098
	msgbox FortreeCity_Mart_Text_1861EF, 2
	end

FortreeCity_Mart_EventScript_1580A1:: @ 81580A1
	msgbox FortreeCity_Mart_Text_186251, 2
	end

FortreeCity_Mart_EventScript_1580AA:: @ 81580AA
	msgbox FortreeCity_Mart_Text_1862CA, 2
	end
