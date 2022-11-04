//
// Created by Haibin Cao on 10/29/22.
//

#ifndef PLAYINGCARD_CARDHANDSCORER_H
#define PLAYINGCARD_CARDHANDSCORER_H
#include "CardHand.h"
#include "PokerScore.h"

class CardHandScorer
{
private:
    static int duplicateCounter;
    static int uniqueCounter;
    static int connectCounter;
    static int straightCounter;
    static int flushCounter;
    static int creativityCounter;
    static bool threePiece;
    static bool fourPiece;
    static PokerScore pokerScore;
public:
    CardHandScorer();
    static PokerScore scorePokerHand(CardHand ch);
    static bool royalFlush();
    static bool straightFlush();
    static bool fullHouse();
    static bool flush();
    static bool straight();
    static bool fourOfAKind();
    static bool threeOfAKind();
    static bool twoPair();
    static bool onePair();
    static bool highCard();
    static void getDuplicate(CardHand ch);
    static void getUnique(CardHand ch);
    static void getConnect(CardHand ch);
    static void getStraight(CardHand ch);
    static void getFlush(CardHand ch);
    static void getRoyalFlush(CardHand ch);
};


#endif //PLAYINGCARD_CARDHANDSCORER_H
