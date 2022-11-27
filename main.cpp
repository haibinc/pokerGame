#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Card.h"

int main() {
    srand(time(0));
    Game game;
    game.run();
    return 0;
}
