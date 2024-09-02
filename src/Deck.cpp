// Kings Corner Card Game
// Trent Bultsma

#pragma once

#include <assert.h>
#include <ctime>
#include <random>

#include "Game/Deck.h"

namespace game {
    
Deck::Deck() {
    std::srand(std::time(nullptr));
    
    for (int suit = 0; suit < 4; ++suit) {
        for (int rank = 0; rank < 13; ++rank) {
            mCards.emplace_back(Card(static_cast<Suit>(suit), static_cast<Rank>(rank)));
        }
    }
}

void Deck::shuffle() {
    size_t deckSize = mCards.size();
    for (size_t cardIdx = 0; cardIdx < deckSize; ++cardIdx) {
        size_t swapCardIdx = std::rand() % deckSize;
        Card swapCard = mCards[swapCardIdx];
        mCards[swapCardIdx] = mCards[cardIdx];
        mCards[cardIdx] = swapCard;
    }
}

bool Deck::empty() {
    return mCards.empty();
}

Card Deck::draw() {
    assert(!mCards.empty());
    Card card = mCards.back();
    mCards.pop_back();
    return card;
}

}