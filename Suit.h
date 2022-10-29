//
// Created by Haibin Cao on 10/19/22.
//

#ifndef PLAYINGCARD_SUIT_H
#define PLAYINGCARD_SUIT_H
#include "iostream"
#include "suitEnum.h"

class Suit {
public:
    Suit();
    Suit(Suits enumSuit);
    void setSuits(Suits enumSuit);
    std::string toString() const;
    Suits getSuits();
private:
    Suits enumSuit;
};


#endif //PLAYINGCARD_SUIT_H
