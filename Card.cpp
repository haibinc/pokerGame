//
// Created by Haibin Cao on 10/13/22.
//

#include "Card.h"

Card::Card()
{
    cardBackGround.setSize(cardSize);
    cardBackGround.setFillColor(sf::Color::White);
    cardBackGround.setPosition(cardPosition);
    if(!font.loadFromFile("MontereyFLF-Bold.ttf"))
    {
        throw("yer");
    }
    faceValue.setFont(font);
    faceValue.setCharacterSize(100);
    faceValue.setFillColor(sf::Color::Red);
    faceValue.setStyle(sf::Text::Bold | sf::Text::Underlined);
    faceValue.setPosition(getGlobalBounds().left + (getGlobalBounds().width/2 - 50), getGlobalBounds().top + (getGlobalBounds().height/2) - 50);
    faceValue.setString("A");
    texture.loadFromFile("jean_victor_balin_card_coeur.png");
    suitTop.setTexture(texture);
    suitTop.setScale(0.15, 0.15);
    suitTop.setColor(sf::Color::Red);
    suitTop.setPosition(getGlobalBounds().left, getGlobalBounds().top);
    suitBottom.setTexture(texture);
    suitBottom.setScale(0.15, 0.15);
    suitBottom.rotate(180);
    suitBottom.setColor(sf::Color::Red);
    suitBottom.setPosition(getGlobalBounds().width - suitBottom.getScale().x, getGlobalBounds().height - suitBottom.getScale().y);
}

void Card::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    states.transform = getTransform();
    window.draw(cardBackGround, states);
    window.draw(faceValue, states);
    window.draw(suitTop, states);
    window.draw(suitBottom, states);
}

void Card::setPositionCard(sf::Vector2f cardPosition)
{
    setPosition(cardPosition);
}

sf::FloatRect Card::getGlobalBounds() const
{
    return cardBackGround.getGlobalBounds();
}