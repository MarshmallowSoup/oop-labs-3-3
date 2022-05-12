#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3_3A/BaseBitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BaseBitString q;
			q = BaseBitString(0l, 1l);
			long actual = 1;
			long expected = q.getB();
			Assert::AreEqual(expected, actual);
		}
	};
}
