#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deck_of_cards.h"
#include "ranges.h"

typedef struct{
    char *hand;
    int position;
    int score;
} Player;

void dealToPlayer(Card deck[], Player *player)
{
    player->hand = getHand(deck[0], deck[1]);
}

void pushOrFold(Player *player, int position)
{
    int choice;
    printf("\nPush (1) or Fold (0): ");
    scanf("%d", &choice);

    if(choice)
    {
        //Calculate the number of hands in the position's range
        int hand;
        int rangeSize = rangeElements[player->position];
        for (hand = 0; hand < rangeSize; hand++)
        {
            if(strcmp(positions[player->position][hand], player->hand)==0)
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

void changePosition(Player *player)
{
    int numberOfPositions = 7;
    player->position = (player->position + 1) % numberOfPositions;
}

int main()
{
    //initialize deck
    Card deck[DECK_SIZE];
    initializeDeck(deck);
    
    //initialize player
    Player *player = malloc(sizeof(Player));
    player->score = 0;
    player->position = 0;
    
    int totalHands = 0;

    while(1)
    {
        shuffleDeck(deck, DECK_SIZE);
        dealToPlayer(deck, player);

        printf("\nPosition: %s\n", positionName[player->position]);
        printf("Player hand: %s\n", player->hand);
        pushOrFold(player, player->position);// Needs to include position
        changePosition(player);
        totalHands++;
        printf("\nTotal hands: %d   Score: %d", totalHands, player->score);

        if(totalHands >= 100)
        {
            break;
        }
    }
    
    free(player);
    return 0;
}