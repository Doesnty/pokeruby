const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_BULBASAUR] = _("Bulbasaur"),
    [SPECIES_IVYSAUR] = _("Ivysaur"),
    [SPECIES_VENUSAUR] = _("Venusaur"),
    [SPECIES_CHARMANDER] = _("Charmander"),
    [SPECIES_CHARMELEON] = _("Charmeleon"),
    [SPECIES_CHARIZARD] = _("Charizard"),
    [SPECIES_SQUIRTLE] = _("Squirtle"),
    [SPECIES_WARTORTLE] = _("Wartortle"),
    [SPECIES_BLASTOISE] = _("Blastoise"),
    [SPECIES_CATERPIE] = _("Caterpie"),
    [SPECIES_METAPOD] = _("Metapod"),
    [SPECIES_BUTTERFREE] = _("Butterfree"),
    [SPECIES_WEEDLE] = _("Weedle"),
    [SPECIES_KAKUNA] = _("Kakuna"),
    [SPECIES_BEEDRILL] = _("Beedrill"),
    [SPECIES_PIDGEY] = _("Pidgey"),
    [SPECIES_PIDGEOTTO] = _("Pidgeotto"),
    [SPECIES_PIDGEOT] = _("Pidgeot"),
    [SPECIES_RATTATA] = _("Rattata"),
    [SPECIES_RATICATE] = _("Raticate"),
    [SPECIES_SPEAROW] = _("Spearow"),
    [SPECIES_FEAROW] = _("Fearow"),
    [SPECIES_EKANS] = _("Ekans"),
    [SPECIES_ARBOK] = _("Arbok"),
    [SPECIES_PIKACHU] = _("Pikachu"),
    [SPECIES_RAICHU] = _("Raichu"),
    [SPECIES_SANDSHREW] = _("Sandshrew"),
    [SPECIES_SANDSLASH] = _("Sandslash"),
    [SPECIES_NIDORAN_F] = _("Nidoran♀"),
    [SPECIES_NIDORINA] = _("Nidorina"),
    [SPECIES_NIDOQUEEN] = _("Nidoqueen"),
    [SPECIES_NIDORAN_M] = _("Nidoran♂"),
    [SPECIES_NIDORINO] = _("Nidorino"),
    [SPECIES_NIDOKING] = _("Nidoking"),
    [SPECIES_CLEFAIRY] = _("Clefairy"),
    [SPECIES_CLEFABLE] = _("Clefable"),
    [SPECIES_VULPIX] = _("Vulpix"),
    [SPECIES_NINETALES] = _("Ninetales"),
    [SPECIES_JIGGLYPUFF] = _("Jigglypuff"),
    [SPECIES_WIGGLYTUFF] = _("Wigglytuff"),
    [SPECIES_ZUBAT] = _("Zubat"),
    [SPECIES_GOLBAT] = _("Golbat"),
    [SPECIES_ODDISH] = _("Oddish"),
    [SPECIES_GLOOM] = _("Gloom"),
    [SPECIES_VILEPLUME] = _("Vileplume"),
    [SPECIES_PARAS] = _("Paras"),
    [SPECIES_PARASECT] = _("Parasect"),
    [SPECIES_VENONAT] = _("Venonat"),
    [SPECIES_VENOMOTH] = _("Venomoth"),
    [SPECIES_DIGLETT] = _("Diglett"),
    [SPECIES_DUGTRIO] = _("Dugtrio"),
    [SPECIES_MEOWTH] = _("Meowth"),
    [SPECIES_PERSIAN] = _("Persian"),
    [SPECIES_PSYDUCK] = _("Psyduck"),
    [SPECIES_GOLDUCK] = _("Golduck"),
    [SPECIES_MANKEY] = _("Mankey"),
    [SPECIES_PRIMEAPE] = _("Primeape"),
    [SPECIES_GROWLITHE] = _("Growlithe"),
    [SPECIES_ARCANINE] = _("Arcanine"),
    [SPECIES_POLIWAG] = _("Poliwag"),
    [SPECIES_POLIWHIRL] = _("Poliwhirl"),
    [SPECIES_POLIWRATH] = _("Poliwrath"),
    [SPECIES_ABRA] = _("Abra"),
    [SPECIES_KADABRA] = _("Kadabra"),
    [SPECIES_ALAKAZAM] = _("Alakazam"),
    [SPECIES_MACHOP] = _("Machop"),
    [SPECIES_MACHOKE] = _("Machoke"),
    [SPECIES_MACHAMP] = _("Machamp"),
    [SPECIES_BELLSPROUT] = _("Bellsprout"),
    [SPECIES_WEEPINBELL] = _("Weepinbell"),
    [SPECIES_VICTREEBEL] = _("Victreebel"),
    [SPECIES_TENTACOOL] = _("Tentacool"),
    [SPECIES_TENTACRUEL] = _("Tentacruel"),
    [SPECIES_GEODUDE] = _("Geodude"),
    [SPECIES_GRAVELER] = _("Graveler"),
    [SPECIES_GOLEM] = _("Golem"),
    [SPECIES_PONYTA] = _("Ponyta"),
    [SPECIES_RAPIDASH] = _("Rapidash"),
    [SPECIES_SLOWPOKE] = _("Slowpoke"),
    [SPECIES_SLOWBRO] = _("Slowbro"),
    [SPECIES_MAGNEMITE] = _("Magnemite"),
    [SPECIES_MAGNETON] = _("Magneton"),
    [SPECIES_FARFETCHD] = _("Farfetch'd"),
    [SPECIES_DODUO] = _("Doduo"),
    [SPECIES_DODRIO] = _("Dodrio"),
    [SPECIES_SEEL] = _("Seel"),
    [SPECIES_DEWGONG] = _("Dewgong"),
    [SPECIES_GRIMER] = _("Grimer"),
    [SPECIES_MUK] = _("Muk"),
    [SPECIES_SHELLDER] = _("Shellder"),
    [SPECIES_CLOYSTER] = _("Cloyster"),
    [SPECIES_GASTLY] = _("Gastly"),
    [SPECIES_HAUNTER] = _("Haunter"),
    [SPECIES_GENGAR] = _("Gengar"),
    [SPECIES_ONIX] = _("Onix"),
    [SPECIES_DROWZEE] = _("Drowzee"),
    [SPECIES_HYPNO] = _("Hypno"),
    [SPECIES_KRABBY] = _("Krabby"),
    [SPECIES_KINGLER] = _("Kingler"),
    [SPECIES_VOLTORB] = _("Voltorb"),
    [SPECIES_ELECTRODE] = _("Electrode"),
    [SPECIES_EXEGGCUTE] = _("Exeggcute"),
    [SPECIES_EXEGGUTOR] = _("Exeggutor"),
    [SPECIES_CUBONE] = _("Cubone"),
    [SPECIES_MAROWAK] = _("Marowak"),
    [SPECIES_HITMONLEE] = _("Hitmonlee"),
    [SPECIES_HITMONCHAN] = _("Hitmonchan"),
    [SPECIES_LICKITUNG] = _("Lickitung"),
    [SPECIES_KOFFING] = _("Koffing"),
    [SPECIES_WEEZING] = _("Weezing"),
    [SPECIES_RHYHORN] = _("Rhyhorn"),
    [SPECIES_RHYDON] = _("Rhydon"),
    [SPECIES_CHANSEY] = _("Chansey"),
    [SPECIES_TANGELA] = _("Tangela"),
    [SPECIES_KANGASKHAN] = _("Kangaskhan"),
    [SPECIES_HORSEA] = _("Horsea"),
    [SPECIES_SEADRA] = _("Seadra"),
    [SPECIES_GOLDEEN] = _("Goldeen"),
    [SPECIES_SEAKING] = _("Seaking"),
    [SPECIES_STARYU] = _("Staryu"),
    [SPECIES_STARMIE] = _("Starmie"),
    [SPECIES_MR_MIME] = _("Mr. Mime"),
    [SPECIES_SCYTHER] = _("Scyther"),
    [SPECIES_JYNX] = _("Jynx"),
    [SPECIES_ELECTABUZZ] = _("Electabuzz"),
    [SPECIES_MAGMAR] = _("Magmar"),
    [SPECIES_PINSIR] = _("Pinsir"),
    [SPECIES_TAUROS] = _("Tauros"),
    [SPECIES_MAGIKARP] = _("Magikarp"),
    [SPECIES_GYARADOS] = _("Gyarados"),
    [SPECIES_LAPRAS] = _("Lapras"),
    [SPECIES_DITTO] = _("Ditto"),
    [SPECIES_EEVEE] = _("Eevee"),
    [SPECIES_VAPOREON] = _("Vaporeon"),
    [SPECIES_JOLTEON] = _("Jolteon"),
    [SPECIES_FLAREON] = _("Flareon"),
    [SPECIES_PORYGON] = _("Porygon"),
    [SPECIES_OMANYTE] = _("Omanyte"),
    [SPECIES_OMASTAR] = _("Omastar"),
    [SPECIES_KABUTO] = _("Kabuto"),
    [SPECIES_KABUTOPS] = _("Kabutops"),
    [SPECIES_AERODACTYL] = _("Aerodactyl"),
    [SPECIES_SNORLAX] = _("Snorlax"),
    [SPECIES_ARTICUNO] = _("Articuno"),
    [SPECIES_ZAPDOS] = _("Zapdos"),
    [SPECIES_MOLTRES] = _("Moltres"),
    [SPECIES_DRATINI] = _("Dratini"),
    [SPECIES_DRAGONAIR] = _("Dragonair"),
    [SPECIES_DRAGONITE] = _("Dragonite"),
    [SPECIES_MEWTWO] = _("Mewtwo"),
    [SPECIES_MEW] = _("Mew"),
    [SPECIES_CHIKORITA] = _("Chikorita"),
    [SPECIES_BAYLEEF] = _("Bayleef"),
    [SPECIES_MEGANIUM] = _("Meganium"),
    [SPECIES_CYNDAQUIL] = _("Cyndaquil"),
    [SPECIES_QUILAVA] = _("Quilava"),
    [SPECIES_TYPHLOSION] = _("Typhlosion"),
    [SPECIES_TOTODILE] = _("Totodile"),
    [SPECIES_CROCONAW] = _("Croconaw"),
    [SPECIES_FERALIGATR] = _("Feraligatr"),
    [SPECIES_SENTRET] = _("Sentret"),
    [SPECIES_FURRET] = _("Furret"),
    [SPECIES_HOOTHOOT] = _("Hoothoot"),
    [SPECIES_NOCTOWL] = _("Noctowl"),
    [SPECIES_LEDYBA] = _("Ledyba"),
    [SPECIES_LEDIAN] = _("Ledian"),
    [SPECIES_SPINARAK] = _("Spinarak"),
    [SPECIES_ARIADOS] = _("Ariados"),
    [SPECIES_CROBAT] = _("Crobat"),
    [SPECIES_CHINCHOU] = _("Chinchou"),
    [SPECIES_LANTURN] = _("Lanturn"),
    [SPECIES_PICHU] = _("Pichu"),
    [SPECIES_CLEFFA] = _("Cleffa"),
    [SPECIES_IGGLYBUFF] = _("Igglybuff"),
    [SPECIES_TOGEPI] = _("Togepi"),
    [SPECIES_TOGETIC] = _("Togetic"),
    [SPECIES_NATU] = _("Natu"),
    [SPECIES_XATU] = _("Xatu"),
    [SPECIES_MAREEP] = _("Mareep"),
    [SPECIES_FLAAFFY] = _("Flaaffy"),
    [SPECIES_AMPHAROS] = _("Ampharos"),
    [SPECIES_BELLOSSOM] = _("Bellossom"),
    [SPECIES_MARILL] = _("Marill"),
    [SPECIES_AZUMARILL] = _("Azumarill"),
    [SPECIES_SUDOWOODO] = _("Sudowoodo"),
    [SPECIES_POLITOED] = _("Politoed"),
    [SPECIES_HOPPIP] = _("Hoppip"),
    [SPECIES_SKIPLOOM] = _("Skiploom"),
    [SPECIES_JUMPLUFF] = _("Jumpluff"),
    [SPECIES_AIPOM] = _("Aipom"),
    [SPECIES_SUNKERN] = _("Sunkern"),
    [SPECIES_SUNFLORA] = _("Sunflora"),
    [SPECIES_YANMA] = _("Yanma"),
    [SPECIES_WOOPER] = _("Wooper"),
    [SPECIES_QUAGSIRE] = _("Quagsire"),
    [SPECIES_ESPEON] = _("Espeon"),
    [SPECIES_UMBREON] = _("Umbreon"),
    [SPECIES_MURKROW] = _("Murkrow"),
    [SPECIES_SLOWKING] = _("Slowking"),
    [SPECIES_MISDREAVUS] = _("Misdreavus"),
    [SPECIES_UNOWN] = _("Unown"),
    [SPECIES_WOBBUFFET] = _("Wobbuffet"),
    [SPECIES_GIRAFARIG] = _("Girafarig"),
    [SPECIES_PINECO] = _("Pineco"),
    [SPECIES_FORRETRESS] = _("Forretress"),
    [SPECIES_DUNSPARCE] = _("Dunsparce"),
    [SPECIES_GLIGAR] = _("Gligar"),
    [SPECIES_STEELIX] = _("Steelix"),
    [SPECIES_SNUBBULL] = _("Snubbull"),
    [SPECIES_GRANBULL] = _("Granbull"),
    [SPECIES_QWILFISH] = _("Qwilfish"),
    [SPECIES_SCIZOR] = _("Scizor"),
    [SPECIES_SHUCKLE] = _("Shuckle"),
    [SPECIES_HERACROSS] = _("Heracross"),
    [SPECIES_SNEASEL] = _("Sneasel"),
    [SPECIES_TEDDIURSA] = _("Teddiursa"),
    [SPECIES_URSARING] = _("Ursaring"),
    [SPECIES_SLUGMA] = _("Slugma"),
    [SPECIES_MAGCARGO] = _("Magcargo"),
    [SPECIES_SWINUB] = _("Swinub"),
    [SPECIES_PILOSWINE] = _("Piloswine"),
    [SPECIES_CORSOLA] = _("Corsola"),
    [SPECIES_REMORAID] = _("Remoraid"),
    [SPECIES_OCTILLERY] = _("Octillery"),
    [SPECIES_DELIBIRD] = _("Delibird"),
    [SPECIES_MANTINE] = _("Mantine"),
    [SPECIES_SKARMORY] = _("Skarmory"),
    [SPECIES_HOUNDOUR] = _("Houndour"),
    [SPECIES_HOUNDOOM] = _("Houndoom"),
    [SPECIES_KINGDRA] = _("Kingdra"),
    [SPECIES_PHANPY] = _("Phanpy"),
    [SPECIES_DONPHAN] = _("Donphan"),
    [SPECIES_PORYGON2] = _("Porygon2"),
    [SPECIES_STANTLER] = _("Stantler"),
    [SPECIES_SMEARGLE] = _("Smeargle"),
    [SPECIES_TYROGUE] = _("Tyrogue"),
    [SPECIES_HITMONTOP] = _("Hitmontop"),
    [SPECIES_SMOOCHUM] = _("Smoochum"),
    [SPECIES_ELEKID] = _("Elekid"),
    [SPECIES_MAGBY] = _("Magby"),
    [SPECIES_MILTANK] = _("Miltank"),
    [SPECIES_BLISSEY] = _("Blissey"),
    [SPECIES_RAIKOU] = _("Raikou"),
    [SPECIES_ENTEI] = _("Entei"),
    [SPECIES_SUICUNE] = _("Suicune"),
    [SPECIES_LARVITAR] = _("Larvitar"),
    [SPECIES_PUPITAR] = _("Pupitar"),
    [SPECIES_TYRANITAR] = _("Tyranitar"),
    [SPECIES_LUGIA] = _("Lugia"),
    [SPECIES_HO_OH] = _("Ho-oh"),
    [SPECIES_CELEBI] = _("Celebi"),
    [SPECIES_OLD_UNOWN_B] = _("?"),
    [SPECIES_OLD_UNOWN_C] = _("?"),
    [SPECIES_OLD_UNOWN_D] = _("?"),
    [SPECIES_OLD_UNOWN_E] = _("?"),
    [SPECIES_OLD_UNOWN_F] = _("?"),
    [SPECIES_OLD_UNOWN_G] = _("?"),
    [SPECIES_OLD_UNOWN_H] = _("?"),
    [SPECIES_OLD_UNOWN_I] = _("?"),
    [SPECIES_OLD_UNOWN_J] = _("?"),
    [SPECIES_OLD_UNOWN_K] = _("?"),
    [SPECIES_OLD_UNOWN_L] = _("?"),
    [SPECIES_OLD_UNOWN_M] = _("?"),
    [SPECIES_OLD_UNOWN_N] = _("?"),
    [SPECIES_OLD_UNOWN_O] = _("?"),
    [SPECIES_OLD_UNOWN_P] = _("?"),
    [SPECIES_OLD_UNOWN_Q] = _("?"),
    [SPECIES_OLD_UNOWN_R] = _("?"),
    [SPECIES_OLD_UNOWN_S] = _("?"),
    [SPECIES_OLD_UNOWN_T] = _("?"),
    [SPECIES_OLD_UNOWN_U] = _("?"),
    [SPECIES_OLD_UNOWN_V] = _("?"),
    [SPECIES_OLD_UNOWN_W] = _("?"),
    [SPECIES_OLD_UNOWN_X] = _("?"),
    [SPECIES_OLD_UNOWN_Y] = _("?"),
    [SPECIES_OLD_UNOWN_Z] = _("?"),
    [SPECIES_TREECKO] = _("Treecko"),
    [SPECIES_GROVYLE] = _("Grovyle"),
    [SPECIES_SCEPTILE] = _("Sceptile"),
    [SPECIES_TORCHIC] = _("Torchic"),
    [SPECIES_COMBUSKEN] = _("Combusken"),
    [SPECIES_BLAZIKEN] = _("Blaziken"),
    [SPECIES_MUDKIP] = _("Mudkip"),
    [SPECIES_MARSHTOMP] = _("Marshtomp"),
    [SPECIES_SWAMPERT] = _("Swampert"),
    [SPECIES_POOCHYENA] = _("Poochyena"),
    [SPECIES_MIGHTYENA] = _("Mightyena"),
    [SPECIES_ZIGZAGOON] = _("Zigzagoon"),
    [SPECIES_LINOONE] = _("Linoone"),
    [SPECIES_WURMPLE] = _("Wurmple"),
    [SPECIES_SILCOON] = _("Silcoon"),
    [SPECIES_BEAUTIFLY] = _("Beautifly"),
    [SPECIES_CASCOON] = _("Cascoon"),
    [SPECIES_DUSTOX] = _("Dustox"),
    [SPECIES_LOTAD] = _("Lotad"),
    [SPECIES_LOMBRE] = _("Lombre"),
    [SPECIES_LUDICOLO] = _("Ludicolo"),
    [SPECIES_SEEDOT] = _("Seedot"),
    [SPECIES_NUZLEAF] = _("Nuzleaf"),
    [SPECIES_SHIFTRY] = _("Shiftry"),
    [SPECIES_NINCADA] = _("Nincada"),
    [SPECIES_NINJASK] = _("Ninjask"),
    [SPECIES_SHEDINJA] = _("Shedinja"),
    [SPECIES_TAILLOW] = _("Taillow"),
    [SPECIES_SWELLOW] = _("Swellow"),
    [SPECIES_SHROOMISH] = _("Shroomish"),
    [SPECIES_BRELOOM] = _("Breloom"),
    [SPECIES_SPINDA] = _("Spinda"),
    [SPECIES_WINGULL] = _("Wingull"),
    [SPECIES_PELIPPER] = _("Pelipper"),
    [SPECIES_SURSKIT] = _("Surskit"),
    [SPECIES_MASQUERAIN] = _("Masquerain"),
    [SPECIES_WAILMER] = _("Wailmer"),
    [SPECIES_WAILORD] = _("Wailord"),
    [SPECIES_SKITTY] = _("Skitty"),
    [SPECIES_DELCATTY] = _("Delcatty"),
    [SPECIES_KECLEON] = _("Kecleon"),
    [SPECIES_BALTOY] = _("Baltoy"),
    [SPECIES_CLAYDOL] = _("Claydol"),
    [SPECIES_NOSEPASS] = _("Nosepass"),
    [SPECIES_TORKOAL] = _("Torkoal"),
    [SPECIES_SABLEYE] = _("Sableye"),
    [SPECIES_BARBOACH] = _("Barboach"),
    [SPECIES_WHISCASH] = _("Whiscash"),
    [SPECIES_LUVDISC] = _("Luvdisc"),
    [SPECIES_CORPHISH] = _("Corphish"),
    [SPECIES_CRAWDAUNT] = _("Crawdaunt"),
    [SPECIES_FEEBAS] = _("Feebas"),
    [SPECIES_MILOTIC] = _("Milotic"),
    [SPECIES_CARVANHA] = _("Carvanha"),
    [SPECIES_SHARPEDO] = _("Sharpedo"),
    [SPECIES_TRAPINCH] = _("Trapinch"),
    [SPECIES_VIBRAVA] = _("Vibrava"),
    [SPECIES_FLYGON] = _("Flygon"),
    [SPECIES_MAKUHITA] = _("Makuhita"),
    [SPECIES_HARIYAMA] = _("Hariyama"),
    [SPECIES_ELECTRIKE] = _("Electrike"),
    [SPECIES_MANECTRIC] = _("Manectric"),
    [SPECIES_NUMEL] = _("Numel"),
    [SPECIES_CAMERUPT] = _("Camerupt"),
    [SPECIES_SPHEAL] = _("Spheal"),
    [SPECIES_SEALEO] = _("Sealeo"),
    [SPECIES_WALREIN] = _("Walrein"),
    [SPECIES_CACNEA] = _("Cacnea"),
    [SPECIES_CACTURNE] = _("Cacturne"),
    [SPECIES_SNORUNT] = _("Snorunt"),
    [SPECIES_GLALIE] = _("Glalie"),
    [SPECIES_LUNATONE] = _("Lunatone"),
    [SPECIES_SOLROCK] = _("Solrock"),
    [SPECIES_AZURILL] = _("Azurill"),
    [SPECIES_SPOINK] = _("Spoink"),
    [SPECIES_GRUMPIG] = _("Grumpig"),
    [SPECIES_PLUSLE] = _("Plusle"),
    [SPECIES_MINUN] = _("Minun"),
    [SPECIES_MAWILE] = _("Mawile"),
    [SPECIES_MEDITITE] = _("Meditite"),
    [SPECIES_MEDICHAM] = _("Medicham"),
    [SPECIES_SWABLU] = _("Swablu"),
    [SPECIES_ALTARIA] = _("Altaria"),
    [SPECIES_WYNAUT] = _("Wynaut"),
    [SPECIES_DUSKULL] = _("Duskull"),
    [SPECIES_DUSCLOPS] = _("Dusclops"),
    [SPECIES_ROSELIA] = _("Roselia"),
    [SPECIES_SLAKOTH] = _("Slakoth"),
    [SPECIES_VIGOROTH] = _("Vigoroth"),
    [SPECIES_SLAKING] = _("Slaking"),
    [SPECIES_GULPIN] = _("Gulpin"),
    [SPECIES_SWALOT] = _("Swalot"),
    [SPECIES_TROPIUS] = _("Tropius"),
    [SPECIES_WHISMUR] = _("Whismur"),
    [SPECIES_LOUDRED] = _("Loudred"),
    [SPECIES_EXPLOUD] = _("Exploud"),
    [SPECIES_CLAMPERL] = _("Clamperl"),
    [SPECIES_HUNTAIL] = _("Huntail"),
    [SPECIES_GOREBYSS] = _("Gorebyss"),
    [SPECIES_ABSOL] = _("Absol"),
    [SPECIES_SHUPPET] = _("Shuppet"),
    [SPECIES_BANETTE] = _("Banette"),
    [SPECIES_SEVIPER] = _("Seviper"),
    [SPECIES_ZANGOOSE] = _("Zangoose"),
    [SPECIES_RELICANTH] = _("Relicanth"),
    [SPECIES_ARON] = _("Aron"),
    [SPECIES_LAIRON] = _("Lairon"),
    [SPECIES_AGGRON] = _("Aggron"),
    [SPECIES_CASTFORM] = _("Castform"),
    [SPECIES_VOLBEAT] = _("Volbeat"),
    [SPECIES_ILLUMISE] = _("Illumise"),
    [SPECIES_LILEEP] = _("Lileep"),
    [SPECIES_CRADILY] = _("Cradily"),
    [SPECIES_ANORITH] = _("Anorith"),
    [SPECIES_ARMALDO] = _("Armaldo"),
    [SPECIES_RALTS] = _("Ralts"),
    [SPECIES_KIRLIA] = _("Kirlia"),
    [SPECIES_GARDEVOIR] = _("Gardevoir"),
    [SPECIES_BAGON] = _("Bagon"),
    [SPECIES_SHELGON] = _("Shelgon"),
    [SPECIES_SALAMENCE] = _("Salamence"),
    [SPECIES_BELDUM] = _("Beldum"),
    [SPECIES_METANG] = _("Metang"),
    [SPECIES_METAGROSS] = _("Metagross"),
    [SPECIES_REGIROCK] = _("Regirock"),
    [SPECIES_REGICE] = _("Regice"),
    [SPECIES_REGISTEEL] = _("Registeel"),
    [SPECIES_KYOGRE] = _("Kyogre"),
    [SPECIES_GROUDON] = _("Groudon"),
    [SPECIES_RAYQUAZA] = _("Rayquaza"),
    [SPECIES_LATIAS] = _("Latias"),
    [SPECIES_LATIOS] = _("Latios"),
    [SPECIES_JIRACHI] = _("Jirachi"),
    [SPECIES_DEOXYS] = _("Deoxys"),
    [SPECIES_CHIMECHO] = _("Chimecho"),
    [SPECIES_BUDEW] = _("Budew"),
    [SPECIES_ROSERADE] = _("Roserade"),
    [SPECIES_AMBIPOM] = _("Ambipom"),
    [SPECIES_MISMAGIUS] = _("Mismagius"),
    [SPECIES_HONCHKROW] = _("Honchkrow"),
    [SPECIES_CHINGLING] = _("Chingling"),
    [SPECIES_BONSLY] = _("Bonsly"),
    [SPECIES_MIME_JR] = _("Mime Jr."),
    [SPECIES_HAPPINY] = _("Happiny"),
    [SPECIES_MUNCHLAX] = _("Munchlax"),
    [SPECIES_MANTYKE] = _("Mantyke"),
    [SPECIES_WEAVILE] = _("Weavile"),
    [SPECIES_MAGNEZONE] = _("Magnezone"),
    [SPECIES_LICKILICKY] = _("Lickilicky"),
    [SPECIES_RHYPERIOR] = _("Rhyperior"),
    [SPECIES_TANGROWTH] = _("Tangrowth"),
    [SPECIES_ELECTIVIRE] = _("Electivire"),
    [SPECIES_MAGMORTAR] = _("Magmortar"),
    [SPECIES_TOGEKISS] = _("Togekiss"),
    [SPECIES_YANMEGA] = _("Yanmega"),
    [SPECIES_LEAFEON] = _("Leafeon"),
    [SPECIES_GLACEON] = _("Glaceon"),
    [SPECIES_SYLVEON] = _("Sylveon"),
    [SPECIES_GLISCOR] = _("Gliscor"),
    [SPECIES_MAMOSWINE] = _("Mamoswine"),
    [SPECIES_PORYGONZ] = _("Porygon-Z"),
    [SPECIES_GALLADE] = _("Gallade"),
    [SPECIES_PROBOPASS] = _("Probopass"),
    [SPECIES_DUSKNOIR] = _("Dusknoir"),
    [SPECIES_FROSLASS] = _("Froslass"),
};
