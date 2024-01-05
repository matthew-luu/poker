#ifndef DECK_OF_CARDS_H
#define DECK_OF_CARDS_H
#define DECK_SIZE 52

typedef struct{
	const char *rank;
	const char *suit;
} Card;

void initializeDeck(Card deck[]);
void shuffleDeck(Card deck[], int size);
void printDeck(Card deck[], int size);
int compareRanks(const char* rank1, const char* rank2);
char* getHand(Card card1, Card card2); 

#endif // DECK_OF_CARDS_H
