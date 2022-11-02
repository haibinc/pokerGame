//
// Created by Haibin Cao on 10/30/22.
//

#ifndef PLAYINGCARD_SCORES_H
#define PLAYINGCARD_SCORES_H
enum Scores{
    ROYAL_FLUSH, //A, K, Q, J, 10, all the same suit.
    STRAIGHT_FLUSH, //five cards of the same suit and consecutive ranking
    FOUR_OF_A_KIND, //four cards of the same ranking
    FULL_HOUSE, //three cards of the same rank along with two cards of the same rank
    FLUSH, //five cards of the same suit
    STRAIGHT, //five cards in consecutive ranking
    THREE_OK_A_KIND, //three cards of the same rank
    TWO_PAIR, //two cards of the same rank along with another two cards of the same rank
    ONE_PAIR, //two cards of the same rank
    HIGH_CARD, //highest card in the player’s hand
    COUNT_SCORES
};


#endif //PLAYINGCARD_SCORES_H
