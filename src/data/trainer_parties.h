// Trainer party data exists for all of the RS trainer classes, but
// are only filled with one of the following placeholder pokemon.
// The actual FRLG trainer party data starts after these.

// Here's the full TrainerMon struct:
//struct TrainerMon
//{
//	u16 iv;
//	u8 nickname[POKEMON_NAME_LENGTH + 1];
//	u8 ivs[NUM_STATS];
//	u8 lvl;
//	u16 species;
//	u16 heldItem;
//	u16 moves[MAX_MON_MOVES];
//	u8 gender; -> changing gender is broken and messes up shiny status and potentially something else
//	u8 nature; -> changing nature is broken and messes up shiny status and potentially something else
//	u8 ability; -> changing ability doesn't work, always defaults to slot 1 for some reason
//	u8 evs[NUM_STATS];
//	u8 ball;
//	bool32 shiny;
//	u8 friendship;
//}; 

// Here's the basic structure for a trainer:
// static const struct TrainerMon sParty_YoungsterBen[] = {
//	{ .iv = 0, (or .ivs = {31, 31, 31, 31, 31, 31},)
//  .evs = {0, 252, 0, 0, 252, 252},
//  .lvl = LVL_MINUS_1,
//  .species = SPECIES_RATTATA,
//  .heldItem = ITEM_CHARCOAL,
//	.moves = {MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_DIG, MOVE_ICE_BEAM },
//  .nickname = _("DESTROYER"),
//  .shiny = 1,
//  .nature = NATURE_ADAMANT,
//  .friendship = 255,
//  .ball = ITEM_HEAVY_BALL,
//	},

#define DUMMY_TRAINER_MON           \
    {                               \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
    }

#define DUMMY_TRAINER_MON_IV        \
    {                               \
        .iv = 100,                  \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
    }

// Copy of Swimmer Male Finn's party
#define DUMMY_TRAINER_STARMIE       \
    {                               \
        .lvl = 38,                  \
        .species = SPECIES_STARMIE, \
    }

static const struct TrainerMon sParty_AquaLeader[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_AquaGruntM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_AquaGruntF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSAromaLady[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSRuinManiac[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_Interviewer[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSTuberF[] = { DUMMY_TRAINER_STARMIE };
static const struct TrainerMon sParty_RSTuberM[] = { DUMMY_TRAINER_STARMIE };
static const struct TrainerMon sParty_RSCooltrainerM[] = { DUMMY_TRAINER_MON_IV };
static const struct TrainerMon sParty_RSCooltrainerF[] = { DUMMY_TRAINER_MON_IV };
static const struct TrainerMon sParty_HexManiac[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSLady[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSBeauty[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RichBoy[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSPokemaniac[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSSwimmerM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSBlackBelt[] = { DUMMY_TRAINER_MON_IV };
static const struct TrainerMon sParty_Guitarist[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_Kindler[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSCamper[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BugManiac[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSPsychicM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSPsychicF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSGentleman[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_EliteFourSidney[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_EliteFourPhoebe[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_LeaderRoxanne[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_LeaderBrawly[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_LeaderTateLiza[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_SchoolKidM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_SchoolKidF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_SrAndJr[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_PokefanM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_PokefanF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_ExpertM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_ExpertF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSYoungster[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSChampion[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSFisherman[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_CyclingTriathleteM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_CyclingTriathleteF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RunningTriathleteM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RunningTriathleteF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_SwimmingTriathleteM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_SwimmingTriathleteF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_DragonTamer[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSBirdKeeper[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_NinjaBoy[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BattleGirl[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_ParasolLady[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSSwimmerF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSPicnicker[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSTwins[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSSailor[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BoarderM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BoarderF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_Collector[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_Wally[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_Brendan[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_Brendan2[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_Brendan3[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_May[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_May2[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_May3[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSPkmnBreederM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSPkmnBreederF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSPkmnRangerM[] = { DUMMY_TRAINER_MON_IV };
static const struct TrainerMon sParty_RSPkmnRangerF[] = { DUMMY_TRAINER_MON_IV };
static const struct TrainerMon sParty_MagmaLeader[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_MagmaGruntM[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_MagmaGruntF[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSLass[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSBugCatcher[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSHiker[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSYoungCouple[] = { DUMMY_TRAINER_MON, DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_OldCouple[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_RSSisAndBro[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_AquaAdminMatt[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_AquaAdminShelly[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_MagmaAdminTabitha[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_MagmaAdminCourtney[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_LeaderWattson[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_LeaderFlannery[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_LeaderNorman[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_LeaderWinona[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_LeaderWallace[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_EliteFourGlacia[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_EliteFourDrake[] = { DUMMY_TRAINER_MON };

// Start of actual trainer data
static const struct TrainerMon sParty_YoungsterBen[] = {
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_YoungsterCalvin[] = {
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_SPEAROW,
	},
};

static const struct TrainerMon sParty_YoungsterJosh[] = {
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_YoungsterTimmy[] = {
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_SANDSHREW,
	},
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_YoungsterJoey[] = {
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_SPEAROW,
	},
};

static const struct TrainerMon sParty_YoungsterDan[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_SLOWPOKE,
	},
};

static const struct TrainerMon sParty_YoungsterChad[] = {
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_SANDSHREW,
	},
};

static const struct TrainerMon sParty_YoungsterTyler[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_NIDORAN_M,
	},
};

static const struct TrainerMon sParty_YoungsterEddie[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_YoungsterDillon[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_SANDSHREW,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_YoungsterYasu[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_YoungsterDave[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_NIDORINO,
	},
};

static const struct TrainerMon sParty_YoungsterBen2[] = {
	{
		.iv = 20,
		.lvl = 17,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 20,
		.lvl = 17,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_BugCatcherRick[] = {
	{
		.nickname = _("SHITBRICKS"),
		.ivs = BEST_IV_SPREAD_HIDDEN_POWER_ROCK,
		.evs = {252, 252, 252, 252, 252, 252},
		.species = SPECIES_GEODUDE,
		//.nature = NATURE_SERIOUS,
		//.shiny = 1,
		.ball = ITEM_GREAT_BALL,
		//.ability = 1,
		//.gender = MON_MALE,
		.moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE},
		.lvl = LVL_BOSS_MINUS_5,
	},
	{
		.iv = 0,
		.lvl = LVL_MINUS_1,
		//.gender = MON_MALE,
		.shiny = 1,
		.species = SPECIES_HAUNTER,
	},
};

static const struct TrainerMon sParty_BugCatcherDoug[] = {
	{
		.iv = 0,
		.lvl = 7,
		.species = SPECIES_WEEDLE,
	},
	{
		.iv = 0,
		.lvl = 7,
		.species = SPECIES_KAKUNA,
	},
	{
		.iv = 0,
		.lvl = 7,
		.species = SPECIES_WEEDLE,
	},
};

static const struct TrainerMon sParty_BugCatcherSammy[] = {
	{
		.iv = 0,
		.lvl = 9,
		.species = SPECIES_WEEDLE,
	},
};

static const struct TrainerMon sParty_BugCatcherColton[] = {
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_WEEDLE,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_CATERPIE,
	},
};

static const struct TrainerMon sParty_BugCatcherGreg[] = {
	{
		.iv = 0,
		.lvl = 9,
		.species = SPECIES_WEEDLE,
	},
	{
		.iv = 0,
		.lvl = 9,
		.species = SPECIES_KAKUNA,
	},
	{
		.iv = 0,
		.lvl = 9,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 9,
		.species = SPECIES_METAPOD,
	},
};

static const struct TrainerMon sParty_BugCatcherJames[] = {
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_METAPOD,
	},
};

static const struct TrainerMon sParty_BugCatcherKent[] = {
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_WEEDLE,
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_KAKUNA,
	},
};

static const struct TrainerMon sParty_BugCatcherRobby[] = {
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_METAPOD,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_CATERPIE,
	},
};

static const struct TrainerMon sParty_BugCatcherCale[] = {
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_WEEDLE,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_METAPOD,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_KAKUNA,
	},
};

static const struct TrainerMon sParty_BugCatcherKeigo[] = {
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_WEEDLE,
	},
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_WEEDLE,
	},
};

static const struct TrainerMon sParty_BugCatcherElijah[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_BUTTERFREE,
	},
};

static const struct TrainerMon sParty_BugCatcher2[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_METAPOD,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_VENONAT,
	},
};

static const struct TrainerMon sParty_BugCatcherBrent[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_BEEDRILL,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_BEEDRILL,
	},
};

static const struct TrainerMon sParty_BugCatcherConner[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_WEEDLE,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_VENONAT,
	},
};

static const struct TrainerMon sParty_LassJanice[] = {
	{
		.iv = 0,
		.lvl = 9,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 9,
		.species = SPECIES_PIDGEY,
	},
};

static const struct TrainerMon sParty_LassSally[] = {
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_LassRobin[] = {
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_JIGGLYPUFF,
	},
};

static const struct TrainerMon sParty_LassCrissy[] = {
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_PARAS,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_PARAS,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_PARASECT,
	},
};

static const struct TrainerMon sParty_LassMiriam[] = {
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_BELLSPROUT,
	},
};

static const struct TrainerMon sParty_LassIris[] = {
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_CLEFAIRY,
	},
};

static const struct TrainerMon sParty_LassReli[] = {
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_LassAli[] = {
	{
		.iv = 0,
		.lvl = 12,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 12,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 12,
		.species = SPECIES_BELLSPROUT,
	},
};

static const struct TrainerMon sParty_Lass2[] = {
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_LassHaley[] = {
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_ODDISH,
	},
};

static const struct TrainerMon sParty_LassAnn[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_LassDawn[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_PIKACHU,
	},
};

static const struct TrainerMon sParty_LassPaige[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_NIDORAN_F,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_NIDORINA,
	},
};

static const struct TrainerMon sParty_LassAndrea[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MEOWTH,
	},
};

static const struct TrainerMon sParty_LassMegan[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_PIKACHU,
	},
};

static const struct TrainerMon sParty_LassJulia[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_CLEFAIRY,
	},
};

static const struct TrainerMon sParty_LassKay[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_WEEPINBELL,
	},
};

static const struct TrainerMon sParty_LassLisa[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_GLOOM,
	},
};

static const struct TrainerMon sParty_SailorEdmond[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_SHELLDER,
	},
};

static const struct TrainerMon sParty_SailorTrevor[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_TENTACOOL,
	},
};

static const struct TrainerMon sParty_SailorLeonard[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_SHELLDER,
	},
};

static const struct TrainerMon sParty_SailorDuncan[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_SHELLDER,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_TENTACOOL,
	},
};

static const struct TrainerMon sParty_SailorHuey[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_STARYU,
	},
};

static const struct TrainerMon sParty_SailorDylan[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_HORSEA,
	},
};

static const struct TrainerMon sParty_SailorPhillip[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MACHOP,
	},
};

static const struct TrainerMon sParty_SailorDwayne[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_PIKACHU,
	},
};

static const struct TrainerMon sParty_CamperLiam[] = {
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_GEODUDE,
		.moves = { MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE },
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_SANDSHREW,
		.moves = { MOVE_SCRATCH, MOVE_DEFENSE_CURL, MOVE_SAND_ATTACK, MOVE_NONE },
	},
};

static const struct TrainerMon sParty_CamperShane[] = {
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_CamperEthan[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_MANKEY,
	},
};

static const struct TrainerMon sParty_CamperRicky[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_SQUIRTLE,
	},
};

static const struct TrainerMon sParty_CamperJeff[] = {
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_Camper2[] = { DUMMY_TRAINER_MON };

static const struct TrainerMon sParty_CamperChris[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_CHARMANDER,
	},
};

static const struct TrainerMon sParty_CamperDrew[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_SANDSHREW,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_SANDSHREW,
	},
};

static const struct TrainerMon sParty_PicnickerDiana[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_GOLDEEN,
	},
};

static const struct TrainerMon sParty_PicnickerNancy[] = {
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_PIKACHU,
	},
};

static const struct TrainerMon sParty_PicnickerIsabelle[] = {
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_PIDGEY,
	},
};

static const struct TrainerMon sParty_PicnickerKelsey[] = {
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_PicnickerAlicia[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_BELLSPROUT,
	},
};

static const struct TrainerMon sParty_PicnickerCaitlin[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_MEOWTH,
	},
};

static const struct TrainerMon sParty_PicnickerHeidi[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_CLEFAIRY,
	},
};

static const struct TrainerMon sParty_PicnickerCarol[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_PicnickerSofia[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_JIGGLYPUFF,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_MEOWTH,
	},
};

static const struct TrainerMon sParty_PicnickerMartha[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_BULBASAUR,
	},
};

static const struct TrainerMon sParty_PicnickerTina[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_BULBASAUR,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_IVYSAUR,
	},
};

static const struct TrainerMon sParty_PicnickerHannah[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MEOWTH,
	},
};

static const struct TrainerMon sParty_PokemaniacMark[] = {
	{
		.iv = 30,
		.lvl = 29,
		.species = SPECIES_RHYHORN,
	},
	{
		.iv = 30,
		.lvl = 29,
		.species = SPECIES_LICKITUNG,
	},
};

static const struct TrainerMon sParty_PokemaniacHerman[] = {
	{
		.iv = 30,
		.lvl = 20,
		.species = SPECIES_CUBONE,
	},
	{
		.iv = 30,
		.lvl = 20,
		.species = SPECIES_SLOWPOKE,
	},
};

static const struct TrainerMon sParty_PokemaniacCooper[] = {
	{
		.iv = 30,
		.lvl = 20,
		.species = SPECIES_SLOWPOKE,
	},
	{
		.iv = 30,
		.lvl = 20,
		.species = SPECIES_SLOWPOKE,
	},
	{
		.iv = 30,
		.lvl = 20,
		.species = SPECIES_SLOWPOKE,
	},
};

static const struct TrainerMon sParty_PokemaniacSteve[] = {
	{
		.iv = 30,
		.lvl = 22,
		.species = SPECIES_CHARMANDER,
	},
	{
		.iv = 30,
		.lvl = 22,
		.species = SPECIES_CUBONE,
	},
};

static const struct TrainerMon sParty_PokemaniacWinston[] = {
	{
		.iv = 30,
		.lvl = 25,
		.species = SPECIES_SLOWPOKE,
	},
};

static const struct TrainerMon sParty_PokemaniacDawson[] = {
	{
		.iv = 30,
		.lvl = 40,
		.species = SPECIES_CHARMELEON,
	},
	{
		.iv = 30,
		.lvl = 40,
		.species = SPECIES_LAPRAS,
	},
	{
		.iv = 30,
		.lvl = 40,
		.species = SPECIES_LICKITUNG,
	},
};

static const struct TrainerMon sParty_PokemaniacAshton[] = {
	{
		.iv = 30,
		.lvl = 23,
		.species = SPECIES_CUBONE,
	},
	{
		.iv = 30,
		.lvl = 23,
		.species = SPECIES_SLOWPOKE,
	},
};

static const struct TrainerMon sParty_SuperNerdJovan[] = {
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_VOLTORB,
	},
};

static const struct TrainerMon sParty_SuperNerdMiguel[] = {
	{
		.iv = 0,
		.lvl = 12,
		.species = SPECIES_GRIMER,
	},
	{
		.iv = 0,
		.lvl = 12,
		.species = SPECIES_VOLTORB,
	},
	{
		.iv = 0,
		.lvl = 12,
		.species = SPECIES_KOFFING,
	},
};

static const struct TrainerMon sParty_SuperNerdAidan[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE },
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS },
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE },
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MAGNEMITE,
		.moves = { MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_SuperNerdGlenn[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GRIMER,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_MUK,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GRIMER,
	},
};

static const struct TrainerMon sParty_SuperNerdLeslie[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_SELF_DESTRUCT },
	},
};

static const struct TrainerMon sParty_SuperNerd1[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_KOFFING,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_WEEZING,
	},
};

static const struct TrainerMon sParty_SuperNerd2[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_KOFFING,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MAGNEMITE,
	},
};

static const struct TrainerMon sParty_SuperNerd3[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_VOLTORB,
	},
};

static const struct TrainerMon sParty_SuperNerdErik[] = {
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_VULPIX,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_VULPIX,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_NINETALES,
	},
};

static const struct TrainerMon sParty_SuperNerdAvery[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_PONYTA,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_CHARMANDER,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_VULPIX,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_GROWLITHE,
	},
};

static const struct TrainerMon sParty_SuperNerdDerek[] = {
	{
		.iv = 0,
		.lvl = 41,
		.species = SPECIES_RAPIDASH,
	},
};

static const struct TrainerMon sParty_SuperNerdZac[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_VULPIX,
	},
};

static const struct TrainerMon sParty_HikerMarcos[] = {
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_GEODUDE,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_GEODUDE,
	},
	{
		.iv = 0,
		.lvl = 10,
		.species = SPECIES_ONIX,
	},
};

static const struct TrainerMon sParty_HikerFranklin[] = {
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_GEODUDE,
	},
};

static const struct TrainerMon sParty_HikerNob[] = {
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_GEODUDE,
	},
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_GEODUDE,
	},
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_GEODUDE,
	},
};

static const struct TrainerMon sParty_HikerWayne[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_ONIX,
	},
};

static const struct TrainerMon sParty_HikerAlan[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GEODUDE,
		.moves = { MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_ONIX,
		.moves = { MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH },
	},
};

static const struct TrainerMon sParty_HikerBrice[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_GEODUDE,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_GEODUDE,
	},
};

static const struct TrainerMon sParty_HikerClark[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GEODUDE,
		.moves = { MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_ONIX,
		.moves = { MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH },
	},
};

static const struct TrainerMon sParty_HikerTrent[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_GRAVELER,
	},
};

static const struct TrainerMon sParty_HikerDudley[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GEODUDE,
		.moves = { MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GEODUDE,
		.moves = { MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GRAVELER,
		.moves = { MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
};

static const struct TrainerMon sParty_HikerAllen[] = {
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_GEODUDE,
		.moves = { MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
};

static const struct TrainerMon sParty_HikerEric[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_ONIX,
	},
};

static const struct TrainerMon sParty_HikerLenny[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_GEODUDE,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_GEODUDE,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_GEODUDE,
	},
};

static const struct TrainerMon sParty_HikerOliver[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_GEODUDE,
	},
};

static const struct TrainerMon sParty_HikerLucas[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GEODUDE,
		.moves = { MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GRAVELER,
		.moves = { MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
};

static const struct TrainerMon sParty_BikerJared[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_POISON_GAS },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_BikerMalik[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
};

static const struct TrainerMon sParty_BikerErnest[] = {
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND },
	},
};

static const struct TrainerMon sParty_BikerAlex[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_BikerLao[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_Biker1[] = { DUMMY_TRAINER_MON };

static const struct TrainerMon sParty_BikerHideo[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_WEEZING,
	},
};

static const struct TrainerMon sParty_BikerRuben[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_BikerBilly[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_MUK,
	},
};

static const struct TrainerMon sParty_BikerNikolas[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE },
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE },
	},
};

static const struct TrainerMon sParty_BikerJaxon[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MUK,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
};

static const struct TrainerMon sParty_BikerWilliam[] = {
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_BikerLukas[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_BikerIsaac[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_BikerGerald[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MUK,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
};

static const struct TrainerMon sParty_Burglar1[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_VULPIX,
	},
};

static const struct TrainerMon sParty_Burglar2[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_GROWLITHE,
	},
};

static const struct TrainerMon sParty_Burglar3[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_VULPIX,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_CHARMANDER,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_PONYTA,
	},
};

static const struct TrainerMon sParty_BurglarQuinn[] = {
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_VULPIX,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_NINETALES,
	},
};

static const struct TrainerMon sParty_BurglarRamon[] = {
	{
		.iv = 0,
		.lvl = 41,
		.species = SPECIES_PONYTA,
	},
};

static const struct TrainerMon sParty_BurglarDusty[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_VULPIX,
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_GROWLITHE,
	},
};

static const struct TrainerMon sParty_BurglarArnie[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_CHARMANDER,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_CHARMELEON,
	},
};

static const struct TrainerMon sParty_Burglar4[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_CHARMANDER,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_CHARMELEON,
	},
};

static const struct TrainerMon sParty_BurglarSimon[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_NINETALES,
	},
};

static const struct TrainerMon sParty_BurglarLewis[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_PONYTA,
	},
};

static const struct TrainerMon sParty_EngineerBaily[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_VOLTORB,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_MAGNEMITE,
	},
};

static const struct TrainerMon sParty_EngineerBraxton[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_MAGNEMITE,
	},
};

static const struct TrainerMon sParty_EngineerBernie[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_MAGNETON,
	},
};

static const struct TrainerMon sParty_FishermanDale[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_GOLDEEN,
	},
};

static const struct TrainerMon sParty_FishermanBarny[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_STARYU,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_SHELLDER,
	},
};

static const struct TrainerMon sParty_FishermanNed[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GOLDEEN,
	},
};

static const struct TrainerMon sParty_FishermanChip[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GOLDEEN,
	},
};

static const struct TrainerMon sParty_FishermanHank[] = {
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_GOLDEEN,
	},
};

static const struct TrainerMon sParty_FishermanElliot[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_SHELLDER,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_HORSEA,
	},
};

static const struct TrainerMon sParty_FishermanRonald[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_FishermanClaude[] = {
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_SHELLDER,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_CLOYSTER,
	},
};

static const struct TrainerMon sParty_FishermanWade[] = {
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_MAGIKARP,
	},
};

static const struct TrainerMon sParty_FishermanNolan[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_GOLDEEN,
	},
};

static const struct TrainerMon sParty_FishermanAndrew[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MAGIKARP,
	},
};

static const struct TrainerMon sParty_SwimmerMaleLuis[] = {
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 16,
		.species = SPECIES_SHELLDER,
	},
};

static const struct TrainerMon sParty_SwimmerMaleRichard[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_SHELLDER,
	},
};

static const struct TrainerMon sParty_SwimmerMaleReece[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_STARYU,
	},
};

static const struct TrainerMon sParty_SwimmerMaleMatthew[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_POLIWHIRL,
	},
};

static const struct TrainerMon sParty_SwimmerMaleDouglas[] = {
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_GOLDEEN,
	},
};

static const struct TrainerMon sParty_SwimmerMaleDavid[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_SHELLDER,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_SwimmerMaleTony[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_HORSEA,
	},
};

static const struct TrainerMon sParty_SwimmerMaleAxle[] = {
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_STARYU,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_TENTACRUEL,
	},
};

static const struct TrainerMon sParty_SwimmerMaleBarry[] = {
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_SHELLDER,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_CLOYSTER,
	},
};

static const struct TrainerMon sParty_SwimmerMaleDean[] = {
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_STARYU,
	},
};

static const struct TrainerMon sParty_SwimmerMaleDarrin[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_HORSEA,
	},
};

static const struct TrainerMon sParty_SwimmerMaleSpencer[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_TENTACRUEL,
	},
};

static const struct TrainerMon sParty_SwimmerMaleJack[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_STARMIE,
	},
};

static const struct TrainerMon sParty_SwimmerMaleJerome[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_STARYU,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_WARTORTLE,
	},
};

static const struct TrainerMon sParty_SwimmerMaleRoland[] = {
	{
		.iv = 0,
		.lvl = 32,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 0,
		.lvl = 32,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 32,
		.species = SPECIES_SEADRA,
	},
};

static const struct TrainerMon sParty_CueBallKoji[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_MANKEY,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_MACHOP,
	},
};

static const struct TrainerMon sParty_CueBallLuke[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MANKEY,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MACHOP,
	},
};

static const struct TrainerMon sParty_CueBallCamron[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MANKEY,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MACHOP,
	},
};

static const struct TrainerMon sParty_CueBallRaul[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MANKEY,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_PRIMEAPE,
	},
};

static const struct TrainerMon sParty_CueBallIsaiah[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MACHAMP,
	},
};

static const struct TrainerMon sParty_CueBallZeek[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_CueBallJamal[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_MANKEY,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_MANKEY,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_MACHAMP,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_MACHOP,
	},
};

static const struct TrainerMon sParty_CueBallCorey[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_PRIMEAPE,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_CueBallChase[] = {
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_TENTACRUEL,
	},
};

static const struct TrainerMon sParty_GamerHugo[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_HORSEA,
	},
};

static const struct TrainerMon sParty_GamerJasper[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_ODDISH,
	},
};

static const struct TrainerMon sParty_GamerDirk[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_VOLTORB,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_MAGNEMITE,
	},
};

static const struct TrainerMon sParty_GamerDarian[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_VULPIX,
	},
};

static const struct TrainerMon sParty_GamerStan[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_POLIWHIRL,
	},
};

static const struct TrainerMon sParty_Gamer1[] = { DUMMY_TRAINER_MON };

static const struct TrainerMon sParty_GamerRich[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_VULPIX,
	},
};

static const struct TrainerMon sParty_BeautyBridget[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_BELLSPROUT,
	},
};

static const struct TrainerMon sParty_BeautyTamia[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_BELLSPROUT,
	},
};

static const struct TrainerMon sParty_BeautyLori[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_EXEGGCUTE,
	},
};

static const struct TrainerMon sParty_BeautyLola[] = {
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_RATTATA,
	},
};

static const struct TrainerMon sParty_BeautySheila[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MEOWTH,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleTiffany[] = {
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleNora[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_SHELLDER,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_SHELLDER,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_CLOYSTER,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleMelissa[] = {
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_BeautyGrace[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_WIGGLYTUFF,
	},
};

static const struct TrainerMon sParty_BeautyOlivia[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_BULBASAUR,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_IVYSAUR,
	},
};

static const struct TrainerMon sParty_BeautyLauren[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_WEEPINBELL,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_WEEPINBELL,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleAnya[] = {
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_POLIWAG,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleAlice[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleConnie[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_STARYU,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_STARYU,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_STARYU,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleShirley[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_SEADRA,
	},
};

static const struct TrainerMon sParty_PsychicJohan[] = {
	{
		.iv = 50,
		.lvl = 31,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 50,
		.lvl = 31,
		.species = SPECIES_SLOWPOKE,
	},
	{
		.iv = 50,
		.lvl = 31,
		.species = SPECIES_MR_MIME,
	},
	{
		.iv = 50,
		.lvl = 31,
		.species = SPECIES_KADABRA,
	},
};

static const struct TrainerMon sParty_PsychicTyron[] = {
	{
		.iv = 50,
		.lvl = 34,
		.species = SPECIES_MR_MIME,
	},
	{
		.iv = 50,
		.lvl = 34,
		.species = SPECIES_KADABRA,
	},
};

static const struct TrainerMon sParty_PsychicCameron[] = {
	{
		.iv = 50,
		.lvl = 33,
		.species = SPECIES_SLOWPOKE,
	},
	{
		.iv = 50,
		.lvl = 33,
		.species = SPECIES_SLOWPOKE,
	},
	{
		.iv = 50,
		.lvl = 33,
		.species = SPECIES_SLOWBRO,
	},
};

static const struct TrainerMon sParty_PsychicPreston[] = {
	{
		.iv = 50,
		.lvl = 38,
		.species = SPECIES_SLOWBRO,
	},
};

static const struct TrainerMon sParty_RockerRandall[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_VOLTORB,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_VOLTORB,
	},
};

static const struct TrainerMon sParty_RockerLuca[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_VOLTORB,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_ELECTRODE,
	},
};

static const struct TrainerMon sParty_JugglerDalton[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MR_MIME,
	},
};

static const struct TrainerMon sParty_JugglerNelson[] = {
	{
		.iv = 0,
		.lvl = 41,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 41,
		.species = SPECIES_HYPNO,
	},
	{
		.iv = 0,
		.lvl = 41,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 0,
		.lvl = 41,
		.species = SPECIES_KADABRA,
	},
};

static const struct TrainerMon sParty_JugglerKirk[] = {
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_DROWZEE,
	},
};

static const struct TrainerMon sParty_JugglerShawn[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_HYPNO,
	},
};

static const struct TrainerMon sParty_JugglerGregory[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_MR_MIME,
		.moves = { MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_DOUBLE_SLAP, MOVE_ENCORE },
	},
};

static const struct TrainerMon sParty_JugglerEdward[] = {
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM },
	},
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM },
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_ELECTRODE,
		.moves = { MOVE_SWIFT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SONIC_BOOM },
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_MR_MIME,
		.moves = { MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_REFLECT, MOVE_ENCORE },
	},
};

static const struct TrainerMon sParty_JugglerKayden[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_HYPNO,
	},
};

static const struct TrainerMon sParty_JugglerNate[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_KADABRA,
	},
};

static const struct TrainerMon sParty_TamerPhil[] = {
	{
		.iv = 40,
		.lvl = 34,
		.species = SPECIES_SANDSLASH,
	},
	{
		.iv = 40,
		.lvl = 34,
		.species = SPECIES_ARBOK,
	},
};

static const struct TrainerMon sParty_TamerEdgar[] = {
	{
		.iv = 40,
		.lvl = 33,
		.species = SPECIES_ARBOK,
	},
	{
		.iv = 40,
		.lvl = 33,
		.species = SPECIES_SANDSLASH,
	},
	{
		.iv = 40,
		.lvl = 33,
		.species = SPECIES_ARBOK,
	},
};

static const struct TrainerMon sParty_TamerJason[] = {
	{
		.iv = 40,
		.lvl = 43,
		.species = SPECIES_RHYHORN,
	},
};

static const struct TrainerMon sParty_TamerCole[] = {
	{
		.iv = 40,
		.lvl = 39,
		.species = SPECIES_ARBOK,
	},
	{
		.iv = 40,
		.lvl = 39,
		.species = SPECIES_TAUROS,
	},
};

static const struct TrainerMon sParty_TamerVincent[] = {
	{
		.iv = 40,
		.lvl = 44,
		.species = SPECIES_PERSIAN,
	},
	{
		.iv = 40,
		.lvl = 44,
		.species = SPECIES_GOLDUCK,
	},
};

static const struct TrainerMon sParty_TamerJohn[] = {
	{
		.iv = 40,
		.lvl = 42,
		.species = SPECIES_RHYHORN,
	},
	{
		.iv = 40,
		.lvl = 42,
		.species = SPECIES_PRIMEAPE,
	},
	{
		.iv = 40,
		.lvl = 42,
		.species = SPECIES_ARBOK,
	},
	{
		.iv = 40,
		.lvl = 42,
		.species = SPECIES_TAUROS,
	},
};

static const struct TrainerMon sParty_BirdKeeperSebastian[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_BirdKeeperPerry[] = {
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_SPEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperRobert[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperDonald[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_FARFETCHD,
	},
};

static const struct TrainerMon sParty_BirdKeeperBenny[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperEdwin[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_FARFETCHD,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_DODUO,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_PIDGEY,
	},
};

static const struct TrainerMon sParty_BirdKeeperChester[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_DODRIO,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_DODUO,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_DODUO,
	},
};

static const struct TrainerMon sParty_BirdKeeperWilton[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperRamiro[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_DODRIO,
	},
};

static const struct TrainerMon sParty_BirdKeeperJacob[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_SPEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperRoger[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_BirdKeeperReed[] = {
	{
		.iv = 0,
		.lvl = 39,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 0,
		.lvl = 39,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 0,
		.lvl = 39,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 39,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_BirdKeeperKeith[] = {
	{
		.iv = 0,
		.lvl = 39,
		.species = SPECIES_FARFETCHD,
	},
	{
		.iv = 0,
		.lvl = 39,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperCarter[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_DODUO,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_BirdKeeperMitch[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperBeck[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperMarlon[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_DODUO,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BlackBeltKoichi[] = {
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltMike[] = {
	{
		.iv = 100,
		.lvl = 31,
		.species = SPECIES_MANKEY,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 31,
		.species = SPECIES_MANKEY,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 31,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltHideki[] = {
	{
		.iv = 100,
		.lvl = 32,
		.species = SPECIES_MACHOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 32,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltAaron[] = {
	{
		.iv = 100,
		.lvl = 36,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltHitoshi[] = {
	{
		.iv = 100,
		.lvl = 31,
		.species = SPECIES_MACHOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 31,
		.species = SPECIES_MANKEY,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 31,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltAtsushi[] = {
	{
		.iv = 100,
		.lvl = 40,
		.species = SPECIES_MACHOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 40,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltKiyo[] = {
	{
		.iv = 100,
		.lvl = 43,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltTakashi[] = {
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_MACHOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltDaisuke[] = {
	{
		.iv = 100,
		.lvl = 43,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 43,
		.species = SPECIES_MACHOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 43,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_RivalOaksLabSquirtle[] = {
	{
		.iv = 0,
		.lvl = 5,
		.species = SPECIES_SQUIRTLE,
	},
};

static const struct TrainerMon sParty_RivalOaksLabBulbasaur[] = {
	{
		.iv = 0,
		.lvl = 5,
		.species = SPECIES_BULBASAUR,
	},
};

static const struct TrainerMon sParty_RivalOaksLabCharmander[] = {
	{
		.iv = 0,
		.lvl = 5,
		.species = SPECIES_CHARMANDER,
	},
};

static const struct TrainerMon sParty_RivalRoute22EarlySquirtle[] = {
	{
		.iv = 50,
		.lvl = 9,
		.species = SPECIES_PIDGEY,
		.moves = { MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_NONE, MOVE_NONE },
	},
	{
		.iv = 50,
		.lvl = 9,
		.species = SPECIES_SQUIRTLE,
		.moves = { MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE },
	},
};

static const struct TrainerMon sParty_RivalRoute22EarlyBulbasaur[] = {
	{
		.iv = 50,
		.lvl = 9,
		.species = SPECIES_PIDGEY,
		.moves = { MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_NONE, MOVE_NONE },
	},
	{
		.iv = 50,
		.lvl = 9,
		.species = SPECIES_BULBASAUR,
		.moves = { MOVE_TACKLE, MOVE_GROWL, MOVE_NONE, MOVE_NONE },
	},
};

static const struct TrainerMon sParty_RivalRoute22EarlyCharmander[] = {
	{
		.iv = 50,
		.lvl = 9,
		.species = SPECIES_PIDGEY,
		.moves = { MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_NONE, MOVE_NONE },
	},
	{
		.iv = 50,
		.lvl = 9,
		.species = SPECIES_CHARMANDER,
		.moves = { MOVE_SCRATCH, MOVE_GROWL, MOVE_NONE, MOVE_NONE },
	},
};

static const struct TrainerMon sParty_RivalCeruleanSquirtle[] = {
	{
		.iv = 50,
		.lvl = 17,
		.species = SPECIES_PIDGEOTTO,
		.moves = { MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 50,
		.lvl = 16,
		.species = SPECIES_ABRA,
		.moves = { MOVE_TELEPORT, MOVE_NONE, MOVE_NONE, MOVE_NONE },
	},
	{
		.iv = 50,
		.lvl = 15,
		.species = SPECIES_RATTATA,
		.moves = { MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE },
	},
	{
		.iv = 100,
		.lvl = 18,
		.species = SPECIES_SQUIRTLE,
		.moves = { MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_WITHDRAW, MOVE_WATER_GUN },
	},
};

static const struct TrainerMon sParty_RivalCeruleanBulbasaur[] = {
	{
		.iv = 50,
		.lvl = 17,
		.species = SPECIES_PIDGEOTTO,
		.moves = { MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 50,
		.lvl = 16,
		.species = SPECIES_ABRA,
		.moves = { MOVE_TELEPORT, MOVE_NONE, MOVE_NONE, MOVE_NONE },
	},
	{
		.iv = 50,
		.lvl = 15,
		.species = SPECIES_RATTATA,
		.moves = { MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE },
	},
	{
		.iv = 100,
		.lvl = 18,
		.species = SPECIES_BULBASAUR,
		.moves = { MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_VINE_WHIP, MOVE_LEECH_SEED },
	},
};

static const struct TrainerMon sParty_RivalCeruleanCharmander[] = {
	{
		.iv = 50,
		.lvl = 17,
		.species = SPECIES_PIDGEOTTO,
		.moves = { MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 50,
		.lvl = 16,
		.species = SPECIES_ABRA,
		.moves = { MOVE_TELEPORT, MOVE_NONE, MOVE_NONE, MOVE_NONE },
	},
	{
		.iv = 50,
		.lvl = 15,
		.species = SPECIES_RATTATA,
		.moves = { MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE },
	},
	{
		.iv = 100,
		.lvl = 18,
		.species = SPECIES_CHARMANDER,
		.moves = { MOVE_METAL_CLAW, MOVE_EMBER, MOVE_GROWL, MOVE_SCRATCH },
	},
};

static const struct TrainerMon sParty_ScientistTed[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_ELECTRODE,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_WEEZING,
	},
};

static const struct TrainerMon sParty_ScientistConnor[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELF_DESTRUCT },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_ScientistJerry[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_VOLTORB,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_MAGNETON,
	},
};

static const struct TrainerMon sParty_ScientistJose[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_ELECTRODE,
		.moves = { MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_ScientistRodney[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_ELECTRODE,
	},
};

static const struct TrainerMon sParty_ScientistBeau[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_MAGNETON,
		.moves = { MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_MAGNEMITE,
		.moves = { MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC },
	},
};

static const struct TrainerMon sParty_ScientistTaylor[] = {
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_MAGNETON,
		.moves = { MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_MAGNEMITE,
		.moves = { MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK },
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELF_DESTRUCT },
	},
};

static const struct TrainerMon sParty_ScientistJoshua[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_ELECTRODE,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MUK,
	},
};

static const struct TrainerMon sParty_ScientistParker[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_GRIMER,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_ELECTRODE,
	},
};

static const struct TrainerMon sParty_ScientistEd[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE, MOVE_SMOG },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_MAGNETON,
		.moves = { MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC },
	},
};

static const struct TrainerMon sParty_ScientistTravis[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_KOFFING,
	},
};

static const struct TrainerMon sParty_ScientistBraydon[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_MAGNETON,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_VOLTORB,
	},
};

static const struct TrainerMon sParty_ScientistIvan[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_MAGNEMITE,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_ELECTRODE,
	},
};

static const struct TrainerMon sParty_BossGiovanni[] = {
	{
		.iv = 250,
		.lvl = 25,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 250,
		.lvl = 24,
		.species = SPECIES_RHYHORN,
	},
	{
		.iv = 250,
		.lvl = 29,
		.species = SPECIES_KANGASKHAN,
	},
};

static const struct TrainerMon sParty_BossGiovanni2[] = {
	{
		.iv = 250,
		.lvl = 37,
		.species = SPECIES_NIDORINO,
	},
	{
		.iv = 250,
		.lvl = 35,
		.species = SPECIES_KANGASKHAN,
	},
	{
		.iv = 250,
		.lvl = 37,
		.species = SPECIES_RHYHORN,
	},
	{
		.iv = 250,
		.lvl = 41,
		.species = SPECIES_NIDOQUEEN,
	},
};

static const struct TrainerMon sParty_LeaderGiovanni[] = {
	{
		.iv = 0,
		.lvl = 45,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_EARTHQUAKE },
	},
	{
		.iv = 0,
		.lvl = 42,
		.species = SPECIES_DUGTRIO,
		.moves = { MOVE_SLASH, MOVE_SAND_TOMB, MOVE_MUD_SLAP, MOVE_EARTHQUAKE },
	},
	{
		.iv = 0,
		.lvl = 44,
		.species = SPECIES_NIDOQUEEN,
		.moves = { MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_EARTHQUAKE },
	},
	{
		.iv = 0,
		.lvl = 45,
		.species = SPECIES_NIDOKING,
		.moves = { MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_EARTHQUAKE },
	},
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_EARTHQUAKE },
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt[] = {
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt2[] = {
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_SANDSHREW,
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt3[] = {
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 11,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt4[] = {
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 13,
		.species = SPECIES_SANDSHREW,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt5[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_DROWZEE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt6[] = {
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 0,
		.lvl = 15,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt7[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt8[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_MACHOP,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt9[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt10[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN },
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE },
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE },
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt11[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_RATTATA,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt12[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN },
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS },
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt13[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_ZUBAT,
		.moves = { MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE },
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE },
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN, MOVE_POUND },
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_ZUBAT,
		.moves = { MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE },
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_RATICATE,
		.moves = { MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt14[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_DROWZEE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt15[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_MACHOP,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt16[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_SANDSHREW,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_SANDSLASH,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt17[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_SANDSHREW,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_ARBOK,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt18[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_KOFFING,
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt19[] = {
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_GOLBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt20[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_DROWZEE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt21[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt22[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt23[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_CUBONE,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt24[] = {
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_GOLBAT,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt25[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_HYPNO,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt26[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_DROWZEE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt27[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_CUBONE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt28[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_ARBOK,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt29[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_HYPNO,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt30[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt31[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GOLBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt32[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_RATICATE,
		.moves = { MOVE_SCARY_FACE, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_ARBOK,
		.moves = { MOVE_GLARE, MOVE_BITE, MOVE_POISON_STING, MOVE_LEER },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_GOLBAT,
		.moves = { MOVE_WING_ATTACK, MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC },
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt33[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_CUBONE,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_CUBONE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt34[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_SANDSHREW,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_SANDSLASH,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt35[] = {
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_GOLBAT,
	},
	{
		.iv = 0,
		.lvl = 26,
		.species = SPECIES_RATTATA,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt36[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_WEEZING,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GOLBAT,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt37[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GRIMER,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_MACHOP,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt38[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GOLBAT,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_HYPNO,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt39[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt40[] = {
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 25,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt41[] = {
	{
		.iv = 0,
		.lvl = 32,
		.species = SPECIES_CUBONE,
	},
	{
		.iv = 0,
		.lvl = 32,
		.species = SPECIES_DROWZEE,
	},
	{
		.iv = 0,
		.lvl = 32,
		.species = SPECIES_MAROWAK,
	},
};

static const struct TrainerMon sParty_CooltrainerSamuel[] = {
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_SANDSLASH,
		.moves = { MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING },
	},
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_SANDSLASH,
		.moves = { MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING },
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE },
	},
	{
		.iv = 100,
		.lvl = 39,
		.species = SPECIES_NIDORINO,
		.moves = { MOVE_FURY_ATTACK, MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_DOUBLE_KICK },
	},
	{
		.iv = 100,
		.lvl = 39,
		.species = SPECIES_NIDOKING,
		.moves = { MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_FOCUS_ENERGY },
	},
};

static const struct TrainerMon sParty_CooltrainerGeorge[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_EXEGGUTOR,
		.moves = { MOVE_EGG_BOMB, MOVE_CONFUSION, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_SANDSLASH,
		.moves = { MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_POISON_STING, MOVE_SAND_ATTACK },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_CLOYSTER,
		.moves = { MOVE_SPIKE_CANNON, MOVE_SPIKES, MOVE_AURORA_BEAM, MOVE_SUPERSONIC },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_ELECTRODE,
		.moves = { MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_LIGHT_SCREEN },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_ARCANINE,
		.moves = { MOVE_FLAME_WHEEL, MOVE_ROAR, MOVE_BITE, MOVE_TAKE_DOWN },
	},
};

static const struct TrainerMon sParty_CooltrainerColby[] = {
	{
		.iv = 100,
		.lvl = 41,
		.species = SPECIES_KINGLER,
		.moves = { MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_POLIWHIRL,
		.moves = { MOVE_BODY_SLAM, MOVE_DOUBLE_SLAP, MOVE_WATER_GUN, MOVE_HYPNOSIS },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_TENTACRUEL,
		.moves = { MOVE_BARRIER, MOVE_WRAP, MOVE_BUBBLE_BEAM, MOVE_ACID },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_SEADRA,
		.moves = { MOVE_WATER_GUN, MOVE_SMOKESCREEN, MOVE_TWISTER, MOVE_LEER },
	},
	{
		.iv = 100,
		.lvl = 43,
		.species = SPECIES_BLASTOISE,
		.moves = { MOVE_WATER_GUN, MOVE_BITE, MOVE_RAPID_SPIN, MOVE_RAIN_DANCE },
	},
};

static const struct TrainerMon sParty_CooltrainerPaul[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_SLOWPOKE,
		.moves = { MOVE_HEADBUTT, MOVE_CONFUSION, MOVE_WATER_GUN, MOVE_DISABLE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_SHELLDER,
		.moves = { MOVE_AURORA_BEAM, MOVE_CLAMP, MOVE_SUPERSONIC, MOVE_LEER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_KINGLER,
		.moves = { MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_STARMIE,
		.moves = { MOVE_BUBBLE_BEAM, MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPID_SPIN },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_GOLDUCK,
		.moves = { MOVE_CONFUSION, MOVE_SCRATCH, MOVE_SCREECH, MOVE_DISABLE },
	},
};

static const struct TrainerMon sParty_CooltrainerRolando[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_RATICATE,
		.moves = { MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_IVYSAUR,
		.moves = { MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_WARTORTLE,
		.moves = { MOVE_WATER_GUN, MOVE_BITE, MOVE_RAPID_SPIN, MOVE_TAIL_WHIP },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_CHARMELEON,
		.moves = { MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_SMOKESCREEN, MOVE_SCARY_FACE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_CHARIZARD,
		.moves = { MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_SMOKESCREEN, MOVE_SCARY_FACE },
	},
};

static const struct TrainerMon sParty_CooltrainerGilbert[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PIDGEOTTO,
		.moves = { MOVE_WING_ATTACK, MOVE_FEATHER_DANCE, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_FEAROW,
		.moves = { MOVE_DRILL_PECK, MOVE_MIRROR_MOVE, MOVE_PURSUIT, MOVE_LEER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PERSIAN,
		.moves = { MOVE_PAY_DAY, MOVE_FAINT_ATTACK, MOVE_SCREECH, MOVE_BITE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_LICKITUNG,
		.moves = { MOVE_SLAM, MOVE_DISABLE, MOVE_WRAP, MOVE_SUPERSONIC },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_TAUROS,
		.moves = { MOVE_HORN_ATTACK, MOVE_SCARY_FACE, MOVE_SWAGGER, MOVE_TAIL_WHIP },
	},
};

static const struct TrainerMon sParty_CooltrainerOwen[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_NIDORINO,
		.moves = { MOVE_SCRATCH, MOVE_POISON_STING, MOVE_DOUBLE_KICK, MOVE_BITE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_NIDORINA,
		.moves = { MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_DOUBLE_KICK, MOVE_LEER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_RATICATE,
		.moves = { MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_SANDSLASH,
		.moves = { MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SLASH, MOVE_POISON_STING },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_STOMP, MOVE_TAIL_WHIP },
	},
};

static const struct TrainerMon sParty_CooltrainerBerke[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_SEEL,
		.moves = { MOVE_TAKE_DOWN, MOVE_AURORA_BEAM, MOVE_ICY_WIND, MOVE_GROWL },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_GRAVELER,
		.moves = { MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_KINGLER,
		.moves = { MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_ONIX,
		.moves = { MOVE_SLAM, MOVE_SANDSTORM, MOVE_DRAGON_BREATH, MOVE_ROCK_THROW },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_CLOYSTER,
		.moves = { MOVE_SPIKE_CANNON, MOVE_AURORA_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT },
	},
};

static const struct TrainerMon sParty_CooltrainerYuji[] = {
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_SANDSLASH,
		.moves = { MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING },
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_GRAVELER,
		.moves = { MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_ONIX,
		.moves = { MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_ROCK_THROW, MOVE_BIND },
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_GRAVELER,
		.moves = { MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_MAROWAK,
		.moves = { MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL },
	},
};

static const struct TrainerMon sParty_CooltrainerWarren[] = {
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_MAROWAK,
		.moves = { MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL },
	},
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_MAROWAK,
		.moves = { MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL },
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE },
	},
	{
		.iv = 100,
		.lvl = 39,
		.species = SPECIES_NIDORINA,
		.moves = { MOVE_FURY_SWIPES, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK },
	},
	{
		.iv = 100,
		.lvl = 39,
		.species = SPECIES_NIDOQUEEN,
		.moves = { MOVE_BODY_SLAM, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK },
	},
};

static const struct TrainerMon sParty_CooltrainerMary[] = {
	{
		.iv = 100,
		.lvl = 22,
		.species = SPECIES_BELLSPROUT,
		.moves = { MOVE_WRAP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH },
	},
	{
		.iv = 100,
		.lvl = 22,
		.species = SPECIES_ODDISH,
		.moves = { MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_ABSORB, MOVE_SWEET_SCENT },
	},
	{
		.iv = 100,
		.lvl = 22,
		.species = SPECIES_WEEPINBELL,
		.moves = { MOVE_VINE_WHIP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH },
	},
	{
		.iv = 100,
		.lvl = 22,
		.species = SPECIES_GLOOM,
		.moves = { MOVE_ABSORB, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_SWEET_SCENT },
	},
	{
		.iv = 100,
		.lvl = 22,
		.species = SPECIES_IVYSAUR,
		.moves = { MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_VINE_WHIP, MOVE_LEECH_SEED },
	},
};

static const struct TrainerMon sParty_CooltrainerCaroline[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_BELLSPROUT,
		.moves = { MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_POISON_POWDER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_WEEPINBELL,
		.moves = { MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_VICTREEBEL,
		.moves = { MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PARAS,
		.moves = { MOVE_GROWTH, MOVE_SLASH, MOVE_LEECH_LIFE, MOVE_STUN_SPORE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PARASECT,
		.moves = { MOVE_SPORE, MOVE_SLASH, MOVE_LEECH_LIFE, MOVE_POISON_POWDER },
	},
};

static const struct TrainerMon sParty_CooltrainerAlexa[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_CLEFAIRY,
		.moves = { MOVE_LIGHT_SCREEN, MOVE_COSMIC_POWER, MOVE_DOUBLE_SLAP, MOVE_ENCORE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_JIGGLYPUFF,
		.moves = { MOVE_SING, MOVE_BODY_SLAM, MOVE_ROLLOUT, MOVE_DISABLE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PERSIAN,
		.moves = { MOVE_PAY_DAY, MOVE_FAINT_ATTACK, MOVE_BITE, MOVE_SCREECH },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_DEWGONG,
		.moves = { MOVE_SHEER_COLD, MOVE_TAKE_DOWN, MOVE_REST, MOVE_AURORA_BEAM },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_CHANSEY,
		.moves = { MOVE_SING, MOVE_EGG_BOMB, MOVE_SOFT_BOILED, MOVE_MINIMIZE },
	},
};

static const struct TrainerMon sParty_CooltrainerShannon[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_BEEDRILL,
		.moves = { MOVE_PIN_MISSILE, MOVE_TWINEEDLE, MOVE_AGILITY, MOVE_PURSUIT },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_BUTTERFREE,
		.moves = { MOVE_SAFEGUARD, MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PARASECT,
		.moves = { MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_GROWTH },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_VENONAT,
		.moves = { MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_LEECH_LIFE, MOVE_DISABLE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_VENOMOTH,
		.moves = { MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC, MOVE_LEECH_LIFE },
	},
};

static const struct TrainerMon sParty_CooltrainerNaomi[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PERSIAN,
		.moves = { MOVE_FURY_SWIPES, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_PAY_DAY },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PONYTA,
		.moves = { MOVE_AGILITY, MOVE_TAKE_DOWN, MOVE_FIRE_SPIN, MOVE_STOMP },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_RAPIDASH,
		.moves = { MOVE_FURY_ATTACK, MOVE_FIRE_SPIN, MOVE_STOMP, MOVE_GROWL },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_VULPIX,
		.moves = { MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_IMPRISON },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_NINETALES,
		.moves = { MOVE_SAFEGUARD, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN },
	},
};

static const struct TrainerMon sParty_CooltrainerBrooke[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_TANGELA,
		.moves = { MOVE_SLAM, MOVE_BIND, MOVE_MEGA_DRAIN, MOVE_INGRAIN },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_GLOOM,
		.moves = { MOVE_ACID, MOVE_MOONLIGHT, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_VILEPLUME,
		.moves = { MOVE_MEGA_DRAIN, MOVE_ACID, MOVE_STUN_SPORE, MOVE_AROMATHERAPY },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_IVYSAUR,
		.moves = { MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_GROWL, MOVE_LEECH_SEED },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_VENUSAUR,
		.moves = { MOVE_RAZOR_LEAF, MOVE_GROWTH, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER },
	},
};

static const struct TrainerMon sParty_CooltrainerAustina[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_STOMP },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_NIDORINA,
		.moves = { MOVE_DOUBLE_KICK, MOVE_FURY_SWIPES, MOVE_BITE, MOVE_FLATTER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_NIDOQUEEN,
		.moves = { MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_GROWL },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_NIDORINO,
		.moves = { MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_FOCUS_ENERGY, MOVE_LEER },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_NIDOKING,
		.moves = { MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_PECK },
	},
};

static const struct TrainerMon sParty_CooltrainerJulie[] = {
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PERSIAN,
		.moves = { MOVE_FURY_SWIPES, MOVE_BITE, MOVE_SCREECH, MOVE_FAINT_ATTACK },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_NINETALES,
		.moves = { MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_GRUDGE },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_RAPIDASH,
		.moves = { MOVE_FURY_ATTACK, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN, MOVE_AGILITY },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_PIKACHU,
		.moves = { MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 100,
		.lvl = 42,
		.species = SPECIES_RAICHU,
		.moves = { MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_SLAM, MOVE_DOUBLE_TEAM },
	},
};

static const struct TrainerMon sParty_EliteFourLorelei[] = {
	{
		.iv = 250,
		.lvl = 52,
		.species = SPECIES_DEWGONG,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_ICE_BEAM, MOVE_SURF, MOVE_HAIL, MOVE_SAFEGUARD },
	},
	{
		.iv = 250,
		.lvl = 51,
		.species = SPECIES_CLOYSTER,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SPIKES, MOVE_PROTECT, MOVE_HAIL, MOVE_DIVE },
	},
	{
		.iv = 250,
		.lvl = 52,
		.species = SPECIES_SLOWBRO,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_ICE_BEAM, MOVE_SURF, MOVE_AMNESIA, MOVE_YAWN },
	},
	{
		.iv = 250,
		.lvl = 54,
		.species = SPECIES_JYNX,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_ICE_PUNCH, MOVE_DOUBLE_SLAP, MOVE_LOVELY_KISS, MOVE_ATTRACT },
	},
	{
		.iv = 250,
		.lvl = 54,
		.species = SPECIES_LAPRAS,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_CONFUSE_RAY, MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM },
	},
};

static const struct TrainerMon sParty_EliteFourBruno[] = {
	{
		.iv = 250,
		.lvl = 51,
		.species = SPECIES_ONIX,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_IRON_TAIL, MOVE_ROAR },
	},
	{
		.iv = 250,
		.lvl = 53,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_ROCK_TOMB, MOVE_COUNTER },
	},
	{
		.iv = 250,
		.lvl = 53,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_MEGA_KICK, MOVE_FORESIGHT, MOVE_BRICK_BREAK, MOVE_FACADE },
	},
	{
		.iv = 250,
		.lvl = 54,
		.species = SPECIES_ONIX,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SAND_TOMB },
	},
	{
		.iv = 250,
		.lvl = 56,
		.species = SPECIES_MACHAMP,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_SCARY_FACE, MOVE_ROCK_TOMB },
	},
};

static const struct TrainerMon sParty_EliteFourAgatha[] = {
	{
		.iv = 250,
		.lvl = 54,
		.species = SPECIES_GENGAR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_DOUBLE_TEAM },
	},
	{
		.iv = 250,
		.lvl = 54,
		.species = SPECIES_GOLBAT,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_CONFUSE_RAY, MOVE_POISON_FANG, MOVE_AIR_CUTTER, MOVE_BITE },
	},
	{
		.iv = 250,
		.lvl = 53,
		.species = SPECIES_HAUNTER,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_CURSE, MOVE_MEAN_LOOK },
	},
	{
		.iv = 250,
		.lvl = 56,
		.species = SPECIES_ARBOK,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SLUDGE_BOMB, MOVE_SCREECH, MOVE_IRON_TAIL, MOVE_BITE },
	},
	{
		.iv = 250,
		.lvl = 58,
		.species = SPECIES_GENGAR,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_HYPNOSIS, MOVE_NIGHTMARE },
	},
};

static const struct TrainerMon sParty_EliteFourLance[] = {
	{
		.iv = 250,
		.lvl = 56,
		.species = SPECIES_GYARADOS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPER_BEAM, MOVE_DRAGON_RAGE, MOVE_TWISTER, MOVE_BITE },
	},
	{
		.iv = 250,
		.lvl = 54,
		.species = SPECIES_DRAGONAIR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_DRAGON_RAGE, MOVE_OUTRAGE },
	},
	{
		.iv = 250,
		.lvl = 54,
		.species = SPECIES_DRAGONAIR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_THUNDER_WAVE, MOVE_OUTRAGE },
	},
	{
		.iv = 250,
		.lvl = 58,
		.species = SPECIES_AERODACTYL,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_WING_ATTACK, MOVE_SCARY_FACE },
	},
	{
		.iv = 250,
		.lvl = 60,
		.species = SPECIES_DRAGONITE,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_OUTRAGE, MOVE_WING_ATTACK },
	},
};

static const struct TrainerMon sParty_LeaderBrock[] = {
	{	
	//	.ivs = {15, 15, 15, 15, 15, 15},
	//	.evs = {0, 0, 0, 0, 0, 0},
		.lvl = LVL_BOSS_MINUS_2,
		.species = SPECIES_LILEEP,
	//	.heldItem = ITEM_ORAN_BERRY,
	//	.moves = {MOVE_ACID, MOVE_INGRAIN, MOVE_ABSORB, MOVE_NONE },
	   // .shiny = 0,
	//	.friendship = 255,
	//	.ball = ITEM_GREAT_BALL,
	},
		{	
		.ivs = {15, 15, 15, 15, 15, 15},
		.evs = {0, 0, 0, 0, 0, 0},
		.lvl = LVL_BOSS_MINUS_2,
		.species = SPECIES_KABUTO,
		.heldItem = ITEM_GANLON_BERRY,
		.moves = {MOVE_ABSORB, MOVE_FURY_CUTTER, MOVE_SCRATCH, MOVE_HARDEN },
	    .shiny = 0,
		.friendship = 255,
		.ball = ITEM_GREAT_BALL,
	},
		{	
		.ivs = {15, 15, 15, 15, 15, 15},
		.evs = {0, 0, 0, 0, 0, 0},
		.lvl = LVL_BOSS_MINUS_2,
		.species = SPECIES_ZUBAT,
		.heldItem = ITEM_GANLON_BERRY,
		.moves = {MOVE_GUST, MOVE_ASTONISH, MOVE_LEECH_LIFE, MOVE_NONE },
	    .shiny = 0,
		.friendship = 255,
		.ball = ITEM_GREAT_BALL,
	},
	{	
		.ivs = {20, 20, 20, 20, 20, 20 },
		.evs = {0, 0, 0, 0, 0, 0},
		.lvl = LVL_BOSS_EQUAL,
		.species = SPECIES_ONIX,
		.heldItem = ITEM_ORAN_BERRY,
		.moves = {MOVE_ROCK_TOMB, MOVE_SCREECH, MOVE_BIND, MOVE_NONE },
	    .shiny = 1,
		.friendship = 255,
		.ball = ITEM_LUXURY_BALL,
	},
};

static const struct TrainerMon sParty_LeaderMisty[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_STARYU,
		.moves = { MOVE_TACKLE, MOVE_HARDEN, MOVE_RECOVER, MOVE_WATER_PULSE },
	},
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_STARMIE,
		.moves = { MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPID_SPIN, MOVE_WATER_PULSE },
	},
};

static const struct TrainerMon sParty_LeaderLtSurge[] = {
	{
		.iv = 0,
		.lvl = 21,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SONIC_BOOM, MOVE_TACKLE, MOVE_SCREECH, MOVE_SHOCK_WAVE },
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_PIKACHU,
		.moves = { MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE },
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_RAICHU,
		.moves = { MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE },
	},
};

static const struct TrainerMon sParty_LeaderErika[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_VICTREEBEL,
		.moves = { MOVE_STUN_SPORE, MOVE_ACID, MOVE_POISON_POWDER, MOVE_GIGA_DRAIN },
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_TANGELA,
		.moves = { MOVE_POISON_POWDER, MOVE_CONSTRICT, MOVE_INGRAIN, MOVE_GIGA_DRAIN },
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_VILEPLUME,
		.moves = { MOVE_SLEEP_POWDER, MOVE_ACID, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN },
	},
};

static const struct TrainerMon sParty_LeaderKoga[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC },
	},
	{
		.iv = 0,
		.lvl = 39,
		.species = SPECIES_MUK,
		.moves = { MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_ACID_ARMOR, MOVE_TOXIC },
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC },
	},
	{
		.iv = 0,
		.lvl = 43,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_TACKLE, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC },
	},
};

static const struct TrainerMon sParty_LeaderBlaine[] = {
	{
		.iv = 0,
		.lvl = 42,
		.species = SPECIES_GROWLITHE,
		.moves = { MOVE_BITE, MOVE_ROAR, MOVE_TAKE_DOWN, MOVE_FIRE_BLAST },
	},
	{
		.iv = 0,
		.lvl = 40,
		.species = SPECIES_PONYTA,
		.moves = { MOVE_STOMP, MOVE_BOUNCE, MOVE_FIRE_SPIN, MOVE_FIRE_BLAST },
	},
	{
		.iv = 0,
		.lvl = 42,
		.species = SPECIES_RAPIDASH,
		.moves = { MOVE_STOMP, MOVE_BOUNCE, MOVE_FIRE_SPIN, MOVE_FIRE_BLAST },
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_ARCANINE,
		.moves = { MOVE_BITE, MOVE_ROAR, MOVE_TAKE_DOWN, MOVE_FIRE_BLAST },
	},
};

static const struct TrainerMon sParty_LeaderSabrina[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_KADABRA,
		.moves = { MOVE_PSYBEAM, MOVE_REFLECT, MOVE_FUTURE_SIGHT, MOVE_CALM_MIND },
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_MR_MIME,
		.moves = { MOVE_BARRIER, MOVE_PSYBEAM, MOVE_BATON_PASS, MOVE_CALM_MIND },
	},
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_VENOMOTH,
		.moves = { MOVE_PSYBEAM, MOVE_GUST, MOVE_LEECH_LIFE, MOVE_SUPERSONIC },
	},
	{
		.iv = 0,
		.lvl = 43,
		.species = SPECIES_ALAKAZAM,
		.moves = { MOVE_PSYCHIC, MOVE_RECOVER, MOVE_FUTURE_SIGHT, MOVE_CALM_MIND },
	},
};

static const struct TrainerMon sParty_GentlemanThomas[] = {
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 18,
		.species = SPECIES_GROWLITHE,
	},
};

static const struct TrainerMon sParty_GentlemanArthur[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_GentlemanTucker[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_PIKACHU,
	},
};

static const struct TrainerMon sParty_GentlemanNorton[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_PERSIAN,
	},
};

static const struct TrainerMon sParty_GentlemanWalter[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_PONYTA,
	},
};

static const struct TrainerMon sParty_RivalSsAnneSquirtle[] = {
	{
		.iv = 50,
		.lvl = 19,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 50,
		.lvl = 16,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 50,
		.lvl = 18,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 100,
		.lvl = 20,
		.species = SPECIES_WARTORTLE,
	},
};

static const struct TrainerMon sParty_RivalSsAnneBulbasaur[] = {
	{
		.iv = 50,
		.lvl = 19,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 50,
		.lvl = 16,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 50,
		.lvl = 18,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 100,
		.lvl = 20,
		.species = SPECIES_IVYSAUR,
	},
};

static const struct TrainerMon sParty_RivalSsAnneCharmander[] = {
	{
		.iv = 50,
		.lvl = 19,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 50,
		.lvl = 16,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 50,
		.lvl = 18,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 100,
		.lvl = 20,
		.species = SPECIES_CHARMELEON,
	},
};

static const struct TrainerMon sParty_RivalPokemonTowerSquirtle[] = {
	{
		.iv = 100,
		.lvl = 25,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 100,
		.lvl = 23,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 100,
		.lvl = 22,
		.species = SPECIES_EXEGGCUTE,
	},
	{
		.iv = 100,
		.lvl = 20,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 100,
		.lvl = 25,
		.species = SPECIES_WARTORTLE,
	},
};

static const struct TrainerMon sParty_RivalPokemonTowerBulbasaur[] = {
	{
		.iv = 100,
		.lvl = 25,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 100,
		.lvl = 23,
		.species = SPECIES_GYARADOS,
	},
	{
		.iv = 100,
		.lvl = 22,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 100,
		.lvl = 20,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 100,
		.lvl = 25,
		.species = SPECIES_IVYSAUR,
	},
};

static const struct TrainerMon sParty_RivalPokemonTowerCharmander[] = {
	{
		.iv = 100,
		.lvl = 25,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 100,
		.lvl = 23,
		.species = SPECIES_EXEGGCUTE,
	},
	{
		.iv = 100,
		.lvl = 22,
		.species = SPECIES_GYARADOS,
	},
	{
		.iv = 100,
		.lvl = 20,
		.species = SPECIES_KADABRA,
	},
	{
		.iv = 100,
		.lvl = 25,
		.species = SPECIES_CHARMELEON,
	},
};

static const struct TrainerMon sParty_RivalSilphSquirtle[] = {
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_PIDGEOT,
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 100,
		.lvl = 35,
		.species = SPECIES_EXEGGCUTE,
	},
	{
		.iv = 100,
		.lvl = 35,
		.species = SPECIES_ALAKAZAM,
	},
	{
		.iv = 150,
		.lvl = 40,
		.species = SPECIES_BLASTOISE,
	},
};

static const struct TrainerMon sParty_RivalSilphBulbasaur[] = {
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_PIDGEOT,
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_GYARADOS,
	},
	{
		.iv = 100,
		.lvl = 35,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 100,
		.lvl = 35,
		.species = SPECIES_ALAKAZAM,
	},
	{
		.iv = 150,
		.lvl = 40,
		.species = SPECIES_VENUSAUR,
	},
};

static const struct TrainerMon sParty_RivalSilphCharmander[] = {
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_PIDGEOT,
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_EXEGGCUTE,
	},
	{
		.iv = 100,
		.lvl = 35,
		.species = SPECIES_GYARADOS,
	},
	{
		.iv = 100,
		.lvl = 35,
		.species = SPECIES_ALAKAZAM,
	},
	{
		.iv = 150,
		.lvl = 40,
		.species = SPECIES_CHARIZARD,
	},
};

static const struct TrainerMon sParty_RivalRoute22LateSquirtle[] = {
	{
		.iv = 150,
		.lvl = 47,
		.species = SPECIES_PIDGEOT,
		.moves = { MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_GROWLITHE,
		.moves = { MOVE_FLAME_WHEEL, MOVE_TAKE_DOWN, MOVE_LEER, MOVE_AGILITY },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_EXEGGCUTE,
		.moves = { MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE },
	},
	{
		.iv = 150,
		.lvl = 47,
		.species = SPECIES_ALAKAZAM,
		.moves = { MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE },
	},
	{
		.iv = 250,
		.lvl = 53,
		.species = SPECIES_BLASTOISE,
		.moves = { MOVE_WATER_GUN, MOVE_RAIN_DANCE, MOVE_BITE, MOVE_RAPID_SPIN },
	},
};

static const struct TrainerMon sParty_RivalRoute22LateBulbasaur[] = {
	{
		.iv = 150,
		.lvl = 47,
		.species = SPECIES_PIDGEOT,
		.moves = { MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_GYARADOS,
		.moves = { MOVE_HYDRO_PUMP, MOVE_TWISTER, MOVE_LEER, MOVE_RAIN_DANCE },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_GROWLITHE,
		.moves = { MOVE_FLAME_WHEEL, MOVE_TAKE_DOWN, MOVE_LEER, MOVE_AGILITY },
	},
	{
		.iv = 150,
		.lvl = 47,
		.species = SPECIES_ALAKAZAM,
		.moves = { MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE },
	},
	{
		.iv = 250,
		.lvl = 53,
		.species = SPECIES_VENUSAUR,
		.moves = { MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_GROWTH, MOVE_SYNTHESIS },
	},
};

static const struct TrainerMon sParty_RivalRoute22LateCharmander[] = {
	{
		.iv = 150,
		.lvl = 47,
		.species = SPECIES_PIDGEOT,
		.moves = { MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_RHYHORN,
		.moves = { MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_EXEGGCUTE,
		.moves = { MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE },
	},
	{
		.iv = 150,
		.lvl = 45,
		.species = SPECIES_GYARADOS,
		.moves = { MOVE_HYDRO_PUMP, MOVE_TWISTER, MOVE_LEER, MOVE_RAIN_DANCE },
	},
	{
		.iv = 150,
		.lvl = 47,
		.species = SPECIES_ALAKAZAM,
		.moves = { MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE },
	},
	{
		.iv = 250,
		.lvl = 53,
		.species = SPECIES_CHARIZARD,
		.moves = { MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_SLASH, MOVE_SCARY_FACE },
	},
};

static const struct TrainerMon sParty_ChampionFirstSquirtle[] = {
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_PIDGEOT,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND },
	},
	{
		.iv = 255,
		.lvl = 57,
		.species = SPECIES_ALAKAZAM,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT },
	},
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_RHYDON,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE },
	},
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_ARCANINE,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE },
	},
	{
		.iv = 255,
		.lvl = 61,
		.species = SPECIES_EXEGGUTOR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_GIGA_DRAIN, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN },
	},
	{
		.iv = 255,
		.lvl = 63,
		.species = SPECIES_BLASTOISE,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_SKULL_BASH, MOVE_BITE },
	},
};

static const struct TrainerMon sParty_ChampionFirstBulbasaur[] = {
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_PIDGEOT,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND },
	},
	{
		.iv = 255,
		.lvl = 57,
		.species = SPECIES_ALAKAZAM,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT },
	},
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_RHYDON,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE },
	},
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_GYARADOS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE, MOVE_BITE, MOVE_THRASH },
	},
	{
		.iv = 255,
		.lvl = 61,
		.species = SPECIES_ARCANINE,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE },
	},
	{
		.iv = 255,
		.lvl = 63,
		.species = SPECIES_VENUSAUR,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_SOLAR_BEAM, MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_GROWTH },
	},
};

static const struct TrainerMon sParty_ChampionFirstCharmander[] = {
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_PIDGEOT,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND },
	},
	{
		.iv = 255,
		.lvl = 57,
		.species = SPECIES_ALAKAZAM,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT },
	},
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_RHYDON,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE },
	},
	{
		.iv = 255,
		.lvl = 59,
		.species = SPECIES_EXEGGUTOR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_GIGA_DRAIN, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN },
	},
	{
		.iv = 255,
		.lvl = 61,
		.species = SPECIES_GYARADOS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE, MOVE_BITE, MOVE_THRASH },
	},
	{
		.iv = 255,
		.lvl = 63,
		.species = SPECIES_CHARIZARD,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_FIRE_BLAST, MOVE_AERIAL_ACE, MOVE_SLASH, MOVE_FIRE_SPIN },
	},
};

static const struct TrainerMon sParty_ChannelerPatricia[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerCarly[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerHope[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerPaula[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerLaurel[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_GASTLY,
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerJody[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerTammy[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_HAUNTER,
	},
};

static const struct TrainerMon sParty_ChannelerRuth[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerKarina[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerJanae[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerAngelica[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerEmilia[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerJennifer[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_Channeler1[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_HAUNTER,
	},
};

static const struct TrainerMon sParty_Channeler2[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_Channeler3[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_Channeler4[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_Channeler5[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_HAUNTER,
	},
};

static const struct TrainerMon sParty_Channeler6[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_Channeler7[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_Channeler8[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GASTLY,
	},
};

static const struct TrainerMon sParty_ChannelerAmanda[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_GASTLY,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_HAUNTER,
	},
};

static const struct TrainerMon sParty_ChannelerStacy[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_HAUNTER,
	},
};

static const struct TrainerMon sParty_ChannelerTasha[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_GASTLY,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_GASTLY,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_HAUNTER,
	},
};

static const struct TrainerMon sParty_HikerJeremy[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_ONIX,
	},
};

static const struct TrainerMon sParty_PicnickerAlma[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_HORSEA,
	},
};

static const struct TrainerMon sParty_PicnickerSusie[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_MEOWTH,
	},
};

static const struct TrainerMon sParty_PicnickerValerie[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_POLIWAG,
	},
};

static const struct TrainerMon sParty_PicnickerGwen[] = {
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 27,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_BikerVirgil[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_CamperFlint[] = {
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 14,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_PicnickerMissy[] = {
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 31,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_PicnickerIrene[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_HORSEA,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_SEEL,
	},
};

static const struct TrainerMon sParty_PicnickerDana[] = {
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 20,
		.species = SPECIES_PIDGEY,
	},
};

static const struct TrainerMon sParty_PicnickerAriana[] = {
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 19,
		.species = SPECIES_BELLSPROUT,
	},
};

static const struct TrainerMon sParty_PicnickerLeah[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_CLEFAIRY,
	},
};

static const struct TrainerMon sParty_CamperJustin[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_NIDORINO,
	},
};

static const struct TrainerMon sParty_PicnickerYazmin[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_TANGELA,
	},
};

static const struct TrainerMon sParty_PicnickerKindra[] = {
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_GLOOM,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_ODDISH,
	},
	{
		.iv = 0,
		.lvl = 28,
		.species = SPECIES_ODDISH,
	},
};

static const struct TrainerMon sParty_PicnickerBecky[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_RAICHU,
	},
};

static const struct TrainerMon sParty_PicnickerCelia[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_CLEFAIRY,
	},
};

static const struct TrainerMon sParty_GentlemanBrooks[] = {
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_PIKACHU,
	},
};

static const struct TrainerMon sParty_GentlemanLamar[] = {
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 0,
		.lvl = 17,
		.species = SPECIES_PONYTA,
	},
};

static const struct TrainerMon sParty_TwinsEliAnne[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_JIGGLYPUFF,
	},
};

static const struct TrainerMon sParty_CoolCoupleRayTyra[] = {
	{
		.iv = 100,
		.lvl = 45,
		.species = SPECIES_NIDOQUEEN,
		.moves = { MOVE_SUPERPOWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_POISON_STING },
	},
	{
		.iv = 100,
		.lvl = 45,
		.species = SPECIES_NIDOKING,
		.moves = { MOVE_MEGAHORN, MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING },
	},
};

static const struct TrainerMon sParty_YoungCoupleGiaJes[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_TwinsKiriJan[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_CHARMANDER,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_SQUIRTLE,
	},
};

static const struct TrainerMon sParty_CrushKinRonMya[] = {
	{
		.iv = 50,
		.lvl = 29,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 50,
		.lvl = 29,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_YoungCoupleLeaJed[] = {
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_RAPIDASH,
	},
	{
		.iv = 0,
		.lvl = 29,
		.species = SPECIES_NINETALES,
	},
};

static const struct TrainerMon sParty_SisAndBroLiaLuc[] = {
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 30,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_SisAndBroLilIan[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_STARMIE,
	},
};

static const struct TrainerMon sParty_BugCatcher3[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BugCatcher4[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BugCatcher5[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BugCatcher6[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BugCatcher7[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_BugCatcher8[] = { DUMMY_TRAINER_MON };

static const struct TrainerMon sParty_YoungsterBen3[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_EKANS,
	},
};

static const struct TrainerMon sParty_YoungsterBen4[] = {
	{
		.iv = 120,
		.lvl = 48,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 120,
		.lvl = 48,
		.species = SPECIES_ARBOK,
	},
};

static const struct TrainerMon sParty_YoungsterChad2[] = {
	{
		.iv = 20,
		.lvl = 20,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 20,
		.lvl = 20,
		.species = SPECIES_SANDSHREW,
	},
};

static const struct TrainerMon sParty_LassReli2[] = {
	{
		.iv = 20,
		.lvl = 20,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 20,
		.lvl = 20,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_LassReli3[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_NIDORINA,
	},
};

static const struct TrainerMon sParty_YoungsterTimmy2[] = {
	{
		.iv = 20,
		.lvl = 19,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 20,
		.lvl = 19,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 20,
		.lvl = 19,
		.species = SPECIES_ZUBAT,
	},
};

static const struct TrainerMon sParty_YoungsterTimmy3[] = {
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_GOLBAT,
	},
};

static const struct TrainerMon sParty_YoungsterTimmy4[] = {
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_ARBOK,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_GOLBAT,
	},
};

static const struct TrainerMon sParty_YoungsterChad3[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_ARBOK,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_SANDSHREW,
	},
};

static const struct TrainerMon sParty_LassJanice2[] = {
	{
		.iv = 20,
		.lvl = 20,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 20,
		.lvl = 20,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_LassJanice3[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_YoungsterChad4[] = {
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_ARBOK,
	},
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_SANDSLASH,
	},
};

static const struct TrainerMon sParty_HikerFranklin2[] = {
	{
		.iv = 40,
		.lvl = 25,
		.species = SPECIES_MACHOKE,
	},
	{
		.iv = 40,
		.lvl = 25,
		.species = SPECIES_GRAVELER,
	},
};

static const struct TrainerMon sParty_PkmnProfProfOak[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_PlayerBrendan[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_PlayerMay[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_PlayerRed[] = { DUMMY_TRAINER_MON };
static const struct TrainerMon sParty_PlayerLeaf[] = { DUMMY_TRAINER_MON };

static const struct TrainerMon sParty_TeamRocketGrunt42[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_HOUNDOUR,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_HOUNDOUR,
	},
};

static const struct TrainerMon sParty_PsychicJaclyn[] = {
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_NATU,
		.moves = { MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_WISH },
	},
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_SLOWBRO,
		.moves = { MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_YAWN },
	},
	{
		.iv = 100,
		.lvl = 49,
		.species = SPECIES_KADABRA,
		.moves = { MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT },
	},
};

static const struct TrainerMon sParty_CrushGirlSharon[] = {
	{
		.iv = 50,
		.lvl = 37,
		.species = SPECIES_MANKEY,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 50,
		.lvl = 37,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_TuberAmira[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_POLIWAG,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_POLIWAG,
	},
};

static const struct TrainerMon sParty_PkmnBreederAlize[] = {
	{
		.iv = 30,
		.lvl = 48,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 30,
		.lvl = 48,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 30,
		.lvl = 48,
		.species = SPECIES_MARILL,
	},
};

static const struct TrainerMon sParty_PkmnRangerNicolas[] = {
	{
		.iv = 100,
		.lvl = 51,
		.species = SPECIES_WEEPINBELL,
		.moves = { MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SWEET_SCENT, MOVE_WRAP },
	},
	{
		.iv = 100,
		.lvl = 51,
		.species = SPECIES_VICTREEBEL,
		.moves = { MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE },
	},
};

static const struct TrainerMon sParty_PkmnRangerMadeline[] = {
	{
		.iv = 100,
		.lvl = 51,
		.species = SPECIES_GLOOM,
		.moves = { MOVE_PETAL_DANCE, MOVE_ACID, MOVE_SWEET_SCENT, MOVE_POISON_POWDER },
	},
	{
		.iv = 100,
		.lvl = 51,
		.species = SPECIES_VILEPLUME,
		.moves = { MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUN_SPORE },
	},
};

static const struct TrainerMon sParty_AromaLadyNikki[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_WEEPINBELL,
	},
};

static const struct TrainerMon sParty_RuinManiacStanly[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_GRAVELER,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_GRAVELER,
	},
};

static const struct TrainerMon sParty_LadyJacki[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_HOPPIP,
		.heldItem = ITEM_STARDUST,
	},
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_SKIPLOOM,
		.heldItem = ITEM_STARDUST,
	},
};

static const struct TrainerMon sParty_PainterDaisy[] = {
	{
		.iv = 50,
		.lvl = 50,
		.species = SPECIES_SMEARGLE,
		.moves = { MOVE_DYNAMIC_PUNCH, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_MEGA_PUNCH },
	},
};

static const struct TrainerMon sParty_BikerGoon[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE },
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_ACID_ARMOR, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE },
	},
};

static const struct TrainerMon sParty_BikerGoon2[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE },
	},
};

static const struct TrainerMon sParty_BikerGoon3[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_GRIMER,
	},
};

static const struct TrainerMon sParty_Biker2[] = { DUMMY_TRAINER_MON };

static const struct TrainerMon sParty_BugCatcherAnthony[] = {
	{
		.iv = 0,
		.lvl = 7,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 8,
		.species = SPECIES_CATERPIE,
	},
};

static const struct TrainerMon sParty_BugCatcherCharlie[] = {
	{
		.iv = 0,
		.lvl = 7,
		.species = SPECIES_METAPOD,
	},
	{
		.iv = 0,
		.lvl = 7,
		.species = SPECIES_CATERPIE,
	},
	{
		.iv = 0,
		.lvl = 7,
		.species = SPECIES_METAPOD,
	},
};

static const struct TrainerMon sParty_TwinsEliAnne2[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_JIGGLYPUFF,
	},
};

static const struct TrainerMon sParty_YoungsterJohnson[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_BikerRicardo[] = {
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS },
	},
	{
		.iv = 0,
		.lvl = 22,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS },
	},
	{
		.iv = 0,
		.lvl = 23,
		.species = SPECIES_GRIMER,
		.moves = { MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND },
	},
};

static const struct TrainerMon sParty_BikerJaren[] = {
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GRIMER,
	},
	{
		.iv = 0,
		.lvl = 24,
		.species = SPECIES_GRIMER,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt43[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_CUBONE,
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_MAROWAK,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt44[] = {
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_SANDSHREW,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_SANDSLASH,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt45[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_ZUBAT,
	},
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_GOLBAT,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt46[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_MUK,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_GOLBAT,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt47[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_MACHOP,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt48[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_HYPNO,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_HYPNO,
	},
};

static const struct TrainerMon sParty_TeamRocketAdmin[] = {
	{
		.iv = 150,
		.lvl = 52,
		.species = SPECIES_MUK,
		.moves = { MOVE_SLUDGE_BOMB, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_ROCK_TOMB },
	},
	{
		.iv = 150,
		.lvl = 53,
		.species = SPECIES_ARBOK,
		.moves = { MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL },
	},
	{
		.iv = 150,
		.lvl = 54,
		.species = SPECIES_VILEPLUME,
		.moves = { MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE },
	},
};

static const struct TrainerMon sParty_TeamRocketAdmin2[] = {
	{
		.iv = 200,
		.lvl = 53,
		.species = SPECIES_GOLBAT,
		.moves = { MOVE_CONFUSE_RAY, MOVE_SLUDGE_BOMB, MOVE_AIR_CUTTER, MOVE_SHADOW_BALL },
	},
	{
		.iv = 200,
		.lvl = 54,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_SHADOW_BALL },
	},
	{
		.iv = 200,
		.lvl = 55,
		.species = SPECIES_HOUNDOOM,
		.moves = { MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_SHADOW_BALL },
	},
};

static const struct TrainerMon sParty_ScientistGideon[] = {
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SWIFT, MOVE_SCREECH, MOVE_SPARK, MOVE_SONIC_BOOM },
	},
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_ELECTRODE,
		.moves = { MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE },
	},
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_MAGNEMITE,
		.moves = { MOVE_SCREECH, MOVE_SWIFT, MOVE_SPARK, MOVE_THUNDER_WAVE },
	},
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_MAGNETON,
		.moves = { MOVE_TRI_ATTACK, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM },
	},
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_PORYGON,
		.moves = { MOVE_TRI_ATTACK, MOVE_CONVERSION, MOVE_RECOVER, MOVE_PSYBEAM },
	},
};

static const struct TrainerMon sParty_SwimmerFemaleAmara[] = {
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_SEEL,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_SEEL,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_DEWGONG,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleMaria[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_SEADRA,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleAbigail[] = {
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_PSYDUCK,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_PSYDUCK,
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_GOLDUCK,
	},
};

static const struct TrainerMon sParty_SwimmerMaleFinn[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_STARMIE,
	},
};

static const struct TrainerMon sParty_SwimmerMaleGarrett[] = {
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_SHELLDER,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_CLOYSTER,
	},
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_WARTORTLE,
	},
};

static const struct TrainerMon sParty_FishermanTommy[] = {
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 33,
		.species = SPECIES_GOLDEEN,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_CrushGirlTanya[] = {
	{
		.iv = 50,
		.lvl = 38,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 50,
		.lvl = 38,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltShea[] = {
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_MACHOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltHugh[] = {
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_MACHOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CamperBryce[] = {
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_NIDORINO,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_SANDSLASH,
	},
};

static const struct TrainerMon sParty_PicnickerClaire[] = {
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 0,
		.lvl = 35,
		.species = SPECIES_CLEFAIRY,
	},
};

static const struct TrainerMon sParty_CrushKinMikKia[] = {
	{
		.iv = 50,
		.lvl = 39,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 50,
		.lvl = 39,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_AromaLadyViolet[] = {
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_BULBASAUR,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_IVYSAUR,
	},
	{
		.iv = 0,
		.lvl = 36,
		.species = SPECIES_IVYSAUR,
	},
};

static const struct TrainerMon sParty_TuberAlexis[] = {
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_STARYU,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_STARYU,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_KRABBY,
	},
	{
		.iv = 0,
		.lvl = 34,
		.species = SPECIES_KRABBY,
	},
};

static const struct TrainerMon sParty_TwinsJoyMeg[] = {
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 0,
		.lvl = 37,
		.species = SPECIES_CLEFAIRY,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleTisha[] = {
	{
		.iv = 0,
		.lvl = 38,
		.species = SPECIES_KINGLER,
	},
};

static const struct TrainerMon sParty_PainterCelina[] = {
	{
		.iv = 50,
		.lvl = 50,
		.species = SPECIES_SMEARGLE,
		.moves = { MOVE_FLY, MOVE_DIG, MOVE_DIVE, MOVE_BOUNCE },
	},
};

static const struct TrainerMon sParty_PainterRayna[] = {
	{
		.iv = 50,
		.lvl = 50,
		.species = SPECIES_SMEARGLE,
		.moves = { MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT },
	},
};

static const struct TrainerMon sParty_LadyGillian[] = {
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_MAREEP,
		.heldItem = ITEM_STARDUST,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_MAREEP,
		.heldItem = ITEM_STARDUST,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_FLAAFFY,
		.heldItem = ITEM_NUGGET,
	},
};

static const struct TrainerMon sParty_YoungsterDestin[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_SwimmerMaleToby[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_TENTACOOL,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_TENTACRUEL,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt49[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_GRIMER,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_MUK,
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt50[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_KOFFING,
		.moves = { MOVE_MEMENTO, MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE },
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_WEEZING,
		.moves = { MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT },
	},
};

static const struct TrainerMon sParty_TeamRocketGrunt51[] = {
	{
		.iv = 50,
		.lvl = 48,
		.species = SPECIES_EKANS,
	},
	{
		.iv = 50,
		.lvl = 48,
		.species = SPECIES_GLOOM,
	},
	{
		.iv = 50,
		.lvl = 48,
		.species = SPECIES_GLOOM,
	},
};

static const struct TrainerMon sParty_BirdKeeperMilo[] = {
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_PIDGEY,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_BirdKeeperChaz[] = {
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperHarold[] = {
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_HOOTHOOT,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_NOCTOWL,
	},
};

static const struct TrainerMon sParty_FishermanTylor[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_QWILFISH,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_QWILFISH,
	},
};

static const struct TrainerMon sParty_SwimmerMaleMymo[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_KINGLER,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_WARTORTLE,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleNicole[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_MARILL,
	},
};

static const struct TrainerMon sParty_SisAndBroAvaGeb[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_STARMIE,
	},
};

static const struct TrainerMon sParty_AromaLadyRose[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_SUNKERN,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_SUNFLORA,
	},
};

static const struct TrainerMon sParty_SwimmerMaleSamir[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_GYARADOS,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleDenise[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_CHINCHOU,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_LANTURN,
	},
};

static const struct TrainerMon sParty_TwinsMiuMia[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_PIKACHU,
	},
};

static const struct TrainerMon sParty_HikerEarl[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_RuinManiacFoster[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_GOLEM,
	},
};

static const struct TrainerMon sParty_RuinManiacLarry[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_MACHOKE,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_HikerDaryl[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_SUDOWOODO,
	},
};

static const struct TrainerMon sParty_PokemaniacHector[] = {
	{
		.iv = 30,
		.lvl = 49,
		.species = SPECIES_RHYHORN,
	},
	{
		.iv = 30,
		.lvl = 49,
		.species = SPECIES_KANGASKHAN,
	},
};

static const struct TrainerMon sParty_PsychicDario[] = {
	{
		.iv = 100,
		.lvl = 52,
		.species = SPECIES_GIRAFARIG,
		.moves = { MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODOR_SLEUTH, MOVE_AGILITY },
	},
};

static const struct TrainerMon sParty_PsychicRodette[] = {
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_NATU,
		.moves = { MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT },
	},
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_DROWZEE,
		.moves = { MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT },
	},
	{
		.iv = 100,
		.lvl = 50,
		.species = SPECIES_HYPNO,
		.moves = { MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT },
	},
};

static const struct TrainerMon sParty_AromaLadyMiah[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_BELLOSSOM,
	},
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_BELLOSSOM,
	},
};

static const struct TrainerMon sParty_YoungCoupleEveJon[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_GOLDUCK,
	},
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_PSYDUCK,
	},
};

static const struct TrainerMon sParty_JugglerMason[] = {
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM },
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_PINECO,
		.moves = { MOVE_SPIKES, MOVE_BIDE, MOVE_RAPID_SPIN, MOVE_TAKE_DOWN },
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_VOLTORB,
		.moves = { MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM },
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_PINECO,
		.moves = { MOVE_SPIKES, MOVE_BIDE, MOVE_RAPID_SPIN, MOVE_EXPLOSION },
	},
};

static const struct TrainerMon sParty_CrushGirlCyndy[] = {
	{
		.iv = 50,
		.lvl = 48,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 50,
		.lvl = 48,
		.species = SPECIES_HITMONTOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 50,
		.lvl = 48,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CrushGirlJocelyn[] = {
	{
		.iv = 50,
		.lvl = 38,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 50,
		.lvl = 38,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_TamerEvan[] = {
	{
		.iv = 40,
		.lvl = 48,
		.species = SPECIES_SANDSLASH,
	},
	{
		.iv = 40,
		.lvl = 48,
		.species = SPECIES_LICKITUNG,
	},
	{
		.iv = 40,
		.lvl = 49,
		.species = SPECIES_URSARING,
	},
};

static const struct TrainerMon sParty_PokemaniacMark2[] = {
	{
		.iv = 90,
		.lvl = 33,
		.species = SPECIES_RHYHORN,
	},
	{
		.iv = 90,
		.lvl = 33,
		.species = SPECIES_LICKITUNG,
	},
};

static const struct TrainerMon sParty_PkmnRangerLogan[] = {
	{
		.iv = 100,
		.lvl = 37,
		.species = SPECIES_EXEGGCUTE,
		.moves = { MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_CONFUSION },
	},
	{
		.iv = 100,
		.lvl = 40,
		.species = SPECIES_EXEGGUTOR,
		.moves = { MOVE_EGG_BOMB, MOVE_STOMP, MOVE_CONFUSION, MOVE_HYPNOSIS },
	},
};

static const struct TrainerMon sParty_PkmnRangerJackson[] = {
	{
		.iv = 100,
		.lvl = 49,
		.species = SPECIES_TANGELA,
		.moves = { MOVE_SLAM, MOVE_MEGA_DRAIN, MOVE_BIND, MOVE_INGRAIN },
	},
	{
		.iv = 100,
		.lvl = 49,
		.species = SPECIES_EXEGGCUTE,
		.moves = { MOVE_CONFUSION, MOVE_POISON_POWDER, MOVE_BARRAGE, MOVE_REFLECT },
	},
	{
		.iv = 100,
		.lvl = 49,
		.species = SPECIES_EXEGGUTOR,
		.moves = { MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_STOMP },
	},
};

static const struct TrainerMon sParty_PkmnRangerBeth[] = {
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_BELLSPROUT,
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_GLOOM,
	},
	{
		.iv = 100,
		.lvl = 38,
		.species = SPECIES_GLOOM,
	},
};

static const struct TrainerMon sParty_PkmnRangerKatelyn[] = {
	{
		.iv = 100,
		.lvl = 52,
		.species = SPECIES_CHANSEY,
		.moves = { MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED },
	},
};

static const struct TrainerMon sParty_CooltrainerLeroy[] = {
	{
		.iv = 100,
		.lvl = 47,
		.species = SPECIES_RHYDON,
		.moves = { MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE },
	},
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_SLOWBRO,
		.moves = { MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE },
	},
	{
		.iv = 100,
		.lvl = 47,
		.species = SPECIES_KANGASKHAN,
		.moves = { MOVE_DIZZY_PUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL },
	},
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_MACHOKE,
		.moves = { MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_SEISMIC_TOSS },
	},
	{
		.iv = 100,
		.lvl = 50,
		.species = SPECIES_URSARING,
		.moves = { MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_SNORE, MOVE_REST },
	},
};

static const struct TrainerMon sParty_CooltrainerMichelle[] = {
	{
		.iv = 100,
		.lvl = 47,
		.species = SPECIES_PERSIAN,
		.moves = { MOVE_SLASH, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_BITE },
	},
	{
		.iv = 100,
		.lvl = 47,
		.species = SPECIES_DEWGONG,
		.moves = { MOVE_ICE_BEAM, MOVE_TAKE_DOWN, MOVE_ICY_WIND, MOVE_GROWL },
	},
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_NINETALES,
		.moves = { MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_GRUDGE },
	},
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_RAPIDASH,
		.moves = { MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN },
	},
	{
		.iv = 100,
		.lvl = 50,
		.species = SPECIES_GIRAFARIG,
		.moves = { MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODOR_SLEUTH },
	},
};

static const struct TrainerMon sParty_CoolCoupleLexNya[] = {
	{
		.iv = 100,
		.lvl = 52,
		.species = SPECIES_MILTANK,
		.moves = { MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 100,
		.lvl = 52,
		.species = SPECIES_TAUROS,
		.moves = { MOVE_THRASH, MOVE_HORN_ATTACK, MOVE_PURSUIT, MOVE_SWAGGER },
	},
};

static const struct TrainerMon sParty_RuinManiacBrandon[] = {
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_ONIX,
	},
};

static const struct TrainerMon sParty_RuinManiacBenjamin[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_GEODUDE,
		.moves = { MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROLLOUT, MOVE_SELF_DESTRUCT },
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_GRAVELER,
		.moves = { MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT },
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_GRAVELER,
		.moves = { MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT },
	},
};

static const struct TrainerMon sParty_PainterEdna[] = {
	{
		.iv = 50,
		.lvl = 50,
		.species = SPECIES_SMEARGLE,
		.moves = { MOVE_FAKE_OUT, MOVE_EXTREME_SPEED, MOVE_PROTECT, MOVE_QUICK_ATTACK },
	},
};

static const struct TrainerMon sParty_GentlemanClifford[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_MAROWAK,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_GOLDUCK,
	},
};

static const struct TrainerMon sParty_LadySelphy[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_PERSIAN,
		.heldItem = ITEM_NUGGET,
		.moves = { MOVE_PAY_DAY, MOVE_BITE, MOVE_TAUNT, MOVE_TORMENT },
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_PERSIAN,
		.heldItem = ITEM_NUGGET,
		.moves = { MOVE_PAY_DAY, MOVE_SCRATCH, MOVE_TORMENT, MOVE_TAUNT },
	},
};

static const struct TrainerMon sParty_RuinManiacLawson[] = {
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_GRAVELER,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_MAROWAK,
	},
};

static const struct TrainerMon sParty_PsychicLaura[] = {
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_NATU,
	},
	{
		.iv = 100,
		.lvl = 48,
		.species = SPECIES_NATU,
	},
	{
		.iv = 100,
		.lvl = 49,
		.species = SPECIES_XATU,
	},
};

static const struct TrainerMon sParty_PkmnBreederBethany[] = {
	{
		.iv = 30,
		.lvl = 50,
		.species = SPECIES_CHANSEY,
	},
};

static const struct TrainerMon sParty_PkmnBreederAllison[] = {
	{
		.iv = 30,
		.lvl = 48,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 30,
		.lvl = 48,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 30,
		.lvl = 48,
		.species = SPECIES_CLEFABLE,
	},
};

static const struct TrainerMon sParty_BugCatcherGarret[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_HERACROSS,
	},
};

static const struct TrainerMon sParty_BugCatcherJonah[] = {
	{
		.iv = 0,
		.lvl = 45,
		.species = SPECIES_YANMA,
	},
	{
		.iv = 0,
		.lvl = 45,
		.species = SPECIES_BEEDRILL,
	},
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_YANMA,
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_BEEDRILL,
	},
};

static const struct TrainerMon sParty_BugCatcherVance[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_VENONAT,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_VENOMOTH,
	},
};

static const struct TrainerMon sParty_YoungsterNash[] = {
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_WEEPINBELL,
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_WEEPINBELL,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_VICTREEBEL,
	},
};

static const struct TrainerMon sParty_YoungsterCordell[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_FARFETCHD,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_FARFETCHD,
	},
};

static const struct TrainerMon sParty_LassDalia[] = {
	{
		.iv = 0,
		.lvl = 46,
		.species = SPECIES_HOPPIP,
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_HOPPIP,
	},
	{
		.iv = 0,
		.lvl = 47,
		.species = SPECIES_SKIPLOOM,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_SKIPLOOM,
	},
};

static const struct TrainerMon sParty_LassJoana[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_SNUBBULL,
	},
};

static const struct TrainerMon sParty_CamperRiley[] = {
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_PINSIR,
	},
	{
		.iv = 0,
		.lvl = 50,
		.species = SPECIES_HERACROSS,
	},
};

static const struct TrainerMon sParty_PicnickerMarcy[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_PARAS,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_PARAS,
	},
	{
		.iv = 0,
		.lvl = 49,
		.species = SPECIES_PARASECT,
	},
};

static const struct TrainerMon sParty_RuinManiacLayton[] = {
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_SANDSLASH,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 0,
		.lvl = 48,
		.species = SPECIES_SANDSLASH,
	},
};

static const struct TrainerMon sParty_PicnickerKelsey2[] = {
	{
		.iv = 20,
		.lvl = 21,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 20,
		.lvl = 21,
		.species = SPECIES_NIDORAN_F,
	},
};

static const struct TrainerMon sParty_PicnickerKelsey3[] = {
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_NIDORINO,
	},
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_NIDORINA,
	},
};

static const struct TrainerMon sParty_PicnickerKelsey4[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_NIDORINO,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_NIDORINA,
	},
};

static const struct TrainerMon sParty_CamperRicky2[] = {
	{
		.iv = 20,
		.lvl = 22,
		.species = SPECIES_SQUIRTLE,
	},
};

static const struct TrainerMon sParty_CamperRicky3[] = {
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_WARTORTLE,
	},
};

static const struct TrainerMon sParty_CamperRicky4[] = {
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_WARTORTLE,
	},
};

static const struct TrainerMon sParty_CamperJeff2[] = {
	{
		.iv = 20,
		.lvl = 21,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 20,
		.lvl = 21,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_CamperJeff3[] = {
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_CamperJeff4[] = {
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_PicnickerIsabelle2[] = {
	{
		.iv = 20,
		.lvl = 21,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 20,
		.lvl = 21,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 20,
		.lvl = 18,
		.species = SPECIES_PIDGEY,
	},
};

static const struct TrainerMon sParty_PicnickerIsabelle3[] = {
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 60,
		.lvl = 26,
		.species = SPECIES_PIDGEOTTO,
	},
};

static const struct TrainerMon sParty_PicnickerIsabelle4[] = {
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 80,
		.lvl = 50,
		.species = SPECIES_PIDGEOT,
	},
};

static const struct TrainerMon sParty_YoungsterYasu2[] = {
	{
		.iv = 40,
		.lvl = 22,
		.species = SPECIES_RATTATA,
	},
	{
		.iv = 40,
		.lvl = 22,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 40,
		.lvl = 22,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_YoungsterYasu3[] = {
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_RATICATE,
	},
};

static const struct TrainerMon sParty_EngineerBernie2[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_MAGNETON,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_MAGNETON,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_MAGNETON,
	},
};

static const struct TrainerMon sParty_GamerDarian2[] = {
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_VULPIX,
	},
};

static const struct TrainerMon sParty_CamperChris2[] = {
	{
		.iv = 40,
		.lvl = 24,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 40,
		.lvl = 24,
		.species = SPECIES_CHARMANDER,
	},
};

static const struct TrainerMon sParty_CamperChris3[] = {
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 60,
		.lvl = 29,
		.species = SPECIES_CHARMELEON,
	},
};

static const struct TrainerMon sParty_CamperChris4[] = {
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_ARCANINE,
	},
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_CHARMELEON,
	},
};

static const struct TrainerMon sParty_PicnickerAlicia2[] = {
	{
		.iv = 40,
		.lvl = 25,
		.species = SPECIES_MEOWTH,
	},
};

static const struct TrainerMon sParty_PicnickerAlicia3[] = {
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_PERSIAN,
	},
};

static const struct TrainerMon sParty_PicnickerAlicia4[] = {
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_PERSIAN,
	},
};

static const struct TrainerMon sParty_HikerJeremy2[] = {
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_MACHOKE,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_ONIX,
	},
};

static const struct TrainerMon sParty_PokemaniacMark3[] = {
	{
		.iv = 150,
		.lvl = 54,
		.species = SPECIES_RHYDON,
	},
	{
		.iv = 150,
		.lvl = 54,
		.species = SPECIES_LICKITUNG,
	},
};

static const struct TrainerMon sParty_PokemaniacHerman2[] = {
	{
		.iv = 90,
		.lvl = 29,
		.species = SPECIES_MAROWAK,
	},
	{
		.iv = 90,
		.lvl = 29,
		.species = SPECIES_SLOWBRO,
	},
};

static const struct TrainerMon sParty_PokemaniacHerman3[] = {
	{
		.iv = 150,
		.lvl = 54,
		.species = SPECIES_MAROWAK,
	},
	{
		.iv = 150,
		.lvl = 54,
		.species = SPECIES_SLOWBRO,
	},
};

static const struct TrainerMon sParty_HikerTrent2[] = {
	{
		.iv = 60,
		.lvl = 31,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 60,
		.lvl = 31,
		.species = SPECIES_GRAVELER,
	},
};

static const struct TrainerMon sParty_LassMegan2[] = {
	{
		.iv = 40,
		.lvl = 22,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 40,
		.lvl = 22,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 40,
		.lvl = 23,
		.species = SPECIES_NIDORAN_M,
	},
	{
		.iv = 40,
		.lvl = 21,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 40,
		.lvl = 22,
		.species = SPECIES_PIKACHU,
	},
};

static const struct TrainerMon sParty_LassMegan3[] = {
	{
		.iv = 80,
		.lvl = 46,
		.species = SPECIES_PIDGEOT,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_NIDORINO,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PERSIAN,
	},
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_RAICHU,
	},
};

static const struct TrainerMon sParty_SuperNerdGlenn2[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_MUK,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_MUK,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_MUK,
	},
};

static const struct TrainerMon sParty_GamerRich2[] = {
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_GROWLITHE,
	},
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_VULPIX,
	},
};

static const struct TrainerMon sParty_BikerJaren2[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_MUK,
	},
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_MUK,
	},
};

static const struct TrainerMon sParty_FishermanElliot2[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_CLOYSTER,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_SEADRA,
	},
};

static const struct TrainerMon sParty_RockerLuca2[] = {
	{
		.iv = 60,
		.lvl = 33,
		.species = SPECIES_ELECTRODE,
	},
	{
		.iv = 60,
		.lvl = 33,
		.species = SPECIES_ELECTRODE,
	},
};

static const struct TrainerMon sParty_BeautySheila2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_PERSIAN,
	},
};

static const struct TrainerMon sParty_BirdKeeperRobert2[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperRobert3[] = {
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PIDGEOT,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PIDGEOT,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_PicnickerSusie2[] = {
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_MEOWTH,
	},
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_MEOWTH,
	},
};

static const struct TrainerMon sParty_PicnickerSusie3[] = {
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PERSIAN,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_PERSIAN,
	},
};

static const struct TrainerMon sParty_PicnickerSusie4[] = {
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_PIDGEOT,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_PERSIAN,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_RAICHU,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_PERSIAN,
	},
};

static const struct TrainerMon sParty_BikerLukas2[] = {
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_KOFFING,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_KOFFING,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_MUK,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_WEEZING,
	},
};

static const struct TrainerMon sParty_BirdKeeperBenny2[] = {
	{
		.iv = 60,
		.lvl = 32,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 60,
		.lvl = 32,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperBenny3[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperMarlon2[] = {
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_DODUO,
	},
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperMarlon3[] = {
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_DODRIO,
	},
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BeautyGrace2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_PIDGEOT,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_WIGGLYTUFF,
	},
};

static const struct TrainerMon sParty_BirdKeeperChester2[] = {
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_DODRIO,
	},
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_DODRIO,
	},
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_DODUO,
	},
};

static const struct TrainerMon sParty_BirdKeeperChester3[] = {
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_DODRIO,
	},
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_DODRIO,
	},
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_DODRIO,
	},
};

static const struct TrainerMon sParty_PicnickerBecky2[] = {
	{
		.iv = 60,
		.lvl = 32,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 60,
		.lvl = 32,
		.species = SPECIES_RAICHU,
	},
};

static const struct TrainerMon sParty_PicnickerBecky3[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_RAICHU,
	},
};

static const struct TrainerMon sParty_PicnickerBecky4[] = {
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_RAICHU,
	},
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_RAICHU,
	},
};

static const struct TrainerMon sParty_CrushKinRonMya2[] = {
	{
		.iv = 110,
		.lvl = 33,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 110,
		.lvl = 33,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CrushKinRonMya3[] = {
	{
		.iv = 130,
		.lvl = 51,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 130,
		.lvl = 51,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CrushKinRonMya4[] = {
	{
		.iv = 170,
		.lvl = 56,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 170,
		.lvl = 56,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BikerRuben2[] = {
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_WEEZING,
	},
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_WEEZING,
	},
	{
		.iv = 80,
		.lvl = 48,
		.species = SPECIES_WEEZING,
	},
};

static const struct TrainerMon sParty_CueBallCamron2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_PRIMEAPE,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_BikerJaxon2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_WEEZING,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_MUK,
	},
};

static const struct TrainerMon sParty_CueBallIsaiah2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_MACHOKE,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_MACHAMP,
	},
};

static const struct TrainerMon sParty_CueBallCorey2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_PRIMEAPE,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_MACHAMP,
	},
};

static const struct TrainerMon sParty_BirdKeeperJacob2[] = {
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_SPEAROW,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 60,
		.lvl = 28,
		.species = SPECIES_SPEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperJacob3[] = {
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleAlice2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_SwimmerMaleDarrin2[] = {
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_SEADRA,
	},
};

static const struct TrainerMon sParty_PicnickerMissy2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_PicnickerMissy3[] = {
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_SEAKING,
	},
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_FishermanWade2[] = {
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_MAGIKARP,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_MAGIKARP,
	},
};

static const struct TrainerMon sParty_SwimmerMaleJack2[] = {
	{
		.iv = 80,
		.lvl = 50,
		.species = SPECIES_STARMIE,
	},
};

static const struct TrainerMon sParty_SisAndBroLilIan2[] = {
	{
		.iv = 80,
		.lvl = 50,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 80,
		.lvl = 50,
		.species = SPECIES_STARMIE,
	},
};

static const struct TrainerMon sParty_SisAndBroLilIan3[] = {
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_STARMIE,
	},
};

static const struct TrainerMon sParty_SwimmerMaleFinn2[] = {
	{
		.iv = 80,
		.lvl = 50,
		.species = SPECIES_STARMIE,
	},
};

static const struct TrainerMon sParty_CrushGirlSharon2[] = {
	{
		.iv = 130,
		.lvl = 50,
		.species = SPECIES_MANKEY,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 130,
		.lvl = 50,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CrushGirlSharon3[] = {
	{
		.iv = 170,
		.lvl = 55,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 170,
		.lvl = 55,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CrushGirlTanya2[] = {
	{
		.iv = 130,
		.lvl = 50,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 130,
		.lvl = 50,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CrushGirlTanya3[] = {
	{
		.iv = 170,
		.lvl = 55,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 170,
		.lvl = 55,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltShea2[] = {
	{
		.iv = 180,
		.lvl = 50,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 180,
		.lvl = 50,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltShea3[] = {
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_MACHAMP,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltHugh2[] = {
	{
		.iv = 180,
		.lvl = 50,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 180,
		.lvl = 50,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_BlackBeltHugh3[] = {
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_MACHAMP,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CrushKinMikKia2[] = {
	{
		.iv = 130,
		.lvl = 51,
		.species = SPECIES_MACHOKE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 130,
		.lvl = 51,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_CrushKinMikKia3[] = {
	{
		.iv = 170,
		.lvl = 56,
		.species = SPECIES_MACHAMP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 170,
		.lvl = 56,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_TuberAmira2[] = {
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 80,
		.lvl = 47,
		.species = SPECIES_POLIWHIRL,
	},
};

static const struct TrainerMon sParty_TwinsJoyMeg2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_CLEFAIRY,
	},
};

static const struct TrainerMon sParty_PainterRayna2[] = {
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_SMEARGLE,
		.moves = { MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT },
	},
};

static const struct TrainerMon sParty_YoungsterDestin2[] = {
	{
		.iv = 120,
		.lvl = 53,
		.species = SPECIES_RATICATE,
	},
	{
		.iv = 120,
		.lvl = 53,
		.species = SPECIES_PIDGEOT,
	},
};

static const struct TrainerMon sParty_PkmnBreederAlize2[] = {
	{
		.iv = 150,
		.lvl = 53,
		.species = SPECIES_PIKACHU,
	},
	{
		.iv = 150,
		.lvl = 53,
		.species = SPECIES_CLEFAIRY,
	},
	{
		.iv = 150,
		.lvl = 53,
		.species = SPECIES_MARILL,
	},
};

static const struct TrainerMon sParty_YoungCoupleGiaJes2[] = {
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_NIDORINA,
	},
	{
		.iv = 60,
		.lvl = 30,
		.species = SPECIES_NIDORINO,
	},
};

static const struct TrainerMon sParty_YoungCoupleGiaJes3[] = {
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_NIDOKING,
	},
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_NIDOQUEEN,
	},
};

static const struct TrainerMon sParty_BirdKeeperMilo2[] = {
	{
		.iv = 120,
		.lvl = 53,
		.species = SPECIES_PIDGEOTTO,
	},
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_PIDGEOT,
	},
};

static const struct TrainerMon sParty_BirdKeeperChaz2[] = {
	{
		.iv = 120,
		.lvl = 53,
		.species = SPECIES_FEAROW,
	},
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_FEAROW,
	},
};

static const struct TrainerMon sParty_BirdKeeperHarold2[] = {
	{
		.iv = 120,
		.lvl = 53,
		.species = SPECIES_NOCTOWL,
	},
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_NOCTOWL,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleNicole2[] = {
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_MARILL,
	},
};

static const struct TrainerMon sParty_PsychicJaclyn2[] = {
	{
		.iv = 220,
		.lvl = 52,
		.species = SPECIES_NATU,
		.moves = { MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_WISH },
	},
	{
		.iv = 220,
		.lvl = 52,
		.species = SPECIES_SLOWBRO,
		.moves = { MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_YAWN },
	},
	{
		.iv = 220,
		.lvl = 54,
		.species = SPECIES_KADABRA,
		.moves = { MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT },
	},
};

static const struct TrainerMon sParty_SwimmerMaleSamir2[] = {
	{
		.iv = 120,
		.lvl = 55,
		.species = SPECIES_GYARADOS,
	},
};

static const struct TrainerMon sParty_HikerEarl2[] = {
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_ONIX,
	},
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_MACHAMP,
	},
};

static const struct TrainerMon sParty_RuinManiacLarry2[] = {
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_MACHOKE,
	},
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_MACHOKE,
	},
};

static const struct TrainerMon sParty_PokemaniacHector2[] = {
	{
		.iv = 150,
		.lvl = 55,
		.species = SPECIES_RHYDON,
	},
	{
		.iv = 150,
		.lvl = 55,
		.species = SPECIES_KANGASKHAN,
	},
};

static const struct TrainerMon sParty_PsychicDario2[] = {
	{
		.iv = 220,
		.lvl = 56,
		.species = SPECIES_GIRAFARIG,
		.moves = { MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODOR_SLEUTH, MOVE_AGILITY },
	},
};

static const struct TrainerMon sParty_PsychicRodette2[] = {
	{
		.iv = 220,
		.lvl = 53,
		.species = SPECIES_NATU,
		.moves = { MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT },
	},
	{
		.iv = 220,
		.lvl = 53,
		.species = SPECIES_HYPNO,
		.moves = { MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT },
	},
	{
		.iv = 220,
		.lvl = 53,
		.species = SPECIES_HYPNO,
		.moves = { MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT },
	},
};

static const struct TrainerMon sParty_JugglerMason2[] = {
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_ELECTRODE,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_PINECO,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_ELECTRODE,
	},
	{
		.iv = 120,
		.lvl = 52,
		.species = SPECIES_PINECO,
	},
};

static const struct TrainerMon sParty_PkmnRangerNicolas2[] = {
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_VICTREEBEL,
		.moves = { MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP },
	},
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_VICTREEBEL,
		.moves = { MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_SLAM },
	},
};

static const struct TrainerMon sParty_PkmnRangerMadeline2[] = {
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_VILEPLUME,
		.moves = { MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_SLEEP_POWDER },
	},
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_VILEPLUME,
		.moves = { MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUN_SPORE },
	},
};

static const struct TrainerMon sParty_CrushGirlCyndy2[] = {
	{
		.iv = 170,
		.lvl = 54,
		.species = SPECIES_PRIMEAPE,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 170,
		.lvl = 54,
		.species = SPECIES_HITMONTOP,
		.heldItem = ITEM_BLACK_BELT,
	},
	{
		.iv = 170,
		.lvl = 54,
		.species = SPECIES_MACHAMP,
		.heldItem = ITEM_BLACK_BELT,
	},
};

static const struct TrainerMon sParty_TamerEvan2[] = {
	{
		.iv = 160,
		.lvl = 52,
		.species = SPECIES_SANDSLASH,
	},
	{
		.iv = 160,
		.lvl = 52,
		.species = SPECIES_LICKITUNG,
	},
	{
		.iv = 160,
		.lvl = 55,
		.species = SPECIES_URSARING,
	},
};

static const struct TrainerMon sParty_PkmnRangerJackson2[] = {
	{
		.iv = 220,
		.lvl = 53,
		.species = SPECIES_TANGELA,
		.moves = { MOVE_SLAM, MOVE_MEGA_DRAIN, MOVE_BIND, MOVE_INGRAIN },
	},
	{
		.iv = 220,
		.lvl = 54,
		.species = SPECIES_EXEGGUTOR,
		.moves = { MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_STUN_SPORE, MOVE_REFLECT },
	},
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_EXEGGUTOR,
		.moves = { MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_STOMP },
	},
};

static const struct TrainerMon sParty_PkmnRangerKatelyn2[] = {
	{
		.iv = 220,
		.lvl = 56,
		.species = SPECIES_CHANSEY,
		.moves = { MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED },
	},
};

static const struct TrainerMon sParty_CooltrainerLeroy2[] = {
	{
		.iv = 220,
		.lvl = 52,
		.species = SPECIES_RHYDON,
		.moves = { MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE },
	},
	{
		.iv = 220,
		.lvl = 54,
		.species = SPECIES_SLOWBRO,
		.moves = { MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE },
	},
	{
		.iv = 220,
		.lvl = 52,
		.species = SPECIES_KANGASKHAN,
		.moves = { MOVE_DIZZY_PUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL },
	},
	{
		.iv = 220,
		.lvl = 52,
		.species = SPECIES_MACHAMP,
		.moves = { MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_SEISMIC_TOSS },
	},
	{
		.iv = 220,
		.lvl = 55,
		.species = SPECIES_URSARING,
		.moves = { MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_SNORE, MOVE_REST },
	},
};

static const struct TrainerMon sParty_CooltrainerMichelle2[] = {
	{
		.iv = 220,
		.lvl = 53,
		.species = SPECIES_PERSIAN,
		.moves = { MOVE_SLASH, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_BITE },
	},
	{
		.iv = 220,
		.lvl = 53,
		.species = SPECIES_DEWGONG,
		.moves = { MOVE_ICE_BEAM, MOVE_TAKE_DOWN, MOVE_ICY_WIND, MOVE_SHEER_COLD },
	},
	{
		.iv = 220,
		.lvl = 54,
		.species = SPECIES_NINETALES,
		.moves = { MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_GRUDGE },
	},
	{
		.iv = 220,
		.lvl = 54,
		.species = SPECIES_RAPIDASH,
		.moves = { MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN },
	},
	{
		.iv = 220,
		.lvl = 56,
		.species = SPECIES_GIRAFARIG,
		.moves = { MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODOR_SLEUTH },
	},
};

static const struct TrainerMon sParty_CoolCoupleLexNya2[] = {
	{
		.iv = 220,
		.lvl = 57,
		.species = SPECIES_MILTANK,
		.moves = { MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL },
	},
	{
		.iv = 220,
		.lvl = 57,
		.species = SPECIES_TAUROS,
		.moves = { MOVE_TAKE_DOWN, MOVE_SCARY_FACE, MOVE_PURSUIT, MOVE_SWAGGER },
	},
};

static const struct TrainerMon sParty_BugCatcherColton2[] = {
	{
		.iv = 20,
		.lvl = 19,
		.species = SPECIES_METAPOD,
	},
	{
		.iv = 20,
		.lvl = 19,
		.species = SPECIES_WEEDLE,
	},
	{
		.iv = 20,
		.lvl = 19,
		.species = SPECIES_METAPOD,
	},
};

static const struct TrainerMon sParty_BugCatcherColton3[] = {
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_BUTTERFREE,
	},
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_KAKUNA,
	},
	{
		.iv = 60,
		.lvl = 27,
		.species = SPECIES_BUTTERFREE,
	},
};

static const struct TrainerMon sParty_BugCatcherColton4[] = {
	{
		.iv = 120,
		.lvl = 51,
		.species = SPECIES_BUTTERFREE,
	},
	{
		.iv = 120,
		.lvl = 54,
		.species = SPECIES_BEEDRILL,
	},
	{
		.iv = 120,
		.lvl = 51,
		.species = SPECIES_BUTTERFREE,
	},
};

static const struct TrainerMon sParty_SwimmerMaleMatthew2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_POLIWRATH,
	},
};

static const struct TrainerMon sParty_SwimmerMaleTony2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_SEADRA,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_SEADRA,
	},
};

static const struct TrainerMon sParty_SwimmerFemaleMelissa2[] = {
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_POLIWHIRL,
	},
	{
		.iv = 80,
		.lvl = 49,
		.species = SPECIES_SEAKING,
	},
};

static const struct TrainerMon sParty_EliteFourLorelei2[] = {
	{
		.iv = 255,
		.lvl = 64,
		.species = SPECIES_DEWGONG,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_DOUBLE_TEAM },
	},
	{
		.iv = 255,
		.lvl = 63,
		.species = SPECIES_CLOYSTER,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_ICE_BEAM, MOVE_SURF, MOVE_SUPERSONIC, MOVE_RAIN_DANCE },
	},
	{
		.iv = 255,
		.lvl = 63,
		.species = SPECIES_PILOSWINE,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE },
	},
	{
		.iv = 255,
		.lvl = 66,
		.species = SPECIES_JYNX,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_ATTRACT },
	},
	{
		.iv = 255,
		.lvl = 66,
		.species = SPECIES_LAPRAS,
		.heldItem = ITEM_CHERI_BERRY,
		.moves = { MOVE_ICE_BEAM, MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDER },
	},
};

static const struct TrainerMon sParty_EliteFourBruno2[] = {
	{
		.iv = 255,
		.lvl = 65,
		.species = SPECIES_STEELIX,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_ROCK_TOMB },
	},
	{
		.iv = 255,
		.lvl = 65,
		.species = SPECIES_HITMONCHAN,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_ROCK_SLIDE, MOVE_COUNTER },
	},
	{
		.iv = 255,
		.lvl = 65,
		.species = SPECIES_HITMONLEE,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_MEGA_KICK, MOVE_FORESIGHT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE },
	},
	{
		.iv = 255,
		.lvl = 66,
		.species = SPECIES_STEELIX,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_DRAGON_BREATH },
	},
	{
		.iv = 255,
		.lvl = 68,
		.species = SPECIES_MACHAMP,
		.heldItem = ITEM_PERSIM_BERRY,
		.moves = { MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE },
	},
};

static const struct TrainerMon sParty_EliteFourAgatha2[] = {
	{
		.iv = 255,
		.lvl = 66,
		.species = SPECIES_GENGAR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_HYPNOSIS },
	},
	{
		.iv = 255,
		.lvl = 66,
		.species = SPECIES_CROBAT,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SLUDGE_BOMB, MOVE_AIR_CUTTER, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY },
	},
	{
		.iv = 255,
		.lvl = 65,
		.species = SPECIES_MISDREAVUS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ATTRACT },
	},
	{
		.iv = 255,
		.lvl = 68,
		.species = SPECIES_ARBOK,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM },
	},
	{
		.iv = 255,
		.lvl = 70,
		.species = SPECIES_GENGAR,
		.heldItem = ITEM_CHESTO_BERRY,
		.moves = { MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB },
	},
};

static const struct TrainerMon sParty_EliteFourLance2[] = {
	{
		.iv = 255,
		.lvl = 68,
		.species = SPECIES_GYARADOS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE },
	},
	{
		.iv = 255,
		.lvl = 66,
		.species = SPECIES_DRAGONITE,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER },
	},
	{
		.iv = 255,
		.lvl = 66,
		.species = SPECIES_KINGDRA,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_ICE_BEAM },
	},
	{
		.iv = 255,
		.lvl = 70,
		.species = SPECIES_AERODACTYL,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE },
	},
	{
		.iv = 255,
		.lvl = 72,
		.species = SPECIES_DRAGONITE,
		.heldItem = ITEM_PERSIM_BERRY,
		.moves = { MOVE_HYPER_BEAM, MOVE_OUTRAGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM },
	},
};

static const struct TrainerMon sParty_ChampionRematchSquirtle[] = {
	{
		.iv = 255,
		.lvl = 72,
		.species = SPECIES_HERACROSS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_ALAKAZAM,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT },
	},
	{
		.iv = 255,
		.lvl = 72,
		.species = SPECIES_TYRANITAR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_ARCANINE,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_IRON_TAIL },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_EXEGGUTOR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN },
	},
	{
		.iv = 255,
		.lvl = 75,
		.species = SPECIES_BLASTOISE,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE },
	},
};

static const struct TrainerMon sParty_ChampionRematchBulbasaur[] = {
	{
		.iv = 255,
		.lvl = 72,
		.species = SPECIES_HERACROSS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_ALAKAZAM,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT },
	},
	{
		.iv = 255,
		.lvl = 72,
		.species = SPECIES_TYRANITAR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_GYARADOS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_ARCANINE,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_IRON_TAIL },
	},
	{
		.iv = 255,
		.lvl = 75,
		.species = SPECIES_VENUSAUR,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY },
	},
};

static const struct TrainerMon sParty_ChampionRematchCharmander[] = {
	{
		.iv = 255,
		.lvl = 72,
		.species = SPECIES_HERACROSS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_ALAKAZAM,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT },
	},
	{
		.iv = 255,
		.lvl = 72,
		.species = SPECIES_TYRANITAR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_EXEGGUTOR,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN },
	},
	{
		.iv = 255,
		.lvl = 73,
		.species = SPECIES_GYARADOS,
		.heldItem = ITEM_NONE,
		.moves = { MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM },
	},
	{
		.iv = 255,
		.lvl = 75,
		.species = SPECIES_CHARIZARD,
		.heldItem = ITEM_SITRUS_BERRY,
		.moves = { MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE },
	},
};

static const struct TrainerMon sParty_CueBallPaxton[] = {
	{
		.iv = 50,
		.lvl = 39,
		.species = SPECIES_WEEZING,
	},
	{
		.iv = 50,
		.lvl = 39,
		.species = SPECIES_MUK,
	},
};
