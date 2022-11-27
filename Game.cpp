//
// Created by Haibin Cao on 10/13/22.
//

#include "Game.h"

Game::Game()
:window(sf::VideoMode(2500, 1500), "Card Game")
{

}

void Game::run()
{

      Deck deck;
      int counter = 0;
      while(true)
      {
          CardHand ch1;
//          ch1.drawCard(LightCard(Ace, Hearts));
//          ch1.drawCard(LightCard(Ten, Hearts));
//          ch1.drawCard(LightCard(Jack, Hearts));
//          ch1.drawCard(LightCard(Queen, Hearts));
//          ch1.drawCard(LightCard(King, Hearts));

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
          ch1.print();
          PokerScore pokerScorer = CardHandScorer::scorePokerHand(ch1);
          if(pokerScorer == STRAIGHT)
          {
              std::cout << "----------------------------------\n";
              ch1.print();
              pokerScorer.counterUpdate();
              pokerScorer.print();
              break;
          }
          else
          {
              counter++;
          }
          std::cout << "----------------------------------\n";
          ch1.print();
          pokerScorer.counterUpdate();
          pokerScorer.print();
      }

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
        sf::Font font;
        if (!font.loadFromFile("MontereyFLF-Bold.ttf")) {
            throw ("yer");
        }
        sf::Text royalFlush("Royal Flush: 1/650,000", font);
        sf::Text straightFlush("Straight Flush: 1/61,640", font);
        sf::Text fourOfAKind("Four of A Kind: 1/15,903", font);
        sf::Text fullHouse("Full House: 1/16,714", font);
        sf::Text flush("Flush: 1/7669", font);
        sf::Text straight("Straight: 1/8080", font);
        sf::Text threeOfAKind("Three of A Kind: 1/17", font);
        sf::Text twoPair("Two Pair: 1/13", font);
        sf::Text onePair("One Pair: 1/3", font);
        sf::Text highCard("High Card: 1/1", font);
        royalFlush.setFillColor(sf::Color::White);
        royalFlush.setCharacterSize(40);
        royalFlush.setPosition(850, 0);
        straightFlush.setFillColor(sf::Color::White);
        straightFlush.setCharacterSize(40);
        straightFlush.setPosition(850, 205);
        fourOfAKind.setFillColor(sf::Color::White);
        fourOfAKind.setCharacterSize(40);
        fourOfAKind.setPosition(850, 410);
        fullHouse.setFillColor(sf::Color::White);
        fullHouse.setCharacterSize(40);
        fullHouse.setPosition(850, 615);
        flush.setFillColor(sf::Color::White);
        flush.setCharacterSize(40);
        flush.setPosition(850, 820);
        straight.setFillColor(sf::Color::White);
        straight.setCharacterSize(40);
        straight.setPosition(850, 1025);
        threeOfAKind.setFillColor(sf::Color::White);
        threeOfAKind.setCharacterSize(40);
        threeOfAKind.setPosition(850, 1230);
        twoPair.setFillColor(sf::Color::White);
        twoPair.setCharacterSize(40);
        twoPair.setPosition(2200, 0);
        onePair.setFillColor(sf::Color::White);
        onePair.setCharacterSize(40);
        onePair.setPosition(2200, 205);
        highCard.setFillColor(sf::Color::White);
        highCard.setCharacterSize(40);
        highCard.setPosition(2200, 410);
        Card card1(Ace, Hearts, {0, 0});
        Card card2(King, Hearts, {155, 0});
        Card card3(Queen, Hearts, {310, 0});
        Card card4(Jack, Hearts, {465, 0});
        Card card5(Ten, Hearts, {620,0});
        Card card6(Ace, Clubs, {0, 205});
        Card card7(Two, Clubs, {155, 205});
        Card card8(Three, Clubs, {310,205});
        Card card9(Four, Clubs, {465, 205});
        Card card10(Five, Clubs, {620, 205});
        Card card11(Seven, Diamonds, {0, 410});
        Card card12(Seven, Clubs, {155, 410});
        Card card13(Seven, Hearts, {310, 410});
        Card card14(Seven, Spades, {465, 410});
        Card card15(Ten, Spades, {620, 410});
        Card card16(Jack, Diamonds, {0, 615});
        Card card17(Jack, Clubs, {155, 615});
        Card card18(Jack, Hearts, {310, 615});
        Card card19(Queen, Diamonds, {465, 615});
        Card card20(Queen, Spades, {620, 615});
        Card card21(Eight, Clubs, {0, 820});
        Card card22(Nine, Clubs, {155, 820});
        Card card23(Jack, Clubs, {310, 820});
        Card card24(Queen, Clubs, {465, 820});
        Card card25(King, Clubs, {620, 820});
        Card card26(Four, Diamonds, {0, 1025});
        Card card27(Five, Clubs, {155, 1025});
        Card card28(Six, Clubs, {310, 1025});
        Card card29(Seven, Hearts, {465, 1025});
        Card card30(Eight, Clubs, {620, 1025});
        Card card31(Five, Diamonds, {0, 1230});
        Card card32(Five, Clubs, {155, 1230});
        Card card33(Five, Clubs, {310, 1230});
        Card card34(Seven, Hearts, {465, 1230});
        Card card35(Ten, Clubs, {620, 1230});
        Card card36(Nine, Diamonds, {1425, 0});
        Card card37(Nine, Clubs, {1580, 0});
        Card card38(Five, Clubs, {1735, 0});
        Card card39(Seven, Hearts, {1890, 0});
        Card card40(Seven, Clubs, {2045, 0});
        Card card41(Ace, Diamonds, {1425, 205});
        Card card42(Three, Clubs, {1580, 205});
        Card card43(Five, Clubs, {1735, 205});
        Card card44(Queen, Hearts, {1890, 205});
        Card card45(Queen, Clubs, {2045, 205});
        Card card46(Ace, Diamonds, {1425, 410});
        Card card47(Three, Clubs, {1580, 410});
        Card card48(Five, Clubs, {1735, 410});
        Card card49(Seven, Hearts, {1890, 410});
        Card card50(King, Clubs, {2045, 410});

        window.clear();
        window.draw(royalFlush);
        window.draw(straightFlush);
        window.draw(fourOfAKind);
        window.draw(fullHouse);
        window.draw(flush);
        window.draw(straight);
        window.draw(threeOfAKind);
        window.draw(twoPair);
        window.draw(onePair);
        window.draw(highCard);

        window.draw(card1);
        window.draw(card2);
        window.draw(card3);
        window.draw(card4);
        window.draw(card5);
        window.draw(card6);
        window.draw(card7);
        window.draw(card8);
        window.draw(card9);
        window.draw(card10);
        window.draw(card11);
        window.draw(card12);
        window.draw(card13);
        window.draw(card14);
        window.draw(card15);
        window.draw(card16);
        window.draw(card17);
        window.draw(card18);
        window.draw(card19);
        window.draw(card20);
        window.draw(card21);
        window.draw(card22);
        window.draw(card23);
        window.draw(card24);
        window.draw(card25);
        window.draw(card26);
        window.draw(card27);
        window.draw(card28);
        window.draw(card29);
        window.draw(card30);
        window.draw(card31);
        window.draw(card32);
        window.draw(card33);
        window.draw(card34);
        window.draw(card35);
        window.draw(card36);
        window.draw(card37);
        window.draw(card38);
        window.draw(card39);
        window.draw(card40);
        window.draw(card41);
        window.draw(card42);
        window.draw(card43);
        window.draw(card44);
        window.draw(card45);
        window.draw(card46);
        window.draw(card47);
        window.draw(card48);
        window.draw(card49);
        window.draw(card50);
        window.display();
    }
}
