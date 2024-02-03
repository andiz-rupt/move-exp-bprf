#include "../include/moves.h"

extern u8 sLearningMoveTableID;
extern u16 gMoveToLearn;

void SetBoxMonData(struct BoxPokemon *boxMon, s32 field, const void *dataArg);
u32 GetMonData(struct Pokemon *mon, s32 field, u8 *data);
u32 GetBoxMonData(struct BoxPokemon *, s32, u8 *);
u8 GetLevelFromBoxMonExp(struct BoxPokemon *boxMon);
u16 GiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);
void DeleteFirstMoveAndGiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);

void GiveBoxMonInitialMoveset(struct BoxPokemon *boxMon)
{
    u16 species = GetBoxMonData(boxMon, MON_DATA_SPECIES, NULL);
    s32 level = GetLevelFromBoxMonExp(boxMon);
    s32 i;

    for (i = 0; !IS_LEVEL_UP_END(gNewLevelUpLearnsets[species][i]); i++)
    {
        u16 moveLevel;
        u16 move;

        moveLevel = GET_MOVE_LV(gNewLevelUpLearnsets[species][i]);

        if (moveLevel > level)
            break;

        move = GET_MOVE_ID(gNewLevelUpLearnsets[species][i]);

        if (GiveMoveToBoxMon(boxMon, move) == MON_HAS_MAX_MOVES)
            DeleteFirstMoveAndGiveMoveToBoxMon(boxMon, move);
    }

    return;
}

u16 MonTryLearningNewMove(struct Pokemon *mon, bool8 firstMove)
{
    u32 retVal = MOVE_NONE;
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u8 level = GetMonData(mon, MON_DATA_LEVEL, NULL);

    // since you can learn more than one move per level
    // the game needs to know whether you decided to
    // learn it or keep the old set to avoid asking
    // you to learn the same move over and over again
    if (firstMove)
    {
        sLearningMoveTableID = 0;

        while (GET_MOVE_LV(gNewLevelUpLearnsets[species][sLearningMoveTableID]) != level)
        {
            sLearningMoveTableID++;
            if (IS_LEVEL_UP_END(gNewLevelUpLearnsets[species][sLearningMoveTableID]))
                return MOVE_NONE;
        }
    }

    if (GET_MOVE_LV(gNewLevelUpLearnsets[species][sLearningMoveTableID]) == level)
    {
        gMoveToLearn = GET_MOVE_ID(gNewLevelUpLearnsets[species][sLearningMoveTableID]);
        sLearningMoveTableID++;
        retVal = GiveMoveToMon(mon, gMoveToLearn);
    }

    return retVal;
}

u8 GetMoveRelearnerMoves(struct Pokemon *mon, u16 *moves)
{
    u16 learnedMoves[MAX_MON_MOVES];
    u8 numMoves = 0;
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u8 level = GetMonData(mon, MON_DATA_LEVEL, NULL);
    int i, j, k;

    for (i = 0; i < MAX_MON_MOVES; i++)
        learnedMoves[i] = GetMonData(mon, MON_DATA_MOVE1 + i, NULL);

    for (i = 0; i < MAX_LEVEL_UP_MOVES; i++)
    {
        u16 moveLevel;

        if (IS_LEVEL_UP_END(gNewLevelUpLearnsets[species][i]))
            break;

        moveLevel = GET_MOVE_LV(gNewLevelUpLearnsets[species][i]);

        if (moveLevel <= level)
        {
            for (j = 0; j < MAX_MON_MOVES && learnedMoves[j] != GET_MOVE_ID(gNewLevelUpLearnsets[species][i]); j++)
                ;

            if (j == MAX_MON_MOVES)
            {
                for (k = 0; k < numMoves && moves[k] != GET_MOVE_ID(gNewLevelUpLearnsets[species][i]); k++)
                    ;

                if (k == numMoves)
                    moves[numMoves++] = GET_MOVE_ID(gNewLevelUpLearnsets[species][i]);
            }
        }
    }

    return numMoves;
}

u8 GetLevelUpMovesBySpecies(u16 species, u16 *moves)
{
    u8 numMoves = 0;
    int i;

    for (i = 0; i < MAX_LEVEL_UP_MOVES && !IS_LEVEL_UP_END(gNewLevelUpLearnsets[species][i]); i++)
         moves[numMoves++] = GET_MOVE_ID(gNewLevelUpLearnsets[species][i]);

     return numMoves;
}

u8 GetNumberOfRelearnableMoves(struct Pokemon *mon)
{
    u16 learnedMoves[MAX_MON_MOVES];
    u16 moves[MAX_LEVEL_UP_MOVES];
    u8 numMoves = 0;
    u16 species = GetMonData(mon, MON_DATA_SPECIES_OR_EGG, NULL);
    u8 level = GetMonData(mon, MON_DATA_LEVEL, NULL);
    int i, j, k;

    if (species == SPECIES_EGG)
        return 0;

    for (i = 0; i < MAX_MON_MOVES; i++)
        learnedMoves[i] = GetMonData(mon, MON_DATA_MOVE1 + i, NULL);

    for (i = 0; i < MAX_LEVEL_UP_MOVES; i++)
    {
        u16 moveLevel;

        if (IS_LEVEL_UP_END(gNewLevelUpLearnsets[species][i]))
            break;

        moveLevel = GET_MOVE_LV(gNewLevelUpLearnsets[species][i]);

        if (moveLevel <= (level << 9))
        {
            for (j = 0; j < MAX_MON_MOVES && learnedMoves[j] != GET_MOVE_ID(gNewLevelUpLearnsets[species][i]); j++)
                ;

            if (j == MAX_MON_MOVES)
            {
                for (k = 0; k < numMoves && moves[k] != GET_MOVE_ID(gNewLevelUpLearnsets[species][i]); k++)
                    ;

                if (k == numMoves)
                    moves[numMoves++] = GET_MOVE_ID(gNewLevelUpLearnsets[species][i]);
            }
        }
    }

    return numMoves;
}