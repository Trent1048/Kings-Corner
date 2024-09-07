// Kings Corner Card Game
// Trent Bultsma

#include <assert.h>
#include <ostream>
#include <unordered_map>

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
    return os << card.rank() << " of " << card.suit() << "s";
}

std::ostream& operator <<(std::ostream& os, Suit suit) {
    static const std::unordered_map<Suit, std::string> suitStrings = {
        {Suit::Heart, "Heart"},
        {Suit::Diamond, "Diamond"},
        {Suit::Spade, "Spade"},
        {Suit::Club, "Club"}
    };

    auto suitIt = suitStrings.find(suit);
    if (suitIt != suitStrings.end())
        return os << suitIt->second;
    assert(false);
    return os << "Unknown Suit";
}

std::ostream& operator <<(std::ostream& os, Rank rank) {
    static const std::unordered_map<Rank, std::string> rankStrings = {
        {Rank::Ace, "Ace"},
        {Rank::Two, "Two"},
        {Rank::Three, "Three"},
        {Rank::Four, "Four"},
        {Rank::Five, "Five"},
        {Rank::Six, "Six"},
        {Rank::Seven, "Seven"},
        {Rank::Eight, "Eight"},
        {Rank::Nine, "Nine"},
        {Rank::Ten, "Ten"},
        {Rank::Jack, "Jack"},
        {Rank::Queen, "Queen"},
        {Rank::King, "King"}
    };

    auto rankIt = rankStrings.find(rank);
    if (rankIt != rankStrings.end())
        return os << rankIt->second;
    assert(false);
    return os << "Unknown Rank";
}

}