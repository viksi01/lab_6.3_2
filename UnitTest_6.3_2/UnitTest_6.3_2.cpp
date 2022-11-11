#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3_2/lab_6.3_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { -50, - 41, 17, 61, 10 };
			int t = Number(a, 5, 1,1);
			Assert::AreEqual(t, 4);

		}
	};
}
