#include <stdio.h>
#include "deck_of_cards.h"

void dealToPlayer(Card deck[], int player, int cardsPerPlayer)
{
    
}

int main()
{
    const int numPlayers = 9;
    const int cardsPerPlayer = 2;
    const int totalCards = numPlayers * cardsPerPlayer;

    if (totalCards > DECK_SIZE)
    {
        printf("Deck is too small.\n");
        return 1;
    }

    Card deck[DECK_SIZE];
    initializeDeck(deck);
    shuffleDeck(deck, DECK_SIZE);

    dealToPlayer(deck, numPlayers, cardsPerPlayer);

    return 0;
}