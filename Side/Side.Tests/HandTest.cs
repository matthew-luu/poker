using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;

namespace Side.Tests
{
    [TestClass]
    public class HandTest
    {
        [TestMethod]
        public void GetCardsWorks()
        {
            Card card1 = new Card('A', 'S');
            Card card2 = new Card('A', 'H');
            (Card, Card) expectedTuple = (card1, card2);
            Hand hand = new Hand(card1, card2);
            (Card, Card) actualTuple = hand.GetCards();
            Assert.AreEqual(expectedTuple, actualTuple);
        }
        [TestMethod]
        public void GetHandWorksForSuited()
        {
            Card card1 = new Card('A', 'D');
            Card card2 = new Card('K', 'D');
            Hand hand = new Hand(card1, card2);
            string expected = "AKs";
            string actual = hand.GetHand();
            Assert.AreEqual(expected, actual);
        }
        [TestMethod]
        public void GetHandWorksForUnsuited()
        {
            Card card1 = new Card('A', 'D');
            Card card2 = new Card('K', 'H');
            Hand hand = new Hand(card1, card2);
            string expected = "AKo";
            string actual = hand.GetHand();
            Assert.AreEqual(expected, actual);
        }
        [TestMethod]
        public void GetHandWorksForUnorderedUnsuited()
        {
            Card card1 = new Card('T', 'D');
            Card card2 = new Card('K', 'H');
            Hand hand = new Hand(card1, card2);
            string expected = "KTo";
            string actual = hand.GetHand();
            Assert.AreEqual(expected, actual);
        }
        [TestMethod]
        public void GetHandWorksForUnorderedSuited()
        {
            Card card1 = new Card('3', 'S');
            Card card2 = new Card('K', 'S');
            Hand hand = new Hand(card1, card2);
            string expected = "K3s";
            string actual = hand.GetHand();
            Assert.AreEqual(expected, actual);
        }
    }
}
