//
// Created by Haibin Cao on 10/19/22.
//
#include "Suit.h"

Suit::Suit()
{
}

Suit::Suit(Suits enumSuit)
: enumSuit(enumSuit)
{

}

std::string Suit::toString() const
{
    switch(enumSuit)
    {
        case Hearts:
            return "Hearts.png";
        case Spades:
            return "Spades.png";
        case Clubs:
            return "Clubs.png";
        case Diamonds:
            return "Diamonds.png";
    }
}

Suits Suit::getSuits()
{
    return enumSuit;
}

