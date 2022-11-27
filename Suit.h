//
// Created by Haibin Cao on 10/19/22.
//

#ifndef PLAYINGCARD_SUIT_H
#define PLAYINGCARD_SUIT_H
#include "iostream"
#include "SFML/Graphics.hpp"
#include "suitEnum.h"

class Suit {
public:
    Suit();
    Suit(Suits enumSuit);
    void setSuits(Suits enumSuit);
    sf::Texture& getTexture() const;
    Suits getSuits() const;
private:
    Suits enumSuit;
    static sf::Texture Spades, Clubs, Diamonds, Hearts;
};


#endif //PLAYINGCARD_SUIT_H
