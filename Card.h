//
// Created by Haibin Cao on 10/13/22.
//

#ifndef PLAYINGCARD_CARD_H
#define PLAYINGCARD_CARD_H
#include <iostream>
#include <SFML/Graphics.hpp>

class Card : public sf::Drawable, public sf::Transformable
{
private:
    sf::RectangleShape cardBackGround;
    sf::Text faceValue;
    sf::Font font;
    sf::Sprite suitTop, suitBottom;
    sf::Texture texture;
    sf::Vector2f cardSize{450.f, 550.f};
    sf::Vector2f cardPosition{0, 0};
    sf::Vector2f textPosition{730.f, 650.f};
public:
    Card();
    void setPositionCard(sf::Vector2f cardPosition);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    sf::FloatRect getGlobalBounds() const;
};


#endif //PLAYINGCARD_CARD_H
