#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "deck_of_cards.h"

// Define the suits and ranks
//const char *suits[] = {"♠", "♣", "♦", "♥"};
const char *suits[] = {"S", "C", "D", "H"};
const char *ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K", "A"};

// Create a 52 card deck
void initializeDeck(Card deck[])
{
	int cardIndex = 0;
	for (int suitIndex = 0; suitIndex < 4; suitIndex++)
	{
		for (int rankIndex = 0; rankIndex < 13; rankIndex++)
		{
			deck[cardIndex].rank = ranks[rankIndex];
			deck[cardIndex].suit = suits[suitIndex];
			cardIndex++;
		}
	}
}

// Shuffle the deck
void shuffleDeck(Card deck[], int size)
{
	srand(time(NULL));
	for (int i = size - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		Card temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}

// Print the entire deck
void printDeck(Card deck[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s%s\n", deck[i].rank, deck[i].suit);
	}
	printf("\n");
}

int compareRanks(const char* rank1, const char* rank2) 
{
    // Define an order for the ranks in decreasing order
    const char* rankOrder = "AKQJT98765432";

    // Find the index of each rank in the order
    int index1 = strchr(rankOrder, *rank1) - rankOrder;
    int index2 = strchr(rankOrder, *rank2) - rankOrder;

    // Compare the indices
    return index2 - index1;
}

char* getHand(Card card1, Card card2)
{
    char* hand = (char*)malloc(4*sizeof(char));
    //strncpy(hand, card1.rank, 1);
    //strncpy(hand + 1, card2.rank, 1);
	if (compareRanks(card1.rank, card2.rank) > 0) {
        strncpy(hand, card1.rank, 1);
        strncpy(hand + 1, card2.rank, 1);
    } else {
        strncpy(hand, card2.rank, 1);
        strncpy(hand + 1, card1.rank, 1);
    }

    hand[2] = (strcmp(card1.suit, card2.suit) == 0) ? 's' : 'o';
    hand[3] = '\0';
    return hand;
}