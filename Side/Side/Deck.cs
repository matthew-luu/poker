using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Security.Cryptography;

namespace Side
{
    public class Deck
    {
        char[] suits = { 'S', 'C', 'D', 'H' };
        char[] ranks = { '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A' };
        public List<Card> cards = new List<Card>();

        public Deck()
        {
            //Initialize the deck
            foreach (char rank in ranks) 
            {
                foreach (char suit in suits)
                {
                    Card card = new Card(rank, suit);
                    cards.Add(card);
                }
            }
        }
        public void ShuffleDeck(int times)
        { 
            RNGCryptoServiceProvider provider = new RNGCryptoServiceProvider();
            int n = cards.Count;
            for (int shuffleCount = 0; shuffleCount < times; shuffleCount++)
            {
                while (n > 1)
                {
                    byte[] box = new byte[1];
                    do provider.GetBytes(box);
                    while (!(box[0] < n * (Byte.MaxValue / n)));
                    int k = (box[0] % n);
                    n--;
                    Card card = cards[k];
                    cards[k] = cards[n];
                    cards[n] = card;
                }
            }
        }
        public void PrintDeck()
        {
            foreach (Card card in cards)
            {
                Console.WriteLine("{1}{2}", card.rank, card.suit);
            }
        }
    }
}