#ifndef GUARD_DATA_ENCOUNTERS_FISH_H
#define GUARD_DATA_ENCOUNTERS_FISH_H

#define OLD_MIN 5
#define OLD_MAX 15
#define GOOD_MIN 15
#define GOOD_MAX 20
#define SUPER_MIN 35
#define SUPER_MAX 40

const struct WildPokemon DewfordSeaRegion_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_TENTACOOL},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_KRABBY},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_SHELLDER},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_SHELLDER},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_TENTACOOL}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_KRABBY},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_SHELLDER},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_TENTACOOL}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_CHINCHOU},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_CHINCHOU},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_KINGLER},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_KINGLER},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_LANTURN},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_LANTURN},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_LANTURN},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_LANTURN},   //5%
};
const struct WildPokemonInfo DewfordSeaRegion_FishingMonsInfo = {10, DewfordSeaRegion_FishingMons};

const struct WildPokemon PacifidlogSeaRegion_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_TENTACOOL},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_HORSEA},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_LUVDISC},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_LUVDISC},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_TENTACOOL}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_HORSEA},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_TENTACOOL}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_CLAMPERL},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_CLAMPERL},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_KINGDRA},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_KINGDRA},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_CLAMPERL},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_CLAMPERL},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_CLAMPERL},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_CLAMPERL},   //5%
};
const struct WildPokemonInfo PacifidlogSeaRegion_FishingMonsInfo = {10, PacifidlogSeaRegion_FishingMons};

const struct WildPokemon RustboroSeaRegion_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_TENTACOOL},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_REMORAID},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_STARYU},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_STARYU},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_TENTACOOL}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_REMORAID},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_STARYU},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_TENTACOOL}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_QWILFISH},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_QWILFISH},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_OCTILLERY},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_OCTILLERY},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_QWILFISH},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_QWILFISH},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_QWILFISH},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_QWILFISH},   //5%
};
const struct WildPokemonInfo RustboroSeaRegion_FishingMonsInfo = {10, RustboroSeaRegion_FishingMons};

const struct WildPokemon PetalburgLakeRegion_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_GOLDEEN},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_WOOPER},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_GRIMER},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_GRIMER},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_GOLDEEN}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_WOOPER},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_STARYU},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_GOLDEEN}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_CORPHISH},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_CORPHISH},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_GOLDUCK},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_GOLDUCK},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_GOLDUCK},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_CRAWDAUNT},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_CRAWDAUNT},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_CRAWDAUNT},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_CRAWDAUNT},   //5%
};
const struct WildPokemonInfo PetalburgLakeRegion_FishingMonsInfo = {10, PetalburgLakeRegion_FishingMons};

const struct WildPokemon MauvilleLakeRegion_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_GOLDEEN},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_POLIWAG},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_MARILL},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_MARILL},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_GOLDEEN}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_POLIWAG},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_MARILL},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_GOLDEEN}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_GOLDUCK},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_GOLDUCK},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_GOLDUCK},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
};
const struct WildPokemonInfo MauvilleLakeRegion_FishingMonsInfo = {10, MauvilleLakeRegion_FishingMons};

const struct WildPokemon FallarborFortreeLakeRegion_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_GOLDEEN},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_GOLDEEN},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_BARBOACH},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_BARBOACH},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_GOLDEEN}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_POLIWAG},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_BARBOACH},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_GOLDEEN}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_POLIWAG},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_BARBOACH},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_BARBOACH},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WHISCASH},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_WHISCASH},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
};
const struct WildPokemonInfo FallarborFortreeLakeRegion_FishingMonsInfo = {10, FallarborFortreeLakeRegion_FishingMons};

const struct WildPokemon JungleRiverRegion_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_CARVANHA},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_CARVANHA},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_PSYDUCK},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_PSYDUCK},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_CARVANHA}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_CARVANHA},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_CARVANHA},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_CARVANHA}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_PSYDUCK},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_FEEBAS},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_FEEBAS},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_CARVANHA},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_CARVANHA},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_GOLDUCK},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_CARVANHA},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_GOLDUCK},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_FEEBAS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_FEEBAS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_FEEBAS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_FEEBAS},   //5%
};
const struct WildPokemonInfo JungleRiverRegion_FishingMonsInfo = {10, JungleRiverRegion_FishingMons};

const struct WildPokemon LilycoveSeaRegion_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_TENTACOOL},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_KRABBY},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_STARYU},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_STARYU},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_TENTACOOL}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_KRABBY},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_STARYU},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_TENTACOOL}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_WAILMER},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_CORSOLA},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_CORSOLA},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_STARYU},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_KINGLER},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_WAILORD},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_SHARPEDO},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_SHARPEDO},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_CORSOLA},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_CORSOLA},   //5%
};
const struct WildPokemonInfo LilycoveSeaRegion_FishingMonsInfo = {10, LilycoveSeaRegion_FishingMons};

const struct WildPokemon MeteorFallsInterior_FishingMons[] = // Shared by Victory Road
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_GOLDEEN},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_GOLDEEN},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_BARBOACH},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_BARBOACH},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_GOLDEEN}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_POLIWAG},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_BARBOACH},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_GOLDEEN}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_POLIWAG},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_DRATINI},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_DRATINI},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_SEAKING},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_DRATINI},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_DRATINI},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_DRAGONAIR},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_DRAGONAIR},   //5%
};
const struct WildPokemonInfo MeteorFallsInterior_FishingMonsInfo = {10, MeteorFallsInterior_FishingMons};

const struct WildPokemon GraniteCaveInterior_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_LUVDISC},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_LUVDISC},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_LUVDISC},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_LUVDISC},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_LUVDISC},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_LUVDISC},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_LUVDISC},   //5%
};
const struct WildPokemonInfo GraniteCaveInterior_FishingMonsInfo = {10, GraniteCaveInterior_FishingMons};

const struct WildPokemon SafariZone_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_FEEBAS},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_FEEBAS},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_FEEBAS},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_FEEBAS}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_FEEBAS},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_FEEBAS},  //20%
    {10, 15, SPECIES_MAGIKARP}, //10%
    {10, 15, SPECIES_MAGIKARP},   //10%
    {10, 15, SPECIES_MAGIKARP},   //5%
    {10, 15, SPECIES_SQUIRTLE},   //5%
    {10, 15, SPECIES_TOTODILE},  //5%
    {10, 15, SPECIES_MUDKIP},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //20%
    {10, 15, SPECIES_SQUIRTLE},   //20%
    {10, 15, SPECIES_TOTODILE},   //10%
    {10, 15, SPECIES_TOTODILE},   //10%
    {10, 15, SPECIES_MUDKIP},   //5%
    {10, 15, SPECIES_MUDKIP},   //5%
    {10, 15, SPECIES_MUDKIP},   //5%
    {10, 15, SPECIES_MUDKIP},   //5%
};
const struct WildPokemonInfo SafariZone_FishingMonsInfo = {10, SafariZone_FishingMons};

const struct WildPokemon SeafloorCavern_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_OMANYTE}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_KABUTO},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_LILEEP},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_LILEEP},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_ANORITH},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_ANORITH},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_OMANYTE},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_KABUTO},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_LILEEP}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_LILEEP},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_ANORITH},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_ANORITH},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_ANORITH},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_ANORITH},   //5%
};
const struct WildPokemonInfo SeafloorCavern_FishingMonsInfo = {10, SeafloorCavern_FishingMons};

const struct WildPokemon SootopolisCity_FishingMons[] = 
{
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //40%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},  //20%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},     //20%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //10%
    {OLD_MIN, OLD_MAX, SPECIES_MAGIKARP},   //10%
    
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP}, //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},    //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},  //20%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP}, //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},   //10%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},   //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},  //5%
    {GOOD_MIN, GOOD_MAX, SPECIES_MAGIKARP},   //5%
    
    {SUPER_MIN, SUPER_MAX, SPECIES_MAGIKARP},   //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_MAGIKARP},    //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_MAGIKARP},  //20%
    {SUPER_MIN, SUPER_MAX, SPECIES_MAGIKARP}, //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_MAGIKARP},   //10%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},  //5%
    {SUPER_MIN, SUPER_MAX, SPECIES_GYARADOS},   //5%
};
const struct WildPokemonInfo SootopolisCity_FishingMonsInfo = {10, SootopolisCity_FishingMons};

#endif //GUARD_DATA_ENCOUNTERS_FISH_H