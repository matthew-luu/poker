#include <stdio.h>
#include <stdlib.h>
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

