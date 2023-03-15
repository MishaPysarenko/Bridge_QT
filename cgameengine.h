#ifndef CGAMEENGINE_H
#define CGAMEENGINE_H
#include "tgamelog.h"

class CGameEngine
{
    unsigned short int ScoreMultiplier = 1;
public:
    CGameEngine();
    void VShuffleADeckOfCards(TGameLog* log);
    void VTurnOverShuffleADeckOfCards(TGameLog* log);
    unsigned short GetScoreMultiplier();
};

#endif // CGAMEENGINE_H
