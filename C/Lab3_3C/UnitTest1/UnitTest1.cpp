#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3_3C/Object.cpp"
#include "../Lab3_3C/BitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			BitString p1, p2;
			unsigned int actual = p1.get_count();
			unsigned int  expected = 2;
			Assert::AreEqual(expected, actual);
		}
	};
}