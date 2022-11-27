//
// Created by Haibin Cao on 10/13/22.
//

#include "Card.h"

Card::Card()
{
    init(Ace, Diamonds, cardPosition);
}

Card::Card(Ranks enumRank, Suits enumSuit, sf::Vector2f cardPosition)
:Card(Rank(enumRank), Suit(enumSuit), cardPosition)
{
}

Card::Card(const Rank& rank, const Suit& suit, sf::Vector2f cardPosition)
{
    init(rank, suit, cardPosition);
}

void Card::init(const Rank& rank, const Suit& suit, sf::Vector2f cardPosition)
{
    cardBackGround.setSize(cardSize);
    cardBackGround.setFillColor(sf::Color::White);
    setPosition(cardPosition);
    if (!font.loadFromFile("MontereyFLF-Bold.ttf")) {
        throw ("yer");
    }
    if(suit.getSuits() == Spades || suit.getSuits() == Clubs)
    {
        faceValue.setFillColor(sf::Color::Black);
    }
    else
    {
        faceValue.setFillColor(sf::Color::Red);
    }
    faceValue.setFont(font);
    faceValue.setCharacterSize(100);
    faceValue.setStyle(sf::Text::Bold | sf::Text::Underlined);
    faceValue.setPosition(getGlobalBounds().left + (getGlobalBounds().width / 2 - 50), getGlobalBounds().top + (getGlobalBounds().height / 2) - 50);
    faceValue.setString(rank.toString());
    suitTop.setTexture(suit.getTexture());
    suitTop.setScale(0.10, 0.10);
    suitTop.setPosition(getGlobalBounds().left, getGlobalBounds().top);
    suitBottom.setTexture(suit.getTexture());
    suitBottom.setScale(0.10, 0.10);
    suitBottom.rotate(180);
    suitBottom.setPosition(getGlobalBounds().width, getGlobalBounds().height);
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

