#include "../../include/moves.h"

const struct BattleMoveEx gNewBattleMoves[NEW_MOVES_COUNT] =
{
	[MOVE_NONE] =
	{
		.effect = EFFECT_HIT,
		.power = 40,
		.type = TYPE_MYSTERY,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_POUND] =
	{
		.effect = EFFECT_HIT,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_KARATECHOP] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 50,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DOUBLESLAP] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 15,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_COMETPUNCH] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 18,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MEGAPUNCH] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PAYDAY] =
	{
		.effect = EFFECT_PAY_DAY,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FIREPUNCH] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 75,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ICEPUNCH] =
	{
		.effect = EFFECT_FREEZE_HIT,
		.power = 75,
		.type = TYPE_ICE,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_THUNDERPUNCH] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 75,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SCRATCH] =
	{
		.effect = EFFECT_HIT,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_VICEGRIP] =
	{
		.effect = EFFECT_HIT,
		.power = 55,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GUILLOTINE] =
	{
		.effect = EFFECT_OHKO,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 30,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_RAZORWIND] =
	{
		.effect = EFFECT_RAZOR_WIND,
		.power = 80,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SWORDSDANCE] =
	{
		.effect = EFFECT_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CUT] =
	{
		.effect = EFFECT_HIT,
		.power = 50,
		.type = TYPE_NORMAL,
		.accuracy = 95,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GUST] =
	{
		.effect = EFFECT_GUST,
		.power = 40,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_WINGATTACK] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_WHIRLWIND] =
	{
		.effect = EFFECT_ROAR,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 250,
		.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLY] =
	{
		.effect = EFFECT_SEMI_INVULNERABLE,
		.power = 90,
		.type = TYPE_FLYING,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BIND] =
	{
		.effect = EFFECT_TRAP,
		.power = 15,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SLAM] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_NORMAL,
		.accuracy = 75,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_VINEWHIP] =
	{
		.effect = EFFECT_HIT,
		.power = 45,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_STOMP] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 65,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DOUBLEKICK] =
	{
		.effect = EFFECT_DOUBLE_HIT,
		.power = 30,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MEGAKICK] =
	{
		.effect = EFFECT_HIT,
		.power = 120,
		.type = TYPE_NORMAL,
		.accuracy = 75,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_JUMPKICK] =
	{
		.effect = EFFECT_RECOIL_IF_MISS,
		.power = 100,
		.type = TYPE_FIGHTING,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ROLLINGKICK] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 60,
		.type = TYPE_FIGHTING,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SANDATTACK] =
	{
		.effect = EFFECT_ACCURACY_DOWN,
		.power = 0,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HEADBUTT] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 70,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HORNATTACK] =
	{
		.effect = EFFECT_HIT,
		.power = 65,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FURYATTACK] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 15,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HORNDRILL] =
	{
		.effect = EFFECT_OHKO,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 30,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TACKLE] =
	{
		.effect = EFFECT_HIT,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BODYSLAM] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 85,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_WRAP] =
	{
		.effect = EFFECT_TRAP,
		.power = 15,
		.type = TYPE_NORMAL,
		.accuracy = 90,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TAKEDOWN] =
	{
		.effect = EFFECT_RECOIL,
		.power = 90,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_THRASH] =
	{
		.effect = EFFECT_RAMPAGE,
		.power = 120,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_RANDOM,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DOUBLEEDGE] =
	{
		.effect = EFFECT_RECOIL,
		.power = 120,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TAILWHIP] =
	{
		.effect = EFFECT_DEFENSE_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_POISONSTING] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 15,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TWINEEDLE] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 25,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PINMISSILE] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 25,
		.type = TYPE_BUG,
		.accuracy = 95,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LEER] =
	{
		.effect = EFFECT_DEFENSE_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BITE] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 60,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GROWL] =
	{
		.effect = EFFECT_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROAR] =
	{
		.effect = EFFECT_ROAR,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 250,
		.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SING] =
	{
		.effect = EFFECT_SLEEP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 55,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SUPERSONIC] =
	{
		.effect = EFFECT_CONFUSE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 55,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SONICBOOM] =
	{
		.effect = EFFECT_SONICBOOM,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 90,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DISABLE] =
	{
		.effect = EFFECT_DISABLE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ACID] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 40,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_EMBER] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 40,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FLAMETHROWER] =
	{
		.effect = EFFECT_BURN_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 90,
		#else
		.power = 95,
		#endif
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MIST] =
	{
		.effect = EFFECT_MIST,
		.power = 0,
		.type = TYPE_ICE,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WATERGUN] =
	{
		.effect = EFFECT_HIT,
		.power = 40,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HYDROPUMP] =
	{
		.effect = EFFECT_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 110,
		#else
		.power = 120,
		#endif
		.type = TYPE_WATER,
		.accuracy = 80,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SURF] =
	{
		.effect = EFFECT_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 90,
		#else
		.power = 95,
		#endif
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ICEBEAM] =
	{
		.effect = EFFECT_FREEZE_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 90,
		#else
		.power = 95,
		#endif
		.type = TYPE_ICE,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BLIZZARD] =
	{
		.effect = EFFECT_FREEZE_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 110,
		#else
		.power = 120,
		#endif
		.type = TYPE_ICE,
		.accuracy = 70,
		.pp = 5,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PSYBEAM] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 65,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BUBBLEBEAM] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 65,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_AURORABEAM] =
	{
		.effect = EFFECT_ATTACK_DOWN_HIT,
		.power = 65,
		.type = TYPE_ICE,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HYPERBEAM] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 150,
		.type = TYPE_NORMAL,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PECK] =
	{
		.effect = EFFECT_HIT,
		.power = 35,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DRILLPECK] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SUBMISSION] =
	{
		.effect = EFFECT_RECOIL,
		.power = 80,
		.type = TYPE_FIGHTING,
		.accuracy = 80,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LOWKICK] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_COUNTER] =
	{
		.effect = EFFECT_COUNTER,
		.power = 1,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 251,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SEISMICTOSS] =
	{
		.effect = EFFECT_LEVEL_DAMAGE,
		.power = 1,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_STRENGTH] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ABSORB] =
	{
		.effect = EFFECT_ABSORB,
		.power = 25,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MEGADRAIN] =
	{
		.effect = EFFECT_ABSORB,
		.power = 40,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_LEECHSEED] =
	{
		.effect = EFFECT_LEECH_SEED,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_GROWTH] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_RAZORLEAF] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 55,
		.type = TYPE_GRASS,
		.accuracy = 95,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SOLARBEAM] =
	{
		.effect = EFFECT_SOLAR_BEAM,
		.power = 120,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POISONPOWDER] =
	{
		.effect = EFFECT_POISON,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 75,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_STUNSPORE] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 75,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SLEEPPOWDER] =
	{
		.effect = EFFECT_SLEEP,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 75,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_PETALDANCE] =
	{
		.effect = EFFECT_RAMPAGE,
		.power = 120,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_RANDOM,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_STRINGSHOT] =
	{
		.effect = EFFECT_SPEED_DOWN_2,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 95,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DRAGONRAGE] =
	{
		.effect = EFFECT_DRAGON_RAGE,
		.power = 1,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FIRESPIN] =
	{
		.effect = EFFECT_TRAP,
		.power = 35,
		.type = TYPE_FIRE,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_THUNDERSHOCK] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 40,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_THUNDERBOLT] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 90,
		#else
		.power = 95,
		#endif
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_THUNDERWAVE] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 0,
		.type = TYPE_ELECTRIC,
		.accuracy = 90,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_THUNDER] =
	{
		.effect = EFFECT_THUNDER,
		#ifdef GEN_6_POWER_NERFS
		.power = 110,
		#else
		.power = 120,
		#endif
		.type = TYPE_ELECTRIC,
		.accuracy = 70,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ROCKTHROW] =
	{
		.effect = EFFECT_HIT,
		.power = 50,
		.type = TYPE_ROCK,
		.accuracy = 90,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_EARTHQUAKE] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FISSURE] =
	{
		.effect = EFFECT_OHKO,
		.power = 1,
		.type = TYPE_GROUND,
		.accuracy = 30,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DIG] =
	{
		.effect = EFFECT_SEMI_INVULNERABLE,
		.power = 80,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TOXIC] =
	{
		.effect = EFFECT_TOXIC,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CONFUSION] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 50,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PSYCHIC] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 90,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HYPNOSIS] =
	{
		.effect = EFFECT_SLEEP,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 60,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MEDITATE] =
	{
		.effect = EFFECT_ATTACK_UP,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_AGILITY] =
	{
		.effect = EFFECT_SPEED_UP_2,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_QUICKATTACK] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_RAGE] =
	{
		.effect = EFFECT_RAGE,
		.power = 20,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TELEPORT] =
	{
		.effect = EFFECT_TELEPORT,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 250,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_NIGHTSHADE] =
	{
		.effect = EFFECT_LEVEL_DAMAGE,
		.power = 1,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MIMIC] =
	{
		.effect = EFFECT_MIMIC,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SCREECH] =
	{
		.effect = EFFECT_DEFENSE_DOWN_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DOUBLETEAM] =
	{
		.effect = EFFECT_EVASION_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_RECOVER] =
	{
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HARDEN] =
	{
		.effect = EFFECT_DEFENSE_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MINIMIZE] =
	{
		.effect = EFFECT_MINIMIZE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SMOKESCREEN] =
	{
		.effect = EFFECT_ACCURACY_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CONFUSERAY] =
	{
		.effect = EFFECT_CONFUSE,
		.power = 0,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WITHDRAW] =
	{
		.effect = EFFECT_DEFENSE_UP,
		.power = 0,
		.type = TYPE_WATER,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DEFENSECURL] =
	{
		.effect = EFFECT_DEFENSE_CURL,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BARRIER] =
	{
		.effect = EFFECT_DEFENSE_UP_2,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_LIGHTSCREEN] =
	{
		.effect = EFFECT_LIGHT_SCREEN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HAZE] =
	{
		.effect = EFFECT_HAZE,
		.power = 0,
		.type = TYPE_ICE,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_REFLECT] =
	{
		.effect = EFFECT_REFLECT,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FOCUSENERGY] =
	{
		.effect = EFFECT_FOCUS_ENERGY,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BIDE] =
	{
		.effect = EFFECT_BIDE,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 1,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_METRONOME] =
	{
		.effect = EFFECT_METRONOME,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_MIRRORMOVE] =
	{
		.effect = EFFECT_MIRROR_MOVE,
		.power = 0,
		.type = TYPE_FLYING,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_SELFDESTRUCT] =
	{
		.effect = EFFECT_EXPLOSION,
		.power = 200,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_EGGBOMB] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_NORMAL,
		.accuracy = 75,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LICK] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 30,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SMOG] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 30,
		.type = TYPE_POISON,
		.accuracy = 70,
		.pp = 20,
		.secondaryEffectChance = 40,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SLUDGE] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 65,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BONECLUB] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 65,
		.type = TYPE_GROUND,
		.accuracy = 85,
		.pp = 20,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FIREBLAST] =
	{
		.effect = EFFECT_BURN_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 110,
		#else
		.power = 120,
		#endif
		.type = TYPE_FIRE,
		.accuracy = 85,
		.pp = 5,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_WATERFALL] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 80,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CLAMP] =
	{
		.effect = EFFECT_TRAP,
		.power = 35,
		.type = TYPE_WATER,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SWIFT] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 60,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SKULLBASH] =
	{
		.effect = EFFECT_SKULL_BASH,
		.power = 130,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SPIKECANNON] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 20,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CONSTRICT] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 10,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_AMNESIA] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_UP_2,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_KINESIS] =
	{
		.effect = EFFECT_ACCURACY_DOWN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 80,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SOFTBOILED] =
	{
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HIGHJUMPKICK] =
	{
		.effect = EFFECT_RECOIL_IF_MISS,
		.power = 130,
		.type = TYPE_FIGHTING,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GLARE] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DREAMEATER] =
	{
		.effect = EFFECT_DREAM_EATER,
		.power = 100,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POISONGAS] =
	{
		.effect = EFFECT_POISON,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 90,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BARRAGE] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 15,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LEECHLIFE] =
	{
		.effect = EFFECT_ABSORB,
		#ifdef BUFFED_LEECH_LIFE
		.power = 80,
		#else
		.power = 20,
		#endif
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		#ifdef BUFFED_LEECH_LIFE
		#else
		#endif
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LOVELYKISS] =
	{
		.effect = EFFECT_SLEEP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 75,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SKYATTACK] =
	{
		.effect = EFFECT_SKY_ATTACK,
		.power = 140,
		.type = TYPE_FLYING,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TRANSFORM] =
	{
		.effect = EFFECT_TRANSFORM,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_BUBBLE] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 40,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DIZZYPUNCH] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 70,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SPORE] =
	{
		.effect = EFFECT_SLEEP,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLASH] =
	{
		.effect = EFFECT_ACCURACY_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_PSYWAVE] =
	{
		.effect = EFFECT_PSYWAVE,
		.power = 1,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SPLASH] =
	{
		.effect = EFFECT_SPLASH,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_ACIDARMOR] =
	{
		.effect = EFFECT_DEFENSE_UP_2,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CRABHAMMER] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 100,
		.type = TYPE_WATER,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_EXPLOSION] =
	{
		.effect = EFFECT_EXPLOSION,
		.power = 250,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FURYSWIPES] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 18,
		.type = TYPE_NORMAL,
		.accuracy = 80,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BONEMERANG] =
	{
		.effect = EFFECT_DOUBLE_HIT,
		.power = 50,
		.type = TYPE_GROUND,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_REST] =
	{
		.effect = EFFECT_REST,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROCKSLIDE] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 75,
		.type = TYPE_ROCK,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HYPERFANG] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 80,
		.type = TYPE_NORMAL,
		.accuracy = 90,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SHARPEN] =
	{
		.effect = EFFECT_ATTACK_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CONVERSION] =
	{
		.effect = EFFECT_CONVERSION,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TRIATTACK] =
	{
		.effect = EFFECT_TRI_ATTACK,
		.power = 80,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SUPERFANG] =
	{
		.effect = EFFECT_SUPER_FANG,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SLASH] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 70,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SUBSTITUTE] =
	{
		.effect = EFFECT_SUBSTITUTE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_STRUGGLE] =
	{
		.effect = EFFECT_RECOIL,
		.power = 50,
		.type = TYPE_MYSTERY,
		.accuracy = 0,
		.pp = 1,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_RANDOM,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SKETCH] =
	{
		.effect = EFFECT_SKETCH,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 1,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_TRIPLEKICK] =
	{
		.effect = EFFECT_TRIPLE_KICK,
		.power = 10,
		.type = TYPE_FIGHTING,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_THIEF] =
	{
		.effect = EFFECT_THIEF,
		.power = 60,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SPIDERWEB] =
	{
		.effect = EFFECT_MEAN_LOOK,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MINDREADER] =
	{
		.effect = EFFECT_LOCK_ON,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_NIGHTMARE] =
	{
		.effect = EFFECT_NIGHTMARE,
		.power = 0,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLAMEWHEEL] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 60,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SNORE] =
	{
		.effect = EFFECT_SNORE,
		.power = 50,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_CURSE] =
	{
		.effect = EFFECT_CURSE,
		.power = 0,
		.type = TYPE_GHOST,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLAIL] =
	{
		.effect = EFFECT_FLAIL,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CONVERSION2] =
	{
		.effect = EFFECT_CONVERSION_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_AEROBLAST] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 100,
		.type = TYPE_FLYING,
		.accuracy = 95,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_COTTONSPORE] =
	{
		.effect = EFFECT_SPEED_DOWN_2,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_REVERSAL] =
	{
		.effect = EFFECT_FLAIL,
		.power = 1,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SPITE] =
	{
		.effect = EFFECT_SPITE,
		.power = 0,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_POWDERSNOW] =
	{
		.effect = EFFECT_FREEZE_HIT,
		.power = 40,
		.type = TYPE_ICE,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PROTECT] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_MACHPUNCH] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 40,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SCARYFACE] =
	{
		.effect = EFFECT_SPEED_DOWN_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FEINTATTACK] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 60,
		.type = TYPE_DARK,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SWEETKISS] =
	{
		.effect = EFFECT_CONFUSE,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 75,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BELLYDRUM] =
	{
		.effect = EFFECT_BELLY_DRUM,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SLUDGEBOMB] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 90,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MUDSLAP] =
	{
		.effect = EFFECT_ACCURACY_DOWN_HIT,
		.power = 20,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_OCTAZOOKA] =
	{
		.effect = EFFECT_ACCURACY_DOWN_HIT,
		.power = 65,
		.type = TYPE_WATER,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SPIKES] =
	{
		.effect = EFFECT_SPIKES,
		.power = 0,
		.type = TYPE_GROUND,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_OPPONENTS_FIELD,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ZAPCANNON] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 120,
		.type = TYPE_ELECTRIC,
		.accuracy = 50,
		.pp = 5,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FORESIGHT] =
	{
		.effect = EFFECT_FORESIGHT,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DESTINYBOND] =
	{
		.effect = EFFECT_DESTINY_BOND,
		.power = 0,
		.type = TYPE_GHOST,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_PERISHSONG] =
	{
		.effect = EFFECT_PERISH_SONG,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_ICYWIND] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 55,
		.type = TYPE_ICE,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DETECT] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_FIGHTING,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_BONERUSH] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 25,
		.type = TYPE_GROUND,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LOCKON] =
	{
		.effect = EFFECT_LOCK_ON,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_OUTRAGE] =
	{
		.effect = EFFECT_RAMPAGE,
		.power = 120,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_RANDOM,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SANDSTORM] =
	{
		.effect = EFFECT_SANDSTORM,
		.power = 0,
		.type = TYPE_ROCK,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_GIGADRAIN] =
	{
		.effect = EFFECT_ABSORB,
		.power = 75,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ENDURE] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_CHARM] =
	{
		.effect = EFFECT_ATTACK_DOWN_2,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROLLOUT] =
	{
		.effect = EFFECT_ROLLOUT,
		.power = 30,
		.type = TYPE_ROCK,
		.accuracy = 90,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FALSESWIPE] =
	{
		.effect = EFFECT_FALSE_SWIPE,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SWAGGER] =
	{
		.effect = EFFECT_SWAGGER,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MILKDRINK] =
	{
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SPARK] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 65,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FURYCUTTER] =
	{
		.effect = EFFECT_FURY_CUTTER,
		.power = 40,
		.type = TYPE_BUG,
		.accuracy = 95,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_STEELWING] =
	{
		.effect = EFFECT_DEFENSE_UP_HIT,
		.power = 70,
		.type = TYPE_STEEL,
		.accuracy = 90,
		.pp = 25,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MEANLOOK] =
	{
		.effect = EFFECT_MEAN_LOOK,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ATTRACT] =
	{
		.effect = EFFECT_ATTRACT,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SLEEPTALK] =
	{
		.effect = EFFECT_SLEEP_TALK,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_HEALBELL] =
	{
		.effect = EFFECT_HEAL_BELL,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_RETURN] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PRESENT] =
	{
		.effect = EFFECT_PRESENT,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 90,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FRUSTRATION] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SAFEGUARD] =
	{
		.effect = EFFECT_SAFEGUARD,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_PAINSPLIT] =
	{
		.effect = EFFECT_PAIN_SPLIT,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SACREDFIRE] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 100,
		.type = TYPE_FIRE,
		.accuracy = 95,
		.pp = 5,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MAGNITUDE] =
	{
		.effect = EFFECT_MAGNITUDE,
		.power = 1,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DYNAMICPUNCH] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 100,
		.type = TYPE_FIGHTING,
		.accuracy = 50,
		.pp = 5,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MEGAHORN] =
	{
		.effect = EFFECT_HIT,
		.power = 120,
		.type = TYPE_BUG,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DRAGONBREATH] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 60,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BATONPASS] =
	{
		.effect = EFFECT_BATON_PASS,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_ENCORE] =
	{
		.effect = EFFECT_ENCORE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_PURSUIT] =
	{
		.effect = EFFECT_PURSUIT,
		.power = 40,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_RAPIDSPIN] =
	{
		.effect = EFFECT_RAPID_SPIN,
		.power = 50,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SWEETSCENT] =
	{
		.effect = EFFECT_EVASION_DOWN_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_IRONTAIL] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 100,
		.type = TYPE_STEEL,
		.accuracy = 75,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_METALCLAW] =
	{
		.effect = EFFECT_ATTACK_UP_HIT,
		.power = 50,
		.type = TYPE_STEEL,
		.accuracy = 95,
		.pp = 35,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_VITALTHROW] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 70,
		.type = TYPE_FIGHTING,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 255,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MORNINGSUN] =
	{
		.effect = EFFECT_MORNING_SUN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SYNTHESIS] =
	{
		.effect = EFFECT_MORNING_SUN,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MOONLIGHT] =
	{
		.effect = EFFECT_MORNING_SUN,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HIDDENPOWER] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_CROSSCHOP] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 100,
		.type = TYPE_FIGHTING,
		.accuracy = 80,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TWISTER] =
	{
		.effect = EFFECT_TWISTER,
		.power = 40,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_RAINDANCE] =
	{
		.effect = EFFECT_RAIN_DANCE,
		.power = 0,
		.type = TYPE_WATER,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_SUNNYDAY] =
	{
		.effect = EFFECT_SUNNY_DAY,
		.power = 0,
		.type = TYPE_FIRE,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_CRUNCH] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 80,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MIRRORCOAT] =
	{
		.effect = EFFECT_MIRROR_COAT,
		.power = 1,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 251,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PSYCHUP] =
	{
		.effect = EFFECT_PSYCH_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_EXTREMESPEED] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 80,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 2,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ANCIENTPOWER] =
	{
		.effect = EFFECT_ALL_STATS_UP_HIT,
		.power = 60,
		.type = TYPE_ROCK,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SHADOWBALL] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 80,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FUTURESIGHT] =
	{
		.effect = EFFECT_FUTURE_SIGHT,
		.power = 120,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ROCKSMASH] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 40,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_WHIRLPOOL] =
	{
		.effect = EFFECT_TRAP,
		.power = 35,
		.type = TYPE_WATER,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BEATUP] =
	{
		.effect = EFFECT_BEAT_UP,
		.power = 1,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FAKEOUT] =
	{
		.effect = EFFECT_FAKE_OUT,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 3,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_UPROAR] =
	{
		.effect = EFFECT_UPROAR,
		.power = 90,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_RANDOM,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_STOCKPILE] =
	{
		.effect = EFFECT_STOCKPILE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SPITUP] =
	{
		.effect = EFFECT_SPIT_UP,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SWALLOW] =
	{
		.effect = EFFECT_SWALLOW,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HEATWAVE] =
	{
		.effect = EFFECT_BURN_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 95,
		#else
		.power = 100,
		#endif
		.type = TYPE_FIRE,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HAIL] =
	{
		.effect = EFFECT_HAIL,
		.power = 0,
		.type = TYPE_ICE,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_TORMENT] =
	{
		.effect = EFFECT_TORMENT,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLATTER] =
	{
		.effect = EFFECT_FLATTER,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WILLOWISP] =
	{
		.effect = EFFECT_WILL_O_WISP,
		.power = 0,
		.type = TYPE_FIRE,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MEMENTO] =
	{
		.effect = EFFECT_MEMENTO,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FACADE] =
	{
		.effect = EFFECT_HIT,
		.power = 70,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FOCUSPUNCH] =
	{
		.effect = EFFECT_FOCUS_PUNCH,
		.power = 150,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 253,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SMELLINGSALTS] =
	{
		.effect = EFFECT_SMELLINGSALT,
		.power = 70,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FOLLOWME] =
	{
		.effect = EFFECT_FOLLOW_ME,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 2,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_NATUREPOWER] =
	{
		.effect = EFFECT_NATURE_POWER,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_CHARGE] =
	{
		.effect = EFFECT_CHARGE,
		.power = 0,
		.type = TYPE_ELECTRIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TAUNT] =
	{
		.effect = EFFECT_TAUNT,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HELPINGHAND] =
	{
		.effect = EFFECT_HELPING_HAND,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 5,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_TRICK] =
	{
		.effect = EFFECT_TRICK,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROLEPLAY] =
	{
		.effect = EFFECT_ROLE_PLAY,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_WISH] =
	{
		.effect = EFFECT_WISH,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ASSIST] =
	{
		.effect = EFFECT_ASSIST,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_INGRAIN] =
	{
		.effect = EFFECT_INGRAIN,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SUPERPOWER] =
	{
		.effect = EFFECT_SUPERPOWER,
		.power = 120,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MAGICCOAT] =
	{
		.effect = EFFECT_MAGIC_COAT,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_RECYCLE] =
	{
		.effect = EFFECT_RECYCLE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_REVENGE] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 252,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BRICKBREAK] =
	{
		.effect = EFFECT_BRICK_BREAK,
		.power = 75,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_YAWN] =
	{
		.effect = EFFECT_YAWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_KNOCKOFF] =
	{
		.effect = EFFECT_KNOCK_OFF,
		.power = 65,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ENDEAVOR] =
	{
		.effect = EFFECT_ENDEAVOR,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ERUPTION] =
	{
		.effect = EFFECT_HIT,
		.power = 150,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SKILLSWAP] =
	{
		.effect = EFFECT_SKILL_SWAP,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_IMPRISON] =
	{
		.effect = EFFECT_IMPRISON,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_REFRESH] =
	{
		.effect = EFFECT_REFRESH,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_GRUDGE] =
	{
		.effect = EFFECT_GRUDGE,
		.power = 0,
		.type = TYPE_GHOST,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_SNATCH] =
	{
		.effect = EFFECT_SNATCH,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_SECRETPOWER] =
	{
		.effect = EFFECT_SECRET_POWER,
		.power = 70,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DIVE] =
	{
		.effect = EFFECT_SEMI_INVULNERABLE,
		.power = 80,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ARMTHRUST] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 15,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CAMOUFLAGE] =
	{
		.effect = EFFECT_CAMOUFLAGE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TAILGLOW] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_LUSTERPURGE] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 70,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MISTBALL] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
		.power = 70,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FEATHERDANCE] =
	{
		.effect = EFFECT_ATTACK_DOWN_2,
		.power = 0,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TEETERDANCE] =
	{
		.effect = EFFECT_CONFUSE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BLAZEKICK] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 85,
		.type = TYPE_FIRE,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MUDSPORT] =
	{
		.effect = EFFECT_MUD_SPORT,
		.power = 0,
		.type = TYPE_GROUND,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_ICEBALL] =
	{
		.effect = EFFECT_ROLLOUT,
		.power = 30,
		.type = TYPE_ICE,
		.accuracy = 90,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_NEEDLEARM] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 60,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SLACKOFF] =
	{
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HYPERVOICE] =
	{
		.effect = EFFECT_HIT,
		.power = 90,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POISONFANG] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 50,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CRUSHCLAW] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 75,
		.type = TYPE_NORMAL,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BLASTBURN] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 150,
		.type = TYPE_FIRE,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HYDROCANNON] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 150,
		.type = TYPE_WATER,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_METEORMASH] =
	{
		.effect = EFFECT_ATTACK_UP_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 90,
		#else
		.power = 100,
		#endif
		.type = TYPE_STEEL,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ASTONISH] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 30,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_WEATHERBALL] =
	{
		.effect = EFFECT_HIT,
		.power = 50,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_AROMATHERAPY] =
	{
		.effect = EFFECT_HEAL_BELL,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FAKETEARS] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_AIRCUTTER] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 60,
		.type = TYPE_FLYING,
		.accuracy = 95,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_OVERHEAT] =
	{
		.effect = EFFECT_OVERHEAT,
		#ifdef GEN_6_POWER_NERFS
		.power = 130,
		#else
		.power = 140,
		#endif
		.type = TYPE_FIRE,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ODORSLEUTH] =
	{
		.effect = EFFECT_FORESIGHT,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROCKTOMB] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 60,
		.type = TYPE_ROCK,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SILVERWIND] =
	{
		.effect = EFFECT_ALL_STATS_UP_HIT,
		.power = 60,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_METALSOUND] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
		.power = 0,
		.type = TYPE_STEEL,
		.accuracy = 85,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_GRASSWHISTLE] =
	{
		.effect = EFFECT_SLEEP,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 55,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TICKLE] =
	{
		.effect = EFFECT_TICKLE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_COSMICPOWER] =
	{
		.effect = EFFECT_COSMIC_POWER,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WATERSPOUT] =
	{
		.effect = EFFECT_HIT,
		.power = 150,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SIGNALBEAM] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 75,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SHADOWPUNCH] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 60,
		.type = TYPE_GHOST,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_EXTRASENSORY] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 80,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SKYUPPERCUT] =
	{
		.effect = EFFECT_HIT,
		.power = 85,
		.type = TYPE_FIGHTING,
		.accuracy = 90,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SANDTOMB] =
	{
		.effect = EFFECT_TRAP,
		.power = 35,
		.type = TYPE_GROUND,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SHEERCOLD] =
	{
		.effect = EFFECT_OHKO,
		.power = 1,
		.type = TYPE_ICE,
		.accuracy = 30,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MUDDYWATER] =
	{
		.effect = EFFECT_ACCURACY_DOWN_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 90,
		#else
		.power = 95,
		#endif
		.type = TYPE_WATER,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BULLETSEED] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 25,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_AERIALACE] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 60,
		.type = TYPE_FLYING,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ICICLESPEAR] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 25,
		.type = TYPE_ICE,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_IRONDEFENSE] =
	{
		.effect = EFFECT_DEFENSE_UP_2,
		.power = 0,
		.type = TYPE_STEEL,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BLOCK] =
	{
		.effect = EFFECT_MEAN_LOOK,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HOWL] =
	{
		.effect = EFFECT_ATTACK_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DRAGONCLAW] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FRENZYPLANT] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 150,
		.type = TYPE_GRASS,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BULKUP] =
	{
		.effect = EFFECT_BULK_UP,
		.power = 0,
		.type = TYPE_FIGHTING,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BOUNCE] =
	{
		.effect = EFFECT_SEMI_INVULNERABLE,
		.power = 85,
		.type = TYPE_FLYING,
		.accuracy = 85,
		.pp = 5,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MUDSHOT] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 55,
		.type = TYPE_GROUND,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POISONTAIL] =
	{
		.effect = EFFECT_POISON_TAIL,
		.power = 50,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_COVET] =
	{
		.effect = EFFECT_THIEF,
		.power = 60,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_VOLTTACKLE] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 120,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MAGICALLEAF] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 60,
		.type = TYPE_GRASS,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_WATERSPORT] =
	{
		.effect = EFFECT_WATER_SPORT,
		.power = 0,
		.type = TYPE_WATER,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_CALMMIND] =
	{
		.effect = EFFECT_CALM_MIND,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_LEAFBLADE] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 90,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DRAGONDANCE] =
	{
		.effect = EFFECT_DRAGON_DANCE,
		.power = 0,
		.type = TYPE_DRAGON,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROCKBLAST] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 25,
		.type = TYPE_ROCK,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SHOCKWAVE] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 60,
		.type = TYPE_ELECTRIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_WATERPULSE] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 60,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DOOMDESIRE] =
	{
		.effect = EFFECT_FUTURE_SIGHT,
		.power = 140,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PSYCHOBOOST] =
	{
		.effect = EFFECT_OVERHEAT,
		.power = 140,
		.type = TYPE_PSYCHIC,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_LEECHFANG] =
	{
		.effect = EFFECT_ABSORB,
		.power = 80,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_AIRSLASH] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 75,
		.type = TYPE_FLYING,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_AQUAJET] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 40,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_AQUATAIL] =
	{
		.effect = EFFECT_HIT,
		.power = 90,
		.type = TYPE_WATER,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_AURASPHERE] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 80,
		#else
		.power = 90,
		#endif
		.type = TYPE_FIGHTING,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_AVALANCHE] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_ICE,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 252,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BRAVEBIRD] =
	{
		.effect = EFFECT_RECOIL,
		.power = 120,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BUGBUZZ] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 90,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BULLETPUNCH] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 40,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CHARGEBEAM] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP,
		.power = 50,
		.type = TYPE_ELECTRIC,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 70,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_CLOSECOMBAT] =
	{
		.effect = EFFECT_SUPERPOWER,
		.power = 120,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CROSSPOISON] =
	{
		.effect = EFFECT_POISON_TAIL,
		.power = 70,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DARKPULSE] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 80,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DISCHARGE] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 80,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DRACOMETEOR] =
	{
		.effect = EFFECT_OVERHEAT,
		#ifdef GEN_6_POWER_NERFS
		.power = 130,
		#else
		.power = 140,
		#endif
		.type = TYPE_DRAGON,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DRAGONPULSE] =
	{
		.effect = EFFECT_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 85,
		#else
		.power = 90,
		#endif
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DRAINPUNCH] =
	{
		.effect = EFFECT_ABSORB,
		.power = 75,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_EARTHPOWER] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 90,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ENERGYBALL] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 90,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FOCUSBLAST] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 120,
		.type = TYPE_FIGHTING,
		.accuracy = 70,
		.pp = 5,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FORCEPALM] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 60,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GIGAIMPACT] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 150,
		.type = TYPE_NORMAL,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GRASSKNOT] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_GUNKSHOT] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 120,
		.type = TYPE_POISON,
		.accuracy = 80,
		.pp = 5,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HAMMERARM] =
	{
		.effect = EFFECT_SUPERPOWER,
		.power = 100,
		.type = TYPE_FIGHTING,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HEADSMASH] =
	{
		.effect = EFFECT_RECOIL,
		.power = 150,
		.type = TYPE_ROCK,
		.accuracy = 80,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ICESHARD] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 40,
		.type = TYPE_ICE,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_IRONHEAD] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 80,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LAVAPLUME] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 80,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MAGNETBOMB] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 60,
		.type = TYPE_STEEL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MUDBOMB] =
	{
		.effect = EFFECT_ACCURACY_DOWN_HIT,
		.power = 65,
		.type = TYPE_GROUND,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_NASTYPLOT] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_NIGHTSLASH] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 70,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_OMINOUSWIND] =
	{
		.effect = EFFECT_ALL_STATS_UP_HIT,
		.power = 60,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POWERGEM] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_ROCK,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POWERWHIP] =
	{
		.effect = EFFECT_HIT,
		.power = 120,
		.type = TYPE_GRASS,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PSYCHOCUT] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 70,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ROCKCLIMB] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 90,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 20,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ROCKPOLISH] =
	{
		.effect = EFFECT_SPEED_UP_2,
		.power = 0,
		.type = TYPE_ROCK,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROCKWRECKER] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 150,
		.type = TYPE_ROCK,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ROOST] =
	{
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_FLYING,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SEEDBOMB] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SHADOWCLAW] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 70,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SHADOWSNEAK] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 40,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_VACUUMWAVE] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 40,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_XSCISSOR] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ZENHEADBUTT] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 80,
		.type = TYPE_PSYCHIC,
		.accuracy = 90,
		.pp = 15,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SWITCHEROO] =
	{
		.effect = EFFECT_TRICK,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DRILLRUN] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 80,
		.type = TYPE_GROUND,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BULLDOZE] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 60,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ELECTROWEB] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 55,
		.type = TYPE_ELECTRIC,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FLAMECHARGE] =
	{
		.effect = EFFECT_SPEED_UP,
		.power = 50,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FROSTBREATH] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_ICE,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HEARTSTAMP] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 60,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HONECLAWS] =
	{
		.effect = EFFECT_ATTACK_UP,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HORNLEECH] =
	{
		.effect = EFFECT_ABSORB,
		.power = 75,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_COIL] =
	{
		.effect = EFFECT_BULK_UP,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HURRICANE] =
	{
		.effect = EFFECT_THUNDER,
		#ifdef GEN_6_POWER_NERFS
		.power = 110,
		#else
		.power = 120,
		#endif
		.type = TYPE_FLYING,
		.accuracy = 70,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ICICLECRASH] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 85,
		.type = TYPE_ICE,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_WORKUP] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_QUIVERDANCE] =
	{
		.effect = EFFECT_CALM_MIND,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_LEAFTORNADO] =
	{
		.effect = EFFECT_ACCURACY_DOWN_HIT,
		.power = 65,
		.type = TYPE_GRASS,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_LOWSWEEP] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 65,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SNARL] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
		.power = 55,
		.type = TYPE_DARK,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_STRUGGLEBUG] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
		.power = 50,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_STEAMROLLER] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 65,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_STORMTHROW] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_VENOSHOCK] =
	{
		.effect = EFFECT_HIT,
		.power = 65,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_WILDCHARGE] =
	{
		.effect = EFFECT_RECOIL,
		.power = 90,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_POISONJAB] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 80,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ACIDSPRAY] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 40,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FIERYDANCE] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP,
		.power = 80,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_CLEARSMOG] =
	{
		.effect = EFFECT_SAFEGUARD,
		.power = 50,
		.type = TYPE_POISON,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_LEAFSTORM] =
	{
		.effect = EFFECT_OVERHEAT,
		#ifdef GEN_6_POWER_NERFS
		.power = 130,
		#else
		.power = 140,
		#endif
		.type = TYPE_GRASS,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_STONEEDGE] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 100,
		.type = TYPE_ROCK,
		.accuracy = 80,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PAYBACK] =
	{
		.effect = EFFECT_HIT,
		.power = 50,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FIREFANG] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 65,
		.type = TYPE_FIRE,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ICEFANG] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 65,
		.type = TYPE_ICE,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_THUNDERFANG] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 65,
		.type = TYPE_ELECTRIC,
		.accuracy = 95,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FLAREBLITZ] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 120,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_INFERNO] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 100,
		.type = TYPE_FIRE,
		.accuracy = 50,
		.pp = 5,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HEX] =
	{
		.effect = EFFECT_HIT,
		.power = 65,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DUALCHOP] =
	{
		.effect = EFFECT_DOUBLE_HIT,
		.power = 40,
		.type = TYPE_DRAGON,
		.accuracy = 90,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DOUBLEHIT] =
	{
		.effect = EFFECT_DOUBLE_HIT,
		.power = 35,
		.type = TYPE_NORMAL,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_COTTONGUARD] =
	{
		.effect = EFFECT_DEFENSE_UP_2,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ACROBATICS] =
	{
		.effect = EFFECT_HIT,
		.power = 55,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FLAMEBURST] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 70,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_UTURN] =
	{
		.effect = EFFECT_BATON_PASS,
		.power = 70,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_VOLTSWITCH] =
	{
		.effect = EFFECT_BATON_PASS,
		.power = 70,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DRAGONTAIL] =
	{
		.effect = EFFECT_ROAR,
		.power = 60,
		.type = TYPE_DRAGON,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 250,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CIRCLETHROW] =
	{
		.effect = EFFECT_ROAR,
		.power = 60,
		.type = TYPE_FIGHTING,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 250,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MIRRORSHOT] =
	{
		.effect = EFFECT_ACCURACY_DOWN_HIT,
		.power = 65,
		.type = TYPE_STEEL,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_WOODHAMMER] =
	{
		.effect = EFFECT_RECOIL,
		.power = 120,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HEALPULSE] =
	{
		.effect = EFFECT_HEAL_BELL,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLASHCANNON] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 80,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BUGBITE] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PLUCK] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SHELLSMASH] =
	{
		.effect = EFFECT_DRAGON_DANCE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_RAGEPOWDER] =
	{
		.effect = EFFECT_FOLLOW_ME,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 2,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_WAKEUPSLAP] =
	{
		.effect = EFFECT_SMELLINGSALT,
		.power = 70,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_RAZORSHELL] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 75,
		.type = TYPE_WATER,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_COPYCAT] =
	{
		.effect = EFFECT_MIRROR_MOVE,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_MIRACLEEYE] =
	{
		.effect = EFFECT_FORESIGHT,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SUCKERPUNCH] =
	{
		.effect = EFFECT_ABSORB,
		#ifdef GEN_7_POWER_NERFS
		.power = 70,
		#else
		.power = 80,
		#endif
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SCALD] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 80,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BRINE] =
	{
		.effect = EFFECT_HIT,
		.power = 65,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FAIRYWIND] =
	{
		.effect = EFFECT_HIT,
		.power = 40,
		.type = TYPE_FAIRY,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BABYDOLLEYES] =
	{
		.effect = EFFECT_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_PLAYROUGH] =
	{
		.effect = EFFECT_ATTACK_DOWN_HIT,
		.power = 90,
		.type = TYPE_FAIRY,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MOONBLAST] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
		.power = 95,
		.type = TYPE_FAIRY,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DRAININGKISS] =
	{
		.effect = EFFECT_ABSORB,
		.power = 50,
		.type = TYPE_FAIRY,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DAZZLINGGLEAM] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_FAIRY,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DISARMINGVOICE] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 40,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_STEALTHROCK] =
	{
		.effect = EFFECT_SPIKES,
		.power = 0,
		.type = TYPE_ROCK,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_OPPONENTS_FIELD,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TOXICSPIKES] =
	{
		.effect = EFFECT_SPIKES,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_OPPONENTS_FIELD,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HEALINGWISH] =
	{
		.effect = EFFECT_MEMENTO,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_LUNARDANCE] =
	{
		.effect = EFFECT_MEMENTO,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TAILWIND] =
	{
		.effect = EFFECT_GUST,
		.power = 0,
		.type = TYPE_FLYING,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BOOMBURST] =
	{
		.effect = EFFECT_HIT,
		.power = 140,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_INCINERATE] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_WORRYSEED] =
	{
		.effect = EFFECT_SKILL_SWAP,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_GASTROACID] =
	{
		.effect = EFFECT_SKILL_SWAP,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_GEOMANCY] =
	{
		.effect = EFFECT_CALM_MIND,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLOWERSHIELD] =
	{
		.effect = EFFECT_DEFENSE_UP,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROTOTILLER] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP,
		.power = 0,
		.type = TYPE_GROUND,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_SHIFTGEAR] =
	{
		.effect = EFFECT_DRAGON_DANCE,
		.power = 0,
		.type = TYPE_STEEL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_STICKYWEB] =
	{
		.effect = EFFECT_SPIKES,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_OPPONENTS_FIELD,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_STOREDPOWER] =
	{
		.effect = EFFECT_HIT,
		.power = 20,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ACUPRESSURE] =
	{
		.effect = EFFECT_EVASION_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER_OR_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_PUNISHMENT] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ASSURANCE] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DRAGONRUSH] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 100,
		.type = TYPE_DRAGON,
		.accuracy = 75,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DARKVOID] =
	{
		.effect = EFFECT_SLEEP,
		.power = 0,
		.type = TYPE_DARK,
		#ifdef DARK_VOID_ACC_NERF
		.accuracy = 50,
		#else
		.accuracy = 80,
		#endif
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FEINT] =
	{
		.effect = EFFECT_HIT,
		#ifndef UNBOUND
		.power = 30,
		#else //For Pokemon Unbound
		.power = 50,
		#endif
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 2,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PHANTOMFORCE] =
	{
		.effect = EFFECT_SEMI_INVULNERABLE,
		.power = 90,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PETALBLIZZARD] =
	{
		.effect = EFFECT_HIT,
		.power = 90,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PLAYNICE] =
	{
		.effect = EFFECT_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ROAROFTIME] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 150,
		.type = TYPE_DRAGON,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SPACIALREND] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 100,
		.type = TYPE_DRAGON,
		.accuracy = 95,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MAGMASTORM] =
	{
		.effect = EFFECT_TRAP,
		#ifdef GEN_6_POWER_NERFS
		.power = 100,
		#else
		.power = 120,
		#endif
		.type = TYPE_FIRE,
		.accuracy = 75,
		.pp = 5,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FINALGAMBIT] =
	{
		.effect = EFFECT_MEMENTO,
		.power = 1,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SHADOWFORCE] =
	{
		.effect = EFFECT_SEMI_INVULNERABLE,
		.power = 120,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_NUZZLE] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 20,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_RETALIATE] =
	{
		.effect = EFFECT_HIT,
		.power = 70,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_STEELYHIT] =
	{
		.effect = EFFECT_HIT,
		.power = 40,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_JUDGMENT] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FREEZEDRY] =
	{
		.effect = EFFECT_FREEZE_HIT,
		.power = 70,
		.type = TYPE_ICE,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PSYSHOCK] =
	{
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ROUND] =
	{
		.effect = EFFECT_FURY_CUTTER,
		.power = 60,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_TAILSLAP] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 25,
		.type = TYPE_NORMAL,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GEARGRIND] =
	{
		.effect = EFFECT_DOUBLE_HIT,
		.power = 50,
		.type = TYPE_STEEL,
		.accuracy = 85,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_NATURALGIFT] =
	{
		.effect = EFFECT_NATURE_POWER,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CHIPAWAY] =
	{
		.effect = EFFECT_HIT,
		.power = 70,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SMACKDOWN] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 50,
		.type = TYPE_ROCK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HYPERSPACEHOLE] =
	{
		.effect = EFFECT_SUPERPOWER,
		.power = 80,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_GYROBALL] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HYPERSPACEFURY] =
	{
		.effect = EFFECT_SUPERPOWER,
		.power = 100,
		.type = TYPE_DARK,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ATTACKORDER] =
	{
		.effect = EFFECT_HIGH_CRITICAL,
		.power = 90,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DEFENDORDER] =
	{
		.effect = EFFECT_COSMIC_POWER,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HEALORDER] =
	{
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CAPTIVATE] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DEFOG] =
	{
		.effect = EFFECT_RAPID_SPIN,
		.power = 0,
		.type = TYPE_FLYING,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_ORIGINPULSE] =
	{
		.effect = EFFECT_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 110,
		#else
		.power = 120,
		#endif
		.type = TYPE_WATER,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PRECIPICEBLADES] =
	{
		.effect = EFFECT_HIT,
		.power = 120,
		.type = TYPE_GROUND,
		.accuracy = 85,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GUARDSWAP] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_STEAMERUPTION] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 120,
		.type = TYPE_WATER,
		.accuracy = 95,
		.pp = 5,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_METALBURST] =
	{
		.effect = EFFECT_COUNTER,
		.power = 1,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_DEPENDS,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MEFIRST] =
	{
		.effect = EFFECT_MIMIC,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_POWERSWAP] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_POWERTRICK] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_PSYCHOSHIFT] =
	{
		.effect = EFFECT_REFRESH,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WRINGOUT] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_KINGSSHIELD] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_STEEL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_PSYSTRIKE] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_AUTOTOMIZE] =
	{
		.effect = EFFECT_SPEED_UP_2,
		.power = 0,
		.type = TYPE_STEEL,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DIAMONDSTORM] =
	{
		.effect = EFFECT_DEFENSE_UP_2,
		.power = 100,
		.type = TYPE_ROCK,
		.accuracy = 95,
		.pp = 5,
		.secondaryEffectChance = 50,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SLUDGEWAVE] =
	{
		.effect = EFFECT_POISON_HIT,
		.power = 95,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HEAVYSLAM] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SYNCHRONOISE] =
	{
		.effect = EFFECT_SPEED_UP,
		.power = 120,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ELECTROBALL] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FOULPLAY] =
	{
		.effect = EFFECT_HIT,
		.power = 95,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ENTRAINMENT] =
	{
		.effect = EFFECT_SKILL_SWAP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_NIGHTDAZE] =
	{
		.effect = EFFECT_ACCURACY_DOWN_HIT,
		.power = 85,
		.type = TYPE_DARK,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 40,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ECHOEDVOICE] =
	{
		.effect = EFFECT_FURY_CUTTER,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_LANDSWRATH] =
	{
		.effect = EFFECT_HIT,
		.power = 90,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_OBLIVIONWING] =
	{
		.effect = EFFECT_ABSORB,
		.power = 80,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_HEARTSWAP] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CRUSHGRIP] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SACREDSWORD] =
	{
		.effect = EFFECT_HIT,
		.power = 90,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HEATCRASH] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_HEADCHARGE] =
	{
		.effect = EFFECT_RECOIL,
		.power = 120,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TECHNOBLAST] =
	{
		.effect = EFFECT_HIT,
		.power = 120,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_RELICSONG] =
	{
		.effect = EFFECT_PERISH_SONG,
		.power = 75,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SECRETSWORD] =
	{
		.effect = EFFECT_HIT,
		.power = 85,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_GLACIATE] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 65,
		.type = TYPE_ICE,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BOLTSTRIKE] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 130,
		.type = TYPE_ELECTRIC,
		.accuracy = 85,
		.pp = 5,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BLUEFLARE] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 130,
		.type = TYPE_FIRE,
		.accuracy = 85,
		.pp = 5,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FREEZESHOCK] =
	{
		.effect = EFFECT_SKY_ATTACK,
		.power = 140,
		.type = TYPE_ICE,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ICEBURN] =
	{
		.effect = EFFECT_SKY_ATTACK,
		.power = 140,
		.type = TYPE_ICE,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_VCREATE] =
	{
		.effect = EFFECT_SUPERPOWER,
		.power = 180,
		.type = TYPE_FIRE,
		.accuracy = 95,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FUSIONFLARE] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FUSIONBOLT] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FELLSTINGER] =
	{
		.effect = EFFECT_ATTACK_UP_HIT,
		.power = 50,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_NOBLEROAR] =
	{
		.effect = EFFECT_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DRAGONASCENT] =
	{
		.effect = EFFECT_SUPERPOWER,
		.power = 120,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PARTINGSHOT] =
	{
		.effect = EFFECT_BATON_PASS,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TOPSYTURVY] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_COREENFORCER] =
	{
		.effect = EFFECT_SKILL_SWAP,
		.power = 100,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_CHATTER] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 65,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_CONFIDE] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WATERSHURIKEN] =
	{
		.effect = EFFECT_MULTI_HIT,
		.power = 15,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MYSTICALFIRE] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
		.power = 75,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SPIKYSHIELD] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_EERIEIMPULSE] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_2,
		.power = 0,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HOLDBACK] =
	{
		.effect = EFFECT_FALSE_SWIPE,
		.power = 40,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_INFESTATION] =
	{
		.effect = EFFECT_TRAP,
		.power = 20,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POWERUPPUNCH] =
	{
		.effect = EFFECT_ATTACK_UP_HIT,
		.power = 40,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_THOUSANDARROWS] =
	{
		.effect = EFFECT_PARALYZE_HIT,
		.power = 90,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_THOUSANDWAVES] =
	{
		.effect = EFFECT_MEAN_LOOK,
		.power = 90,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PARABOLICCHARGE] =
	{
		.effect = EFFECT_ABSORB,
		.power = 65,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SEARINGSHOT] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 100,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SEEDFLARE] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 120,
		.type = TYPE_GRASS,
		.accuracy = 85,
		.pp = 5,
		.secondaryEffectChance = 40,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_ACCELEROCK] =
	{
		.effect = EFFECT_QUICK_ATTACK,
		.power = 40,
		.type = TYPE_ROCK,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ANCHORSHOT] =
	{
		.effect = EFFECT_MEAN_LOOK,
		.power = 80,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_AURORAVEIL] =
	{
		.effect = EFFECT_REFLECT,
		.power = 0,
		.type = TYPE_ICE,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BANEFULBUNKER] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_BEAKBLAST] =
	{
		.effect = EFFECT_FOCUS_PUNCH,
		.power = 100,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 253,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BRUTALSWING] =
	{
		.effect = EFFECT_HIT,
		.power = 60,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BURNUP] =
	{
		.effect = EFFECT_BURN_HIT,
		#ifdef GEN_6_POWER_NERFS
		.power = 130,
		#else
		.power = 140,
		#endif
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_CLANGINGSCALES] =
	{
		.effect = EFFECT_SUPERPOWER,
		#ifdef GEN_6_POWER_NERFS
		.power = 110,
		#else
		.power = 120,
		#endif
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DARKESTLARIAT] =
	{
		.effect = EFFECT_HIT,
		.power = 85,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DRAGONHAMMER] =
	{
		.effect = EFFECT_HIT,
		.power = 90,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FIRELASH] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 80,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FIRSTIMPRESSION] =
	{
		.effect = EFFECT_FAKE_OUT,
		.power = 90,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 2,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FLEURCANNON] =
	{
		.effect = EFFECT_OVERHEAT,
		#ifdef GEN_6_POWER_NERFS
		.power = 130,
		#else
		.power = 140,
		#endif
		.type = TYPE_FAIRY,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FLORALHEALING] =
	{
		.effect = EFFECT_HEAL_BELL,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_GEARUP] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP,
		.power = 0,
		.type = TYPE_STEEL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HIGHHORSEPOWER] =
	{
		.effect = EFFECT_HIT,
		.power = 95,
		.type = TYPE_GROUND,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ICEHAMMER] =
	{
		.effect = EFFECT_SUPERPOWER,
		.power = 100,
		.type = TYPE_ICE,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LASERFOCUS] =
	{
		.effect = EFFECT_LOCK_ON,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_LEAFAGE] =
	{
		.effect = EFFECT_HIT,
		.power = 40,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LIQUIDATION] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 85,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LUNGE] =
	{
		.effect = EFFECT_ATTACK_DOWN_HIT,
		.power = 80,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_MOONGEISTBEAM] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MULTIATTACK] =
	{
		.effect = EFFECT_HIT,
		.power = 120,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_NATURESMADNESS] =
	{
		.effect = EFFECT_SUPER_FANG,
		.power = 1,
		.type = TYPE_FAIRY,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POLLENPUFF] =
	{
		.effect = EFFECT_HEAL_BELL,
		.power = 90,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_POWERTRIP] =
	{
		.effect = EFFECT_HIT,
		.power = 20,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PRISMATICLASER] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 160,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PSYCHICFANGS] =
	{
		.effect = EFFECT_BRICK_BREAK,
		.power = 85,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PURIFY] =
	{
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_REVELATIONDANCE] =
	{
		.effect = EFFECT_HIT,
		.power = 90,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SHADOWBONE] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 85,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SHELLTRAP] =
	{
		.effect = EFFECT_FOCUS_PUNCH,
		.power = 150,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 253,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SHOREUP] =
	{
		.effect = EFFECT_MORNING_SUN,
		.power = 0,
		.type = TYPE_GROUND,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SMARTSTRIKE] =
	{
		.effect = EFFECT_ALWAYS_HIT,
		.power = 70,
		.type = TYPE_STEEL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SOLARBLADE] =
	{
		.effect = EFFECT_SOLAR_BEAM,
		.power = 125,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SPARKLINGARIA] =
	{
		.effect = EFFECT_SMELLINGSALT,
		.power = 90,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SPECTRALTHIEF] =
	{
		.effect = EFFECT_PSYCH_UP,
		.power = 90,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SPEEDSWAP] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SPIRITSHACKLE] =
	{
		.effect = EFFECT_MEAN_LOOK,
		.power = 80,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SPOTLIGHT] =
	{
		.effect = EFFECT_FOLLOW_ME,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 3,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_STOMPINGTANTRUM] =
	{
		.effect = EFFECT_HIT,
		.power = 75,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_STRENGTHSAP] =
	{
		.effect = EFFECT_ABSORB,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SUNSTEELSTRIKE] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TEARFULLOOK] =
	{
		.effect = EFFECT_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_THROATCHOP] =
	{
		.effect = EFFECT_PROTECT,
		.power = 80,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TOXICTHREAD] =
	{
		.effect = EFFECT_POISON,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TROPKICK] =
	{
		.effect = EFFECT_ATTACK_DOWN_HIT,
		.power = 70,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ZINGZAP] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 80,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ELECTRICTERRAIN] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_ELECTRIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_GRASSYTERRAIN] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_MISTYTERRAIN] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_PSYCHICTERRAIN] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_GRASSPLEDGE] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 80,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_FIREPLEDGE] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 80,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_WATERPLEDGE] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 80,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_TRICKROOM] =
	{
		.effect = EFFECT_THIEF,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 249,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MAGICROOM] =
	{
		.effect = EFFECT_THIEF,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WONDERROOM] =
	{
		.effect = EFFECT_THIEF,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CRAFTYSHIELD] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 3,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_MATBLOCK] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_FIGHTING,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_QUICKGUARD] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_FIGHTING,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 3,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WIDEGUARD] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_ROCK,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 3,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_AQUARING] =
	{
		.effect = EFFECT_INGRAIN,
		.power = 0,
		.type = TYPE_WATER,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_AROMATICMIST] =
	{
		.effect = EFFECT_DEFENSE_UP,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_BELCH] =
	{
		.effect = EFFECT_RECYCLE,
		.power = 120,
		.type = TYPE_POISON,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_BESTOW] =
	{
		.effect = EFFECT_TRICK,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLING] =
	{
		.effect = EFFECT_FAKE_OUT,
		.power = 1,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FLYINGPRESS] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_FIGHTING,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_GRAVITY] =
	{
		.effect = EFFECT_SPEED_DOWN_2,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_GUARDSPLIT] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HEALBLOCK] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_IONDELUGE] =
	{
		.effect = EFFECT_THIEF,
		.power = 0,
		.type = TYPE_ELECTRIC,
		.accuracy = 0,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 1,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_LUCKYCHANT] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MAGNETRISE] =
	{
		.effect = EFFECT_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_ELECTRIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MAGNETICFLUX] =
	{
		.effect = EFFECT_DEFENSE_UP,
		.power = 0,
		.type = TYPE_ELECTRIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_POWDER] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_BUG,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 1,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_POWERSPLIT] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_REFLECTTYPE] =
	{
		.effect = EFFECT_CONVERSION,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SIMPLEBEAM] =
	{
		.effect = EFFECT_SKILL_SWAP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_SOAK] =
	{
		.effect = EFFECT_CONVERSION,
		.power = 0,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TELEKINESIS] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TRICKORTREAT] =
	{
		.effect = EFFECT_CONVERSION,
		.power = 0,
		.type = TYPE_GHOST,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_VENOMDRENCH] =
	{
		.effect = EFFECT_ATTACK_DOWN,
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FORESTSCURSE] =
	{
		.effect = EFFECT_CONVERSION,
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MINDBLOWN] =
	{
		.effect = EFFECT_HIT,
		.power = 150,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PHOTONGEYSER] =
	{
		.effect = EFFECT_HIT,
		.power = 100,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_PLASMAFISTS] =
	{
		.effect = EFFECT_THIEF,
		.power = 100,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ELECTRIFY] =
	{
		.effect = EFFECT_PARALYZE,
		.power = 0,
		.type = TYPE_ELECTRIC,
		.accuracy = 0,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_EMBARGO] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FAIRYLOCK] =
	{
		.effect = EFFECT_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_LIGHTOFRUIN] =
	{
		.effect = EFFECT_RECOIL,
		.power = 140,
		.type = TYPE_FAIRY,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_TRUMPCARD] =
	{
		.effect = EFFECT_HIT,
		.power = 1,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_AFTERYOU] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_INSTRUCT] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_QUASH] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_HAPPYHOUR] =
	{
		.effect = EFFECT_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 30,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_DOUBLEIRONBASH] =
	{
		.effect = EFFECT_FLINCH_HIT,
		.power = 60,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_LASTRESORT] =
	{
		.effect = EFFECT_RECOIL,
		.power = 140,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SKYDROP] =
	{
		.effect = EFFECT_RECOIL_IF_MISS,
		.power = 60,
		.type = TYPE_FLYING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CELEBRATE] =
	{
		.effect = EFFECT_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_HOLDHANDS] =
	{
		.effect = EFFECT_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_DYNAMAXCANNON] =
	{	//ANIM TODO
		.effect = 0,
		.power = 100,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SNIPESHOT] =
	{
		.effect = EFFECT_ACCURACY_UP_2,
		.power = 80,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_JAWLOCK] =
	{
		.effect = EFFECT_MEAN_LOOK,
		.power = 80,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_STUFFCHEEKS] =
	{
		.effect = EFFECT_DEFENSE_UP_2,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_NORETREAT] =
	{
		.effect = EFFECT_SPECIAL_ATTACK_UP_2,
		.power = 0,
		.type = TYPE_FIGHTING,
		.accuracy = 0,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_TARSHOT] =
	{
		.effect = EFFECT_SPEED_DOWN,
		.power = 0,
		.type = TYPE_ROCK,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_MAGICPOWDER] =
	{
		.effect = EFFECT_CONVERSION,
		.power = 0,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_DRAGONDARTS] =
	{
		.effect = 0,
		.power = 50,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TEATIME] =
	{	//TODO
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_OCTOLOCK] =
	{
		.effect = EFFECT_MEAN_LOOK,
		.power = 0,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BOLTBEAK] =
	{
		.effect = 0,
		.power = 85,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FISHIOUSREND] =
	{
		.effect = 0,
		.power = 85,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_COURTCHANGE] =
	{	//TODO
		.effect = EFFECT_THIEF,
		.power = 0,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_CLANGOROUSSOUL] =
	{
		.effect = EFFECT_ALL_STATS_UP_HIT,
		.power = 0,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_BODYPRESS] =
	{
		.effect = 0,
		.power = 80,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DECORATE] =
	{	//ANIM TODO
		.effect = EFFECT_SPECIAL_DEFENSE_UP_2,
		.power = 0,
		.type = TYPE_FAIRY,
		.accuracy = 0,
		.pp = 15,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_DRUMBEATING] =
	{
		.effect = EFFECT_SPEED_DOWN_HIT,
		.power = 80,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SNAPTRAP] =
	{	//ANIM TODO
		.effect = EFFECT_TRAP,
		.power = 35,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_PYROBALL] =
	{
		.effect = EFFECT_BURN_HIT,
		.power = 120,
		.type = TYPE_FIRE,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BEHEMOTHBLADE] =
	{	//ANIM TODO
		.effect = 0,
		.power = 100,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BEHEMOTHBASH] =
	{	//ANIM TODO
		.effect = 0,
		.power = 100,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_AURAWHEEL] =
	{
		.effect = EFFECT_SPEED_UP,
		.power = 110,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BREAKINGSWIPE] =
	{
		.effect = EFFECT_ATTACK_DOWN_HIT,
		.power = 60,
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BRANCHPOKE] =
	{
		.effect = 0,
		.power = 40,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_OVERDRIVE] =
	{
		.effect = 0,
		.power = 80,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_APPLEACID] =
	{
		.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
		.power = 80,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_GRAVAPPLE] =
	{
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 80,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SPIRITBREAK] =
	{	//ANIM TODO
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
		.power = 75,
		.type = TYPE_FAIRY,
		.accuracy = 100,
		.pp = 15,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_STRANGESTEAM] =
	{
		.effect = EFFECT_CONFUSE_HIT,
		.power = 90,
		.type = TYPE_FAIRY,
		.accuracy = 95,
		.pp = 10,
		.secondaryEffectChance = 20,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_LIFEDEW] =
	{
		.effect = EFFECT_RESTORE_HP,
		.power = 0,
		.type = TYPE_WATER,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_SNATCH_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_OBSTRUCT] =
	{
		.effect = EFFECT_PROTECT,
		.power = 0,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 4,
		.flags = 0,
		.category = SPLIT_STATUS,
	},

	[MOVE_FALSESURRENDER] =
	{	//ANIM TODO
		.effect = 0,
		.power = 80,
		.type = TYPE_DARK,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_METEORASSAULT] =
	{
		.effect = EFFECT_RECHARGE,
		.power = 150,
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_ETERNABEAM] =
	{	//ANIM TODO
		.effect = EFFECT_RECHARGE,
		.power = 160,
		.type = TYPE_DRAGON,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_STEELBEAM] =
	{	//ANIM TODO
		.effect = 0,
		.power = 140,
		.type = TYPE_STEEL,
		.accuracy = 95,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_EXPANDINGFORCE] =
	{	//ANIM TODO
		.effect = EFFECT_HIT, //EFFECT TODO
		.power = 80,
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_STEELROLLER] =
	{	//ANIM TODO
		.effect = EFFECT_HIT,
		.power = 130,
		.type = TYPE_STEEL,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SCALESHOT] =
	{	//ANIM TODO
		.effect = EFFECT_MULTI_HIT,
		.power = 25,
		.type = TYPE_DRAGON,
		.accuracy = 90,
		.pp = 25,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_METEORBEAM] =
	{	//ANIM TODO
		.effect = EFFECT_SKULL_BASH, //EFFECT TODO
		.power = 120,
		.type = TYPE_ROCK,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SHELLSIDEARM] =
	{	//ANIM TODO
		.effect = EFFECT_HIT, //EFFECT TODO
		.power = 90,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_MISTYEXPLOSION] =
	{	//ANIM TODO
		.effect = EFFECT_EXPLOSION,
		.power = 100,
		.type = TYPE_FAIRY,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_FOES_AND_ALLY,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_GRASSYGLIDE] =
	{	//ANIM TODO
		.effect = EFFECT_HIT,
		.power = 70,
		.type = TYPE_GRASS,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_RISINGVOLTAGE] =
	{	//ANIM TODO
		.effect = EFFECT_HIT,
		.power = 70,
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_TERRAINPULSE] =
	{	//ANIM TODO
		.effect = EFFECT_HIT,
		.power = 50,
		.type = TYPE_NORMAL,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_SKITTERSMACK] =
	{	//ANIM TODO
		.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
		.power = 70,
		.type = TYPE_BUG,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_BURNINGJEALOUSY] =
	{	//ANIM TODO
		.effect = EFFECT_BURN_HIT, //EFFECT TODO
		.power = 70,
		.type = TYPE_FIRE,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_LASHOUT] =
	{	//ANIM TODO
		.effect = EFFECT_HIT,
		.power = 75,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_POLTERGEIST] =
	{	//ANIM TODO
		.effect = EFFECT_HIT, //EFFECT TODO
		.power = 110,
		.type = TYPE_GHOST,
		.accuracy = 90,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_CORROSIVEGAS] =
	{	//ANIM TODO
		.effect = EFFECT_KNOCK_OFF, //EFFECT TODO
		.power = 0,
		.type = TYPE_POISON,
		.accuracy = 100,
		.pp = 40,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_COACHING] =
	{	//ANIM TODO
		.effect = EFFECT_HELPING_HAND, //EFFECT TODO
		.power = 0,
		.type = TYPE_FIGHTING,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_FLIPTURN] =
	{	//ANIM TODO
		.effect = EFFECT_BATON_PASS,
		.power = 60,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 20,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_TRIPLEAXEL] =
	{	//ANIM TODO
		.effect = EFFECT_TRIPLE_KICK,
		.power = 20,
		.type = TYPE_ICE,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_DUALWINGBEAT] =
	{	//ANIM TODO
		.effect = EFFECT_DOUBLE_HIT,
		.power = 40,
		.type = TYPE_FLYING,
		.accuracy = 90,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SCORCHINGSANDS] =
	{	//ANIM TODO
		.effect = EFFECT_BURN_HIT,
		.power = 70,
		.type = TYPE_GROUND,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 30,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_JUNGLEHEALING] =
	{	//ANIM TODO
		.effect = EFFECT_RESTORE_HP, //EFFECT TODO
		.power = 0,
		.type = TYPE_GRASS,
		.accuracy = 0,
		.pp = 10,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_USER,
		.priority = 0,
		.flags = FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_STATUS,
	},

	[MOVE_WICKEDBLOW] =
	{	//ANIM TODO
		.effect = EFFECT_HIT,
		.power = 80,
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_SURGINGSTRIKES] =
	{	//ANIM TODO
		.effect = EFFECT_MULTI_HIT,
		.power = 25,
		.type = TYPE_WATER,
		.accuracy = 100,
		.pp = 5,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FREEZINGGLARE] =
	{	//ANIM TODO
		.effect = EFFECT_FREEZE_HIT,
		.power = 40, //PLACEHOLDERS
		.type = TYPE_PSYCHIC,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_THUNDEROUSKICK] =
	{	//ANIM TODO
		.effect = EFFECT_DEFENSE_DOWN_HIT,
		.power = 40, //PLACEHOLDER DATA
		.type = TYPE_FIGHTING,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 100,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_PHYSICAL,
	},

	[MOVE_FIERYWRATH] =
	{	//ANIM TODO
		.effect = EFFECT_FLINCH_HIT,
		.power = 40, //PLACEHOLDER DATA
		.type = TYPE_DARK,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_THUNDERCAGE] =
	{	//ANIM TODO
		.effect = EFFECT_TRAP, //EFFECT TODO?
		.power = 40, //PLACEHOLDER DATA
		.type = TYPE_ELECTRIC,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},

	[MOVE_DRAGONENERGY] =
	{	//ANIM TODO
		.effect = EFFECT_HIT,
		.power = 40, //PLACEHOLDER DATA
		.type = TYPE_DRAGON,
		.accuracy = 100,
		.pp = 35,
		.secondaryEffectChance = 0,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
		.category = SPLIT_SPECIAL,
	},
};
