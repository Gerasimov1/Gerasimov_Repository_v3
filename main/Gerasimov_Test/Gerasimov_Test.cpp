#include "pch.h"
#include "CppUnitTest.h"
#include "../main/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GerasimovTest
{
	TEST_CLASS(GerasimovTest)
	{
	public:
		TEST_METHOD(Check_UserInput_Empty)
		{
			string str = "";
			bool expected = false;
			bool actual = UserInput(str);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Check_UserInput_Letter)
		{
			string str = "a";
			bool expected = false;
			bool actual = UserInput(str);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Check_UserInput_Negative)
		{
			string str = "-5";
			bool expected = false;
			bool actual = UserInput(str);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Sred_3and5_4returned)
		{
			double a = 3;
			double b = 5;
			double expected = 4;
			double actual = ArtimicMean(a, b);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Geom_27and3_9returned)
		{
			double a = 27;
			double b = 3;
			double expected = 9;
			double actual = GeometricMean(a, b);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
	};
}