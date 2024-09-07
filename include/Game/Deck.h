// Kings Corner Card Game
// Trent Bultsma

#pragma once

#include <vector>

#include "Game/Card.h"

namespace game {

class Deck {
public:
    Deck();

    void shuffle();
    bool empty();
    Card draw();

private:
    std::vector<Card> mCards;
};

}