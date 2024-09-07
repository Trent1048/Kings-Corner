// Kings Corner Card Game
// Trent Bultsma

#include <iostream>

#include "Game/Deck.h"
#include "Game/Player.h"

using namespace game;

int main() {
    Deck deck = Deck();
    deck.shuffle();

    Player player1;
    Player player2;

    for (int i = 0; i < 5; ++i) {
        player1.addToHand(deck.draw());
        player2.addToHand(deck.draw());
    }

    std::cout << "Player 1 Hand:" << std::endl;
    for (const Card& card : player1.hand()) {
        std::cout << "\t" << card << std::endl;
    }

    std::cout << "Player 2 Hand:" << std::endl;
    for (const Card& card : player2.hand()) {
        std::cout << "\t" << card << std::endl;
    }
    return 0;
}