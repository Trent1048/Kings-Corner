// Kings Corner Card Game
// Trent Bultsma

#include "Game/Player.h"

namespace game {

Player::Player() { }

void Player::addToHand(Card&& card) {
    mHand.push_back(card);
}

const std::vector<Card>& Player::hand() const {
    return mHand;
}

}