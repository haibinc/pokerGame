//
// Created by Haibin Cao on 10/26/22.
//

#ifndef PLAYINGCARD_LIGHTCARD_H
#define PLAYINGCARD_LIGHTCARD_H
#include <iostream>
#include "rankEnum.h"
#include "suitEnum.h"

class LightCard
{
private:
    Ranks enumRank;
    Suits enumSuit;
public:
    LightCard();
    LightCard(Ranks enumRank, Suits enumSuit);
    std::string toStringRank() const;
    std::string toStringSuit() const;
    Ranks getEnumRank() const;
    Suits getEnumSuit() const;
};


#endif //PLAYINGCARD_LIGHTCARD_H
