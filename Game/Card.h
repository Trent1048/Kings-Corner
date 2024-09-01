// Kings Corner Card Game
// Trent Bultsma

namespace game {
    
enum class Suit {
    Heart,
    Diamond,
    Spade,
    Club
};

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

class Card {
public:
    Card(Suit suit, Rank rank);

    Suit suit();
    Rank rank();

private:
    Suit mSuit;
    Rank mRank;
};

}