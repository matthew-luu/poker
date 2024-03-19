using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace Side
{
    public class Hand
    {
        List<Card> cards = new List<Card>();
        public string ranks { get; set; }
        public bool suited { get; set; }
        public Hand(Card c1, Card c2)
        { 
            cards.Add(c1);
            cards.Add(c2);
            ConvertCardsToHand();
        }
        public (Card, Card) GetCards()
        {
            return (cards[0], cards[1]);
        }
        public string GetHand()
        {
            string hand = ranks;
            hand += suited ? 's' : 'o';
            return hand;
        }
        protected void ConvertCardsToHand()
        {
            int cardOrder = CompareRanks(cards[0].rank, cards[1].rank);
            if (cardOrder >= 0)
            {
                ranks = cards[0].rank.ToString().ToUpper() + cards[1].rank.ToString().ToUpper();
            }
            else
            {
                ranks = cards[1].rank.ToString().ToUpper() + cards[0].rank.ToString().ToUpper();
            }
            ranks.Trim();
            suited = (cards[0].suit == cards[1].suit) ? true : false;
        }
        protected int CompareRanks(char rank1, char rank2)
        {
            const string rankOrder = "AKQJT98765432";
            int index1 = rankOrder.IndexOf(rank1);
            int index2 = rankOrder.IndexOf(rank2);
            return index2 - index1;
        }
    }
}