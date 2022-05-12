#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3_3F/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point p1;
			p1 = Point(0, 4);
			double actual = p1.distanceToOrigin();
			double expected = 4;
			Assert::AreEqual(expected, actual);
		}
	};
}
