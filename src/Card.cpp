// Kings Corner Card Game
// Trent Bultsma

#pragma once

#include <ostream>

#include "Game/Card.h"

namespace game {

Card::Card(Suit suit, Rank rank) :
    mSuit(suit),
    mRank(rank)
{ }

Suit Card::suit() const {
    return mSuit;
}

Rank Card::rank() const {
    return mRank;
}

std::ostream& operator <<(std::ostream& os, const Card& card) {
    // TODO need to make a enum class to string converter for rank/suit
    return os << static_cast<int>(card.rank()) << " of " << static_cast<int>(card.suit()) << "s";
}

}