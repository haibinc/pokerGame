//
// Created by Haibin Cao on 10/29/22.
//

#include "CardHandScorer.h"

int CardHandScorer::duplicateCounter = 0;
int CardHandScorer::uniqueCounter = 0;
int CardHandScorer::connectCounter = 0;

CardHandScorer::CardHandScorer()
{
}

int CardHandScorer::scorePokerHand(CardHand ch)
{
    getDuplicate(ch);
    getUnique(ch);
    getConnect(ch);
    highCard(ch);
    onePair(ch);
    twoPair(ch);
    threeOfAKind(ch);
    fourOfAKind(ch);
    straight(ch);
    flush(ch);
    fullHouse(ch);
    straightFlush(ch);
    royalFlush(ch);
}

bool CardHandScorer::royalFlush(CardHand ch) {
    return false;
}

bool CardHandScorer::straightFlush(CardHand ch) {
    return false;
}

bool CardHandScorer::fullHouse(CardHand ch) {
    return false;
}

bool CardHandScorer::flush(CardHand ch) {
    return false;
}

bool CardHandScorer::straight(CardHand ch)
{
    
    return false;
}


bool CardHandScorer::fourOfAKind(CardHand ch)
{
    if(uniqueCounter == 1 && duplicateCounter == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::threeOfAKind(CardHand ch)
{
    if(connectCounter == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::twoPair(CardHand ch)
{
    if(uniqueCounter <= 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::onePair(CardHand ch)
{
    if(uniqueCounter <= 3)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool CardHandScorer::highCard(CardHand ch)
{
   return true;
}

void CardHandScorer::getDuplicate(CardHand ch)
{
    for (int i = 0; i < ch.getCardHand().size()-1; ++i)
    {
        if (ch.getCardHand()[i].getEnumRank() == ch.getCardHand()[i+1].getEnumRank())
        {
            duplicateCounter++;
        }
    }
}

void CardHandScorer::getUnique(CardHand ch)
{
    for (int i = 0; i < ch.getCardHand().size()-1; ++i)
    {
        if(ch.getCardHand()[i].getEnumRank() != ch.getCardHand()[i+1].getEnumRank())
        {
            uniqueCounter++;
        }
    }
}

void CardHandScorer::getConnect(CardHand ch)
{
    for (int i = 0; i < ch.getCardHand().size()-1; ++i)
    {
        for (int j = i+1; j < ch.getCardHand().size()-1; ++j)
        {
            if(ch.getCardHand()[i].getEnumRank() == ch.getCardHand()[j].getEnumRank())
            {
                connectCounter++;
                if(connectCounter == 2)
                {
                    return;
                }
            }
            else
            {
                connectCounter = 0;
                break;
            }
        }
    }
}
