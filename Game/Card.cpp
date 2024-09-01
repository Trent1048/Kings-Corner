// Kings Corner Card Game
// Trent Bultsma

#include "Card.h"

namespace game {

Card::Card(Suit suit, Rank rank) :
    mSuit(suit),
    mRank(rank)
{ }

Suit Card::suit() {
    return mSuit;
}

Rank Card::rank() {
    return mRank;
}

}