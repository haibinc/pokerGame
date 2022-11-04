//
// Created by Haibin Cao on 10/19/22.
//

#ifndef PLAYINGCARD_DECK_H
#define PLAYINGCARD_DECK_H
#include <ostream>
#include <iostream>
#include <time.h>
#include "LightCard.h"

class Deck
{
private:
    const int deck_Size = 52;
    int cardIndex = 0;
public:
    Deck();
    LightCard deck[52];
    LightCard dealCard();
    LightCard getCardAt(int index);
    bool empty();
    void shuffleDeck();
    void createDeck();
    void printDeck();
    friend std::ostream& operator<<(std::ostream& out, const LightCard& card);
    friend bool operator==(const LightCard& lhs, const LightCard& rhs);
};
std::ostream& operator<<(std::ostream& out, const LightCard& card);

#endif //PLAYINGCARD_DECK_H
