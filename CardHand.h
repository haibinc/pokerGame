//
// Created by Haibin Cao on 10/28/22.
//

#ifndef PLAYINGCARD_CARDHAND_H
#define PLAYINGCARD_CARDHAND_H
#include <vector>
#include "LightCard.h"
#include "Deck.h"

class CardHand
{
private:
    std::vector<LightCard> cardHand;
public:
    CardHand();
    void drawCard(const LightCard& card);
    void print();
};


#endif //PLAYINGCARD_CARDHAND_H
