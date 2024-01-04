#ifndef DECK_OF_CARDS_H
#define DECK_OF_CARDS_H

typedef struct{
	const char *rank;
	const char *suit;
} Card;

void initialize(Card deck[]);
void shuffleDeck(Card deck[], int size);
void printDeck(Card deck[], int size);

#endif // DECK_OF_CARDS_H
