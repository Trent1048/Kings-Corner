// Kings Corner Card Game
// Trent Bultsma

#pragma once

#include <vector>

#include "Game/Card.h"

namespace game {

class Player {
public:
    Player();

    void addToHand(Card&& card);
    const std::vector<Card>& hand() const;

private:
    std::vector<Card> mHand;
};

}