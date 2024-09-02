// Kings Corner Card Game
// Trent Bultsma

#include <iostream>

#include "Game/Deck.h"

using namespace game;

int main() {
    Deck deck = Deck();
    deck.shuffle();

    std::cout << "Top 5 cards are:" << std::endl;

    for (int i = 0; i < 5; ++i) {
        Card topCard = deck.draw();
        std::cout << topCard << std::endl;
    }
    return 0;
}