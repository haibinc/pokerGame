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

void CardHand::sort()
{
    LightCard temp(EmptyRank, EmptySuit);
    for (int i = 0; i < cardHand.size(); ++i)
    {
        for (int j = i+1; j < cardHand.size(); ++j)
        {
            if(cardHand[i].getEnumRank() > cardHand[j].getEnumRank())
            {
                temp = cardHand[i];
                cardHand[i] = cardHand[j];
                cardHand[j] = temp;
            }
        }
    }
}

std::vector<LightCard> CardHand::getCardHand()
{
    return cardHand;
}
