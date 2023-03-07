#ifndef CGAMEENGINE_H
#define CGAMEENGINE_H
#include "tgamelog.h"

class CGameEngine
{
public:
    CGameEngine();
    void VShuffleADeckOfCards(TGameLog* log);
    void VTurnOverShuffleADeckOfCards(TGameLog* log);

};

#endif // CGAMEENGINE_H
