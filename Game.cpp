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
      srand(time(0));
      int counter = 0;
      while(true)
      {
          CardHand ch1;
          for (int i = 0; i < 5; ++i)
          {
              ch1.drawCard(deck.dealCard());
              if(deck.empty())
              {
                  deck.createDeck();
                  deck.shuffleDeck();
              }
          }
          ch1.sort();
          PokerScore pokerScorer = CardHandScorer::scorePokerHand(ch1);
          pokerScorer.counterUpdate();
          if(pokerScorer == ROYAL_FLUSH)
          {
              break;
          }
          else
          {
              counter++;
          }
          std::cout << "----------------------------------\n";
          pokerScorer.print();
      }

//      chs.scorePokerHand(ch1);
//        std::cout << std::boolalpha << "One Pair: " << chs.onePair() << std::endl;
//        std::cout << std::boolalpha << "Two Pair: " << chs.twoPair() << std::endl;
//        std::cout << std::boolalpha << "Three of a kind: " << chs.threeOfAKind() << std::endl;
//        std::cout << std::boolalpha << "Four of a kind: " << chs.fourOfAKind() << std::endl;
//        std::cout << std::boolalpha << "Straight: " << chs.straight() << std::endl;
//        std::cout << std::boolalpha << "Flush: " << chs.flush() << std::endl;
//        std::cout << std::boolalpha << "Fullhouse: " << chs.fullHouse() << std::endl;
//        std::cout << std::boolalpha << "Straight Flush: " << chs.straightFlush() << std::endl;
//        std::cout << std::boolalpha << "Royal Flush: " << chs.royalFlush() << std::endl;

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
