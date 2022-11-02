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
    void sort();
    void print();
    std::vector<LightCard> getCardHand();
};


#endif //PLAYINGCARD_CARDHAND_H
