#include "pch.h"
#include "CppUnitTest.h"
#include "../ExercisesC/ExercisesC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ExercideCTest
{
	TEST_CLASS(ExercideCTest)
	{
	public:
		
		TEST_METHOD(CalculateAreaOfTriangle)
		{
			Assert::AreEqual(10.8253, GetArea(5, 5, 5), 0.0001);
		}

		TEST_METHOD(CalculatePerimeterOfTriangle)
		{
			Assert::AreEqual(6, GetPerimeter(2,2,2), 0.0001);
			Assert::AreEqual(29, GetPerimeter(2, 4, 23), 0.0001);
		}

		TEST_METHOD(GetPHTypeValueSegonsPh)
		{	
			const char* acid = GetPHType(6.99);		
			Assert::AreEqual("Àcid", acid, true);
			const char* neutre = GetPHType(7);
			Assert::AreEqual("Neutre", neutre, true);
			const char* basic = GetPHType(7.09);
			Assert::AreEqual("Bàsic", basic, true);
		}
		
		TEST_METHOD(CalculateSalariVenedor)
		{
			Assert::AreEqual(780 , GetSalary(600, 1200), 0.0001);
			Assert::AreEqual(720, GetSalary(600, 900), 0.0001);
			Assert::AreEqual(660, GetSalary(600, 300), 0.0001);
		}
	};
}
