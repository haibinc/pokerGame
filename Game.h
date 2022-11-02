//
// Created by Haibin Cao on 10/13/22.
//

#ifndef PLAYINGCARD_GAME_H
#define PLAYINGCARD_GAME_H
#include <SFML/Graphics.hpp>
#include "Card.h"
#include "Deck.h"
#include "CardHand.h"
#include "CardHandScorer.h"
#include "PokerScore.h"
#include "Suit.h"
#include "Rank.h"
#include "suitEnum.h"

class Game {
private:
    sf::RenderWindow window;
public:
    Game();
    void run();
};


#endif //PLAYINGCARD_GAME_H
