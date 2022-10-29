//
// Created by Haibin Cao on 10/19/22.
//

#include "Rank.h"

Rank::Rank()
{

}

Rank::Rank(Ranks enumRank)
: enumRank(enumRank)
{

}

std::string Rank::toString() const
{
    switch(enumRank)
    {
        case Ace:
            return "A";
        case Two:
            return "2";
        case Three:
            return "3";
        case Four:
            return "4";
        case Five:
            return "5";
        case Six:
            return "6";
        case Seven:
            return "7";
        case Eight:
            return "8";
        case Nine:
            return "9";
        case Ten:
            return "10";
        case Jack:
            return "J";
        case Queen:
            return "Q";
        case King:
            return "K";
    }
}

void Rank::setRank(Ranks enumRank)
{
    this->enumRank = enumRank;
}


Ranks Rank::getRank()
{
    return enumRank;
}

