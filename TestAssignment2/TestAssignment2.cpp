#include "pch.h"
#include "CppUnitTest.h"
// Huynh Minh Quan Nguyen - Assignment 2
extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* length);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestAssignment2
{
	TEST_CLASS(TestAssignment2)
	{
	public:
		
		TEST_METHOD(TestgetPerimeter)
		{
			// This is testing the getPerimeter function
			int length = 80;
			int width = 40;
			int expectedPerimeter = 240;
			int actualPerimeter = getPerimeter(&length, &width);

			Assert::AreEqual(expectedPerimeter, actualPerimeter);
			
		}
		TEST_METHOD(TestgetArea)
		{
			// This is testing the getArea function
			int length = 70;
			int width = 40;
			int expectedArea = 280;
			int actualArea = getArea(&length, &width);
			
		}

		TEST_METHOD(TestsetLength1)
		{
			int input1 = 50;
			int expectedlength1 = input1;
			int length1;
			setLength(input1, &length1);
			Assert::AreEqual(expectedlength1, length1);
		}

		TEST_METHOD(TestsetLength2)
		{
			int input2 = 99;
			int expectedlength2 = input2;
			int length2;
			setLength(input2, &length2);

		Assert::AreEqual(expectedlength2, length2);
		}

		TEST_METHOD(TestsetLength3)
		{
			int input3 = 5;
			int expectedlength3 = input3;
			int length3;
			setLength(input3, &length3);
			Assert::AreEqual(expectedlength3, length3);

		}

		TEST_METHOD(TestsetWidth1)
		{
			int input1 = 50;
			int expectedwidth1 = input1;
			int width1;
			setWidth(input1, &width1);
			Assert::AreEqual(expectedwidth1, width1);
		}

		TEST_METHOD(TestsetWidth2)
		{
			int input2 = 99;
			int expectedwidth2 = input2;
			int width2;
			setWidth(input2, &width2);

			Assert::AreEqual(expectedwidth2, width2);
		}

		TEST_METHOD(TestsetWidth3)
		{
			int input3 = 5;
			int expectedwidth3 = input3;
			int width3;
			setWidth(input3, &width3);
			Assert::AreEqual(expectedwidth3, width3);

		}
	};
}
