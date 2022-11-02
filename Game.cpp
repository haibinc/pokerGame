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
//    Card card1(Queen, Clubs, {700, 700});
//    Card card2(Ace, Spades, {500, 300});
//    Card card3(King, Hearts, {1100,1100});
//    Card card4(Jack, Diamonds, {100, 100});
      Deck deck;
      deck.shuffleDeck();
      CardHand ch;
      CardHandScorer chs;
      for (int i = 0; i < 5; ++i)
        {
          ch.drawCard(deck.dealCard());
        }
      ch.sort();
      ch.print();
      chs.scorePokerHand(ch);
//      std::cout << std::boolalpha << chs.onePair(ch) << std::endl;
//      std::cout << std::boolalpha << chs.twoPair(ch) << std::endl;
        std::cout << std::boolalpha << "One Pair: " << chs.onePair(ch) << std::endl;
        std::cout << std::boolalpha << "Two Pair: " << chs.twoPair(ch) << std::endl;
        std::cout << std::boolalpha << "Three of a kind : " << chs.threeOfAKind(ch) << std::endl;
        std::cout << std::boolalpha << "Four of a kind : " << chs.fourOfAKind(ch) << std::endl;

//    while(window.isOpen())
//    {
//        sf::Event event;
//        while(window.pollEvent(event))
//        {
//            switch(event.type)
//            {
//                case sf::Event::Closed :
//                {
//                    window.close();
//                    break;
//                }
//            }
//        }
//
//        window.clear();
//        window.draw(card1);
//        window.draw(card2);
//        window.draw(card3);
//        window.draw(card4);
//
//        window.display();
//
//    }
}
