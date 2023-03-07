#ifndef TGAMELOG_H
#define TGAMELOG_H
#include "cplayingcard.h"
#include <QStack>
struct TGameLog
{
    QStack<CPlayingCard> сardDeck, usedDeckOfCards;
    unsigned short int iMoveId;
};

#endif // TGAMELOG_H
