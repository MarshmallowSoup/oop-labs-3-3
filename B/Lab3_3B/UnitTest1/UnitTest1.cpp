#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3_3B/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair p1, p2;
			p1 = Pair(10, 100);
			p2 = Pair(3, 4);
			bool actual = p1 > p2;
			bool expected = true;
			Assert::AreEqual(expected, actual);
		}
	};
}
