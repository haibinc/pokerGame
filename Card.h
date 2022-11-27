//
// Created by Haibin Cao on 10/13/22.
//

#ifndef PLAYINGCARD_CARD_H
#define PLAYINGCARD_CARD_H
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "Rank.h"
#include "Suit.h"


class Card : public sf::Drawable, public sf::Transformable
{
private:
    sf::RectangleShape cardBackGround;
    sf::Text faceValue;
    sf::Font font;
    sf::Sprite suitTop, suitBottom;
    sf::Vector2f cardSize{150.f, 200.f};
    sf::Vector2f cardPosition {0,0};
public:
    Card();
    Card(Ranks enumRank, Suits enumSuit, sf::Vector2f cardPosition);
    Card(const Rank& rank, const Suit& suit, sf::Vector2f cardPosition);
    void init(const Rank& rank, const Suit& suit, sf::Vector2f cardPosition);

    void setPositionCard(sf::Vector2f cardPosition);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    sf::FloatRect getGlobalBounds() const;
};


#endif //PLAYINGCARD_CARD_H
