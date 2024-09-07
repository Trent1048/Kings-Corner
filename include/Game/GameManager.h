// Kings Corner Card Game
// Trent Bultsma

#pragma once

#include "Game/Deck.h"
#include "Game/Player.h"

namespace game {

struct GameStatus {
    const Player* winner;
};

class GameManager {
public:
    GameManager(std::vector<Player>&& players, Deck&& deck);

    GameStatus playGame();

private:
    GameStatus playTurn(Player& player);

    std::vector<Player> mPlayers;
    Deck mDeck;
};

}