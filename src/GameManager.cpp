// Kings Corner Card Game
// Trent Bultsma

#include <assert.h>

#include "Game/GameManager.h"

namespace game {

GameManager::GameManager(std::vector<Player>&& players, Deck&& deck)
    : mPlayers(players),
    mDeck(deck)
{
    assert(!mPlayers.empty());
    mDeck.shuffle();
}

GameStatus GameManager::playTurn(Player& player) {
    if (!mDeck.empty())
        player.addToHand(mDeck.draw());
    // TODO need to probably add a function to the player so they can decide what they want to do
    // player.playTurn() or something, and pass in some read only data about the game state
    // where the playTurn() function returns what the player is going to do maybe?
}

GameStatus GameManager::playGame() {
    GameStatus status;
    size_t currentPlayerIdx = 0;
    while (!status.winner) {
        Player& currentPlayer = mPlayers[currentPlayerIdx];
        status = playTurn(currentPlayer);
        currentPlayerIdx = (currentPlayerIdx + 1) % mPlayers.size();
    }
    return status;
}

}