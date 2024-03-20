using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;

namespace Side.Tests
{
    [TestClass]
    public class StoredProcedureTest
    {
        [TestMethod]
        public void getPFRRangesNotNull()
        {
            Player testPlayer = new Player();
            testPlayer.GetPFRRanges();
            Assert.IsNotNull(testPlayer.pfrRanges);
        }
        [TestMethod]
        public void isHandInRangeTrue()
        {
            Player testPlayer = new Player();
            Card card1 = new Card('A', 'S');
            Card card2 = new Card('A', 'H');
            Hand hand = new Hand(card1, card2);
            testPlayer.Deal(hand);
            Assert.IsTrue(testPlayer.IsHandInRangeDB());
        }
        [TestMethod]
        public void isHandInRangeFalse()
        {
            Player testPlayer = new Player();
            Card card1 = new Card('2', 'S');
            Card card2 = new Card('3', 'H');
            Hand hand = new Hand(card1, card2);
            testPlayer.Deal(hand);
            Assert.IsFalse(testPlayer.IsHandInRangeDB());
        }
    }
}
