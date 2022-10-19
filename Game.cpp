//
// Created by Haibin Cao on 10/13/22.
//

#include "Game.h"

Game::Game()
:window(sf::VideoMode(1500, 1500), "Card Game")
{

}

void Game::run()
{
    Card card1;
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed :
                {
                    window.close();
                    break;
                }
            }
        }

        window.clear();
        window.draw(card1);

        card1.setPositionCard(sf::Vector2f{700, 700});
        window.display();

    }
}
