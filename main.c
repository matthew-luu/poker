#include <stdio.h>
#include <stdlib.h>
#include "deck_of_cards.h"

typedef struct{
    char *hand;
    int score;
} Player;

void dealToPlayer(Card deck[], Player *player)
{
    player->hand = getHand(deck[0], deck[1]);
    /*for (int player = 1; player <= numPlayers; player++)
    {
        
    }
    */
}

int main()
{
    /*const int numPlayers = 9;
    const int cardsPerPlayer = 2;
    const int totalCards = numPlayers * cardsPerPlayer;

    if (totalCards > DECK_SIZE)
    {
        printf("Deck is too small.\n");
        return 1;
    }
    */
    Card deck[DECK_SIZE];
    initializeDeck(deck);
    Player *player = malloc(sizeof(Player));
    player->score = 0;
    shuffleDeck(deck, DECK_SIZE);
    dealToPlayer(deck, player);
    printf("Cards: %s%s %s%s\n", deck[0].rank, deck[0].suit, deck[1].rank, deck[1].suit);
    printf("Player hand: %s\n", player->hand);
    return 0;
}