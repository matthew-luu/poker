#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deck_of_cards.h"
#include "ranges.h"

typedef struct{
    char *hand;
    int score;
} Player;

void dealToPlayer(Card deck[], Player *player)
{
    player->hand = getHand(deck[0], deck[1]);
}

void pushOrFold(Player *player, int rangeSize)
{
    int choice;
    printf("\nPush (1) or Fold (0): ");
    scanf("%d", &choice);

    if(choice)
    {
        for (int hand = 0; hand < rangeSize; hand++)
        {
            if(strcmp(rangeUTG[hand], player->hand)==0)
            {
                player->score++;
                printf("In range!\n");
                return;
            }
        }
        printf("Out of Range!\n");
        player->score--;
    }
    return;
}

int main()
{
    //initialize deck
    Card deck[DECK_SIZE];
    initializeDeck(deck);
    
    //initialize player
    Player *player = malloc(sizeof(Player));
    player->score = 0;
    
    while(1)
    {
        shuffleDeck(deck, DECK_SIZE);
        dealToPlayer(deck, player);
        printf("\nCards: %s%s %s%s\n", deck[0].rank, deck[0].suit, deck[1].rank, deck[1].suit);
        printf("Player hand: %s\n", player->hand);
        pushOrFold(player, 11);
        printf("Score: %d\n", player->score);

        int shuffle;
        printf("\nShuffle? Yes(1) or No(0): ");
        scanf("%d", &shuffle);
        if(shuffle == 0)
        {
            break;
        }
    }
    
    free(player);
    return 0;
}