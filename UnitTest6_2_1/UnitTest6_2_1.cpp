#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_06.2_1/lab_06.2_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			a = main();
			Assert::AreEqual(a, 0);
		}
	};
}



