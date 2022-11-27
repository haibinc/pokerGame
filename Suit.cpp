//
// Created by Haibin Cao on 10/19/22.
//
#include "Suit.h"

sf::Texture Suit::Spades;
sf::Texture Suit::Clubs;
sf::Texture Suit::Diamonds;
sf::Texture Suit::Hearts;

Suit::Suit()
{
}

Suit::Suit(Suits enumSuit)
:enumSuit(enumSuit)
{
    getTexture();
}

sf::Texture& Suit::getTexture() const
{
    switch(enumSuit)
    {
        case Suits::Hearts:
            Hearts.loadFromFile("Hearts.png");
            return Hearts;
        case Suits::Spades:
            Spades.loadFromFile("Spades.png");
            return Spades;
        case Suits::Clubs:
            Clubs.loadFromFile("Clubs.png");
            return Clubs;
        case Suits::Diamonds:
            Diamonds.loadFromFile("Diamonds.png");
            return Diamonds;
    }
}

Suits Suit::getSuits() const
{
    return enumSuit;
}

