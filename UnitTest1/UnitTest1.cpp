#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3B/Triad.h"
#include "../3.3B/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t(1.0, 2.0, 3.0);
			Assert::AreEqual(t.getFirst(), 1.0);
			Assert::AreEqual(t.getSecond(), 2.0);
			Assert::AreEqual(t.getThird(), 3.0);
		}
	};
}
