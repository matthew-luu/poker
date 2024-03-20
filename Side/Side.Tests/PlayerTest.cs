using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;

namespace Side.Tests
{
    [TestClass]
    public class PlayerTest
    {
        [TestMethod]
        public void IsHandInRangeTrue()
        {
            Player testPlayer = new Player();
            Card card1 = new Card('A', 'S');
            Card card2 = new Card('A', 'H');
            Hand hand = new Hand(card1, card2);
            testPlayer.Deal(hand);
            testPlayer.GetPFRRanges();
            Assert.IsTrue(testPlayer.IsHandInRange(testPlayer.pfrRanges));
        }
        [TestMethod]
        public void IsHandInRangeFalse()
        {
            Player testPlayer = new Player();
            Card card1 = new Card('2', 'S');
            Card card2 = new Card('3', 'H');
            Hand hand = new Hand(card1, card2);
            testPlayer.Deal(hand);
            testPlayer.GetPFRRanges();
            Assert.IsFalse(testPlayer.IsHandInRange(testPlayer.pfrRanges));
        }
    }
}
