// Kings Corner Card Game
// Trent Bultsma

#include <ostream>

namespace game {
    
enum class Suit {
    Heart,
    Diamond,
    Spade,
    Club
};

std::ostream& operator <<(std::ostream& os, Suit suit);

enum class Rank {
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

std::ostream& operator <<(std::ostream& os, Rank rank);

class Card {
public:
    Card(Suit suit, Rank rank);

    Suit suit() const;
    Rank rank() const;

    friend std::ostream& operator <<(std::ostream& os, const Card& card);

private:
    Suit mSuit;
    Rank mRank;
};

}