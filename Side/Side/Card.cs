using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace Side
{
    public class Card
    {
        public char rank { get; set; }
        public char suit { get; set; }

        public Card(char Rank, char Suit) 
        {
            rank = Rank;
            suit = Suit;
        }

        public void IsCardReal()
        {
            char[] suits = { 'S', 'C', 'D', 'H' };
            char[] ranks = { '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A' };
            if (suits.Contains(suit) && ranks.Contains(rank)) return;
            throw new Exception("Please provide a valid card.") ;
        }
    }
}