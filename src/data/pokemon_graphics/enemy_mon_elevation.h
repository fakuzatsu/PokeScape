// This determines how much higher above the usual position the enemy Pokémon
// is during battle. Species that float or fly have nonzero values.
const u8 gEnemyMonElevation[NUM_SPECIES] =
{
    [SPECIES_BUTTERFREE] = 8,
    [SPECIES_BEEDRILL] = 8,
    [SPECIES_PIDGEY] = 16,
    [SPECIES_PIDGEOT] = 4,
    [SPECIES_FEAROW] = 6,
    [SPECIES_ZUBAT] = 8,
    [SPECIES_GOLBAT] = 8,
    [SPECIES_VENOMOTH] = 8,
    [SPECIES_GEODUDE] = 16,
    [SPECIES_MAGNEMITE] = 16,
    [SPECIES_MAGNETON] = 8,
    [SPECIES_GASTLY] = 4,
    [SPECIES_HAUNTER] = 4,
    [SPECIES_VOLTORB] = 10,
    [SPECIES_ELECTRODE] = 12,
    [SPECIES_KOFFING] = 8,
    [SPECIES_WEEZING] = 6,
    [SPECIES_AERODACTYL] = 7,
    [SPECIES_ARTICUNO] = 6,
    [SPECIES_ZAPDOS] = 8,
    [SPECIES_MOLTRES] = 5,
    [SPECIES_DRAGONITE] = 6,
    [SPECIES_MEW] = 8,
    [SPECIES_LEDIAN] = 8,
    [SPECIES_CROBAT] = 6,
    [SPECIES_HOPPIP] = 11,
    [SPECIES_SKIPLOOM] = 12,
    [SPECIES_JUMPLUFF] = 9,
    [SPECIES_YANMA] = 8,
    [SPECIES_MISDREAVUS] = 8,
    [SPECIES_UNOWN] = 8,
    [SPECIES_GLIGAR] = 6,
    [SPECIES_LUGIA] = 6,
    [SPECIES_HO_OH] = 6,
    [SPECIES_CELEBI] = 15,
    [SPECIES_BEAUTIFLY] = 8,
    [SPECIES_DUSTOX] = 10,
    [SPECIES_NINJASK] = 10,
    [SPECIES_SHEDINJA] = 8,
    [SPECIES_WINGULL] = 16,
    [SPECIES_PELIPPER] = 8,
    [SPECIES_MASQUERAIN] = 10,
    [SPECIES_BALTOY] = 4,
    [SPECIES_CLAYDOL] = 10,
    [SPECIES_FLYGON] = 7,
    [SPECIES_GLALIE] = 12,
    [SPECIES_LUNATONE] = 13,
    [SPECIES_SOLROCK] = 4,
    [SPECIES_SWABLU] = 12,
    [SPECIES_ALTARIA] = 8,
    [SPECIES_DUSKULL] = 9,
    [SPECIES_SHUPPET] = 12,
    [SPECIES_BANETTE] = 8,
    [SPECIES_CASTFORM] = 16,
    [SPECIES_BELDUM] = 8,
    [SPECIES_RAYQUAZA] = 6,
    [SPECIES_LATIAS] = 6,
    [SPECIES_LATIOS] = 6,
    [SPECIES_JIRACHI] = 12,
    [SPECIES_DEOXYS] = 8,
    [SPECIES_CHIMECHO] = 12,
	
//POKESCAPE
	[SPECIES_ZARAVEN] = 9,
	[SPECIES_ZAMOHAWK] = 5,
	[SPECIES_ALBATROSS] = 1,
	[SPECIES_ALBINO_BAT] = 4,
	[SPECIES_ANGLERFISH] = 1,
	[SPECIES_ANICHAIR] = 1,
	[SPECIES_ARMAFALCON] = 9,
	[SPECIES_BASS] = 1,
	[SPECIES_BAT] = 1,
	[SPECIES_BELTFISH] = 1,
	[SPECIES_WYRM] = 4,
	[SPECIES_CATFISH] = 1,
	[SPECIES_CAVE_MORAY] = 6,
	[SPECIES_CAVEFISH] = 1,
	[SPECIES_WOBBEGONG] = 1,
	[SPECIES_WARPED_BAT] = 1,
	[SPECIES_VULTURE] = 1,
	[SPECIES_VILE_FISH] = 1,
	[SPECIES_VAMPYREBAT] = 7,
	[SPECIES_UNGODGEON] = 6,
	[SPECIES_TROUT_TROPICAL_FORM] = 1,
	[SPECIES_TROUT_NORMAL_FORM] = 1,
	[SPECIES_TROUT_LEAPING_FORM] = 1,
	[SPECIES_TOUCAN_TENACIOUS_MALE_FORM] = 1,
	[SPECIES_TOUCAN_TENACIOUS_FEMALE_FORM] = 1,
	[SPECIES_CHAOS_ELE] = 6,
	[SPECIES_CHAOS_ELE_MEGA_FORM] = 7,
	[SPECIES_CHOKEDEVIL] = 4,
	[SPECIES_COD] = 1,
	[SPECIES_CRAYFISH] = 1,
	[SPECIES_DEATHWING] = 1,
	[SPECIES_DESERTSOLE] = 1,
	[SPECIES_DRAGONKITE] = 1,
	[SPECIES_DUST_DEVIL] = 1,
	[SPECIES_EEL_CAVE_FORM] = 1,
	[SPECIES_EEL_DUSK_FORM] = 1,
	[SPECIES_EEL_INFERNAL_FORM] = 7,
	[SPECIES_EEL_LAVA_FORM] = 1,
	[SPECIES_EEL_MOTTLED_FORM] = 1,
	[SPECIES_EEL_SACRED_FORM] = 7,
	[SPECIES_EEL_SALVE_FORM] = 1,
	[SPECIES_EEL_SHORT_FINNED_FORM] = 1,
	[SPECIES_EEL_SLIMY_FORM] = 1,
	[SPECIES_EXORAXE] = 1,
	[SPECIES_FROGSPAWN] = 1,
	[SPECIES_FURY_SHARK] = 1,
	[SPECIES_GIANT_BAT] = 1,
	[SPECIES_GIANT_CARP] = 1,
	[SPECIES_GILBERT] = 1,
	[SPECIES_GOBLINFISH] = 1,
	[SPECIES_GUTHATRICE] = 4,
	[SPECIES_GUTHRAPTOR] = 1,
	[SPECIES_HERRING] = 1,
	[SPECIES_IMPLING_BABY_FORM] = 1,
	[SPECIES_IMPLING_DRAGON_FORM] = 1,
	[SPECIES_IMPLING_KINGLY_FORM] = 1,
	[SPECIES_IMPLING_LUCKY_FORM] = 1,
	[SPECIES_IMPLING_MAGPIE_FORM] = 4,
	[SPECIES_IMPLING_EARTH_FORM] = 1,
	[SPECIES_IMPLING_YOUNG_FORM] = 1,
	[SPECIES_IMPLING_PIRATE_FORM] = 1,
	[SPECIES_IMPLING_ZOMBIE_FORM] = 1,
	[SPECIES_IMPLING_ECLECTIC_FORM] = 1,
	[SPECIES_IMPLING_CRYSTAL_FORM] = 1,
	[SPECIES_IMPLING_ESSENCE_FORM] = 1,
	[SPECIES_IMPLING_DIVINE_FORM] = 1,
	[SPECIES_IMPLING_SPIRIT_FORM] = 1,
	[SPECIES_IMPLING_NATURE_FORM] = 1,
	[SPECIES_JAL_MEJRAH] = 1,
	[SPECIES_JELLYFISH] = 1,
	[SPECIES_JELLYFISH_BLUBBER_FORM] = 1,
	[SPECIES_KARAMBWAN] = 1,
	[SPECIES_KARAMBWANJ] = 1,
	[SPECIES_KERRIT] = 1,
	[SPECIES_KILLERWATT] = 1,
	[SPECIES_MACKEREL] = 1,
	[SPECIES_MAGICARPET] = 1,
	[SPECIES_MANTA_RAY] = 1,
	[SPECIES_MARIONETTE] = 1,
	[SPECIES_MONKEY_GHOST_FORM] = 1,
	[SPECIES_MONKFISH_FRESH_FORM] = 1,
	[SPECIES_MONKFISH_GOLDEN_FORM] = 1,
	[SPECIES_MONKFISH_NORMAL_FORM] = 1,
	[SPECIES_PENGLING] = 1,
	[SPECIES_PENGUIN_MCGRAW_FORM] = 1,
	[SPECIES_PHOENIX_REBORN_FORM] = 1,
	[SPECIES_PIKE] = 1,
	[SPECIES_PURE] = 1,
	[SPECIES_RAINBOW] = 1,
	[SPECIES_RAVEN_NORMAL_FORM] = 7,
	[SPECIES_RAVEN_SPOOKY_FORM] = 1,
	[SPECIES_ROCKTAIL] = 1,
	[SPECIES_RUE] = 1,
	[SPECIES_RUNE] = 1,
	[SPECIES_SAILFISH] = 1,
	[SPECIES_SALMON_LEAPING_FORM] = 1,
	[SPECIES_SALMON_NORMAL_FORM] = 1,
	[SPECIES_SARAOWL] = 4,
	[SPECIES_SARDINE] = 1,
	[SPECIES_SEA_TURTLE] = 1,
	[SPECIES_SEA_TURTLE_TREASURE_FORM] = 3,
	[SPECIES_SEAGULL_HATTENKRAPPER_FORM] = 6,
	[SPECIES_SEERFISH] = 1,
	[SPECIES_SHARK_BARON_FORM] = 1,
	[SPECIES_SHARK_GOLDEN_FORM] = 1,
	[SPECIES_SHARK_GREATWHITE_FORM] = 1,
	[SPECIES_SHARK_NORMAL_FORM] = 1,
	[SPECIES_SHARK_TIGER_FORM] = 1,
	[SPECIES_SHRIMP] = 1,
	[SPECIES_SILLAGO] = 1,
	[SPECIES_SMOKEDEVIL] = 1,
	[SPECIES_SMOKEDEVIL_NUCLEAR_FORM] = 1,
	[SPECIES_SMOKEDEVIL_THERMONUCLEAR_FORM] = 1,
	[SPECIES_SPOOKAXE] = 1,
	[SPECIES_STURGEON] = 1,
	[SPECIES_SWORDFISH] = 1,
	[SPECIES_TARPON] = 1,
	[SPECIES_THALLASUS] = 1,
	[SPECIES_TZ_KIH] = 1,
	[SPECIES_TZ_KIH_SPIRIT_FORM] = 1,
	[SPECIES_WALL_BEAST] = 1,
	[SPECIES_ANCHOVY] = 1,
	[SPECIES_GUTHIXIAN_BUTTERFLY] = 1,
	
	
	
	
};
