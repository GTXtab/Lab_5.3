#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test = 1;
			double z;
			z = p(test);

			Assert::AreEqual(test, 1);
		}
	};
}
