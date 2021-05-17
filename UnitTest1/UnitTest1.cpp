#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Complex c, d;
			c.Init(4, 8);
			d.Init(4, 8);
			bool t = Equ(c, d);
			Assert::AreEqual(t, true);
		}
	};
}