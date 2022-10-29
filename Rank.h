//
// Created by Haibin Cao on 10/19/22.
//

#ifndef PLAYINGCARD_RANK_H
#define PLAYINGCARD_RANK_H
#include <iostream>
#include "rankEnum.h"

class Rank {
public:
    Rank();
    Rank(Ranks enumRank);
    std::string toString() const;
    void setRank(Ranks enumRank);
    Ranks getRank();
private:
    Ranks enumRank;
};


#endif //PLAYINGCARD_RANK_H
