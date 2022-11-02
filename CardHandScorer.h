//
// Created by Haibin Cao on 10/29/22.
//

#ifndef PLAYINGCARD_CARDHANDSCORER_H
#define PLAYINGCARD_CARDHANDSCORER_H
#include "CardHand.h"

class CardHandScorer
{
private:
    static int duplicateCounter;
    static int uniqueCounter;
    static int connectCounter;
public:
    CardHandScorer();
    static int scorePokerHand(CardHand ch);
    static bool royalFlush(CardHand ch);
    static bool straightFlush(CardHand ch);
    static bool fullHouse(CardHand ch);
    static bool flush(CardHand ch);
    static bool straight(CardHand ch);
    static bool fourOfAKind(CardHand ch);
    static bool threeOfAKind(CardHand ch);
    static bool twoPair(CardHand ch);
    static bool onePair(CardHand ch);
    static bool highCard(CardHand ch);
    static void getDuplicate(CardHand ch);
    static void getUnique(CardHand ch);
    static void getConnect(CardHand ch);
};


#endif //PLAYINGCARD_CARDHANDSCORER_H
