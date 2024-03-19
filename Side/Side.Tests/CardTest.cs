using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;

namespace Side.Tests
{
    [TestClass]
    public class CardTest
    {
        [TestMethod]
        public void InvalidCardExceptionSuite()
        {
            Card card = new Card('A', 'K');
            Assert.ThrowsException<Exception>(card.IsCardReal, "IsCardReal Failed");
        }
        [TestMethod]
        public void InvalidCardExceptionRank()
        {
            Card card = new Card('I', 'H');
            Assert.ThrowsException<Exception>(card.IsCardReal, "IsCardReal Failed");
        }
        [TestMethod]
        public void InvalidCardExceptionBoth()
        {
            Card card = new Card('Z', 'X');
            Assert.ThrowsException<Exception>(card.IsCardReal, "IsCardReal Failed");
        }
    }
}
