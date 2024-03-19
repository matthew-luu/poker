using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using System.Collections.Generic;

namespace Side.Tests
{
    [TestClass]
    public class DeckTest
    {
        [TestMethod]
        public void DeckNotEmpty()
        {
            //Deck initialization.
            Deck testDeck = new Deck();
            Assert.IsNotNull(testDeck);
        }
        [TestMethod]
        public void DeckContains52Cards()
        {
            Deck testDeck = new Deck();
            int expected = 52;
            int actual = testDeck.cards.Count;
            Assert.AreEqual(expected, actual);
        }
        [TestMethod]
        public void ShuffleWorks()
        {
            Deck testDeck = new Deck();
            List<Card> preShuffle = testDeck.cards;
            Deck testDeck1 = new Deck();
            testDeck1.ShuffleDeck(5);
            List<Card> postShuffle = testDeck1.cards;
            int expected = 0;
            int actual = 0;
            for (int i = 0; i < 52; i++)
            {
                if (preShuffle[i] != postShuffle[i]) actual++;
            }
            Assert.AreNotEqual(expected, actual);
        }
    }
}
