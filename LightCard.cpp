//
// Created by Haibin Cao on 10/26/22.
//

#include "LightCard.h"
LightCard::LightCard()
{

}

LightCard::LightCard(Ranks enumRank, Suits enumSuit)
:enumRank(enumRank), enumSuit(enumSuit)
{
}


std::string LightCard::toStringRank() const
{
    switch(enumRank)
    {
        case Ace:
            return "Ace";
        case Two:
            return "Two";
        case Three:
            return "Three";
        case Four:
            return "Four";
        case Five:
            return "Five";
        case Six:
            return "Six";
        case Seven:
            return "Seven";
        case Eight:
            return "Eight";
        case Nine:
            return "Nine";
        case Ten:
            return "Ten";
        case Jack:
            return "Jack";
        case Queen:
            return "Queen";
        case King:
            return "King";
        case EmptyRank:
            return "Empty";
    }
}

std::string LightCard::toStringSuit() const
{
    switch(enumSuit)
    {
        case Hearts:
            return "Hearts";
        case Spades:
            return "Spades";
        case Clubs:
            return "Clubs";
        case Diamonds:
            return "Diamonds";
        case EmptySuit:
            return "Empty";
    }
}

Ranks LightCard::getEnumRank() const
{
    return enumRank;
}

Suits LightCard::getEnumSuit() const
{
    return enumSuit;
}
