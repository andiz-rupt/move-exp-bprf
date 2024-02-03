#ifndef MOVES_H_INCLUDED
#define MOVES_H_INCLUDED

#include "constants/moves_constants.h"
#include "../pret_include/constants/battle_move_effects.h"
#include "../pret_include/battle.h"
#include "config.h"

enum {
    SPLIT_PHYSICAL,
    SPLIT_SPECIAL,
    SPLIT_STATUS
};

/*
* 'Ex' parce que ces structures sont déjà
* définies quelque part
*/
struct BattleMoveEx
{
    u8 effect;
    u8 power;
    u8 type;
    u8 accuracy;
    u8 pp;
    u8 secondaryEffectChance;
    u8 target;
    s8 priority;
    u8 flags;
    u8 category;
    u16 unused2;
};

struct __attribute__((packed)) LevelUpMoveEx {
    u16 move;
    u8 level;
};

#define LEVEL_UP_MOVE(lvl, move) {move, lvl}
#define LEVEL_UP_END {0xFFFF, 0xFF}

#define GET_MOVE_LV(moveEnt) (moveEnt.level)
#define GET_MOVE_ID(moveEnt)  (moveEnt.move)
#define IS_LEVEL_UP_END(moveEnt) (moveEnt.move == 0xFFFF && moveEnt.level == 0xFF)

#define MAX_LEVEL_UP_MOVES       20
#define MON_DATA_SPECIES_OR_EGG           65

extern const struct LevelUpMoveEx *const gNewLevelUpLearnsets[];
extern const struct BattleMoveEx gNewBattleMoves[];

#endif // MOVES_H_INCLUDED