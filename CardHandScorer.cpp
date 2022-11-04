//
// Created by Haibin Cao on 10/29/22.
//

#include "CardHandScorer.h"

int CardHandScorer::duplicateCounter = 0;
int CardHandScorer::uniqueCounter = 0;
int CardHandScorer::connectCounter = 0;
int CardHandScorer::straightCounter = 0;
int CardHandScorer::flushCounter = 0;
int CardHandScorer::creativityCounter = 0;
bool CardHandScorer::threePiece = false;
bool CardHandScorer::fourPiece = false;
PokerScore CardHandScorer::pokerScore;

CardHandScorer::CardHandScorer()
{
}

PokerScore CardHandScorer::scorePokerHand(CardHand ch)
{
    getDuplicate(ch);
    getUnique(ch);
    getConnect(ch);
    getStraight(ch);
    getFlush(ch);
    getRoyalFlush(ch);

    pokerScore += (HIGH_CARD);
    if(royalFlush())
    {
        pokerScore += (ROYAL_FLUSH);
        pokerScore += (STRAIGHT_FLUSH);
        pokerScore += (FLUSH);
        pokerScore += (STRAIGHT);
    }
    else if(straightFlush())
    {
        pokerScore += (STRAIGHT_FLUSH);
        pokerScore += (STRAIGHT);
        pokerScore += (FLUSH);
    }
    else if(straight())
    {
        pokerScore += (STRAIGHT);
    }
    else if(flush())
    {
        pokerScore += (FLUSH);
    }

    if(fourOfAKind())
    {
        pokerScore += (FOUR_OF_A_KIND);
        pokerScore += (THREE_OF_A_KIND);
        pokerScore += (TWO_PAIR);
        pokerScore += (ONE_PAIR);
    }
    else if(fullHouse())
    {
        pokerScore += (FULL_HOUSE);
        pokerScore += (THREE_OF_A_KIND);
        pokerScore += (TWO_PAIR);
        pokerScore += (ONE_PAIR);
    }
    else if(threeOfAKind())
    {
        pokerScore += (THREE_OF_A_KIND);
        pokerScore += (ONE_PAIR);
    }
    else if(twoPair())
    {
        pokerScore += (TWO_PAIR);
        pokerScore += (ONE_PAIR);
    }
    else if(onePair())
    {
        pokerScore += (ONE_PAIR);
    }

    return pokerScore;
}

bool CardHandScorer::royalFlush()
{
    if(creativityCounter == 4 && flush())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::straightFlush()
{
    if(straight() && flush())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::fullHouse()
{
    if(threeOfAKind() && twoPair() && !fourOfAKind())
    {
        return true;
    }
    else{
        return false;
    }
}

bool CardHandScorer::flush()
{
    if(flushCounter == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::straight()
{
    if(straightCounter == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool CardHandScorer::fourOfAKind()
{
    if(fourPiece)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::threeOfAKind()
{
    if(threePiece)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::twoPair()
{
    if((uniqueCounter <= 2 && connectCounter != 2) || fourOfAKind())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CardHandScorer::onePair()
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

bool CardHandScorer::highCard()
{
   return true;
}

void CardHandScorer::getDuplicate(CardHand ch)
{
    duplicateCounter = 0;
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
    uniqueCounter = 0;
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
    threePiece = false;
    fourPiece = false;
    connectCounter = 0;
    for (int i = 0; i < ch.getCardHand().size()-1; ++i)
    {
        for (int j = i+1; j < ch.getCardHand().size(); ++j)
        {
            if(ch.getCardHand()[i].getEnumRank() == ch.getCardHand()[j].getEnumRank())
            {
                connectCounter++;
                if(connectCounter == 2)
                {
                    threePiece = true;
                }
                else if(connectCounter == 3)
                {
                    fourPiece = true;
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

void CardHandScorer::getStraight(CardHand ch)
{
    straightCounter = 0;
    for (int i = 0; i < ch.getCardHand().size()-1; ++i)
    {
        if(ch.getCardHand()[i].getEnumRank() + 1 == ch.getCardHand()[i+1].getEnumRank())
        {
            straightCounter++;
        }
        else
        {
            return;
        }
    }
}

void CardHandScorer::getFlush(CardHand ch)
{
    flushCounter = 0;
    for (int i = 0; i < ch.getCardHand().size()-1; ++i)
    {
        if(ch.getCardHand()[i].getEnumSuit() == ch.getCardHand()[i+1].getEnumSuit())
        {
            flushCounter++;
        }
        else
        {
            return;
        }
    }
}

//0 creativity
void CardHandScorer::getRoyalFlush(CardHand ch)
{
    creativityCounter = 0;
    if(ch.getCardHand()[0].getEnumRank() == Ace)
    {
        for (int i = 0; i < ch.getCardHand().size()-1; ++i)
        {
            if((ch.getCardHand()[0].getEnumRank() + 9 + i) == ch.getCardHand()[i+1].getEnumRank())
            {
                creativityCounter++;
            }
        }
    }
}
