//
// Created by Haibin Cao on 10/28/22.
//

#include "CardHand.h"

CardHand::CardHand()
{
}

void CardHand::drawCard(const LightCard& card)
{
    cardHand.push_back(card);
}

void CardHand::print()
{
    for (int i = 0; i < cardHand.size(); ++i)
    {
        std::cout << cardHand[i];
    }
}