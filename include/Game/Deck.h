// Kings Corner Card Game
// Trent Bultsma

#include <vector>

#include "Card.h"

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