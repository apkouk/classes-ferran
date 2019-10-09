// ExercisesC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <cmath>

double GetSalary(double baseSalary, double sales) 
{
	if (sales > 1000)
	{
		return baseSalary * 1.3;
	}
	if (sales > 500 && sales < 1000)
	{
		return baseSalary * 1.2;
	}
	if (sales < 500)
	{
		return baseSalary * 1.1;
	}
}


 const char* GetPHType(double phValue)
{	 
	if (phValue < 7)
	{
		const char* acid = "Àcid";
		return acid;
	}
	if (phValue == 7)
	{
		const char* neutre = "Neutre";
		return neutre;
	}
	if (phValue > 7)
	{
		const char* basic = "Bàsic";
		return basic;
	}
}


double GetPerimeter(double sideA, double sideB, double sideC) {
	double _result = sideA + sideB + sideC;
	return _result;
}

double GetArea(double SideA, double SideB, double SideC) {
	double result = 0;

	if ((SideA == SideB) && (SideC == SideC))
	{
		printf("Triangulo equilatero eh pillin");
	}

	double semiperimetro = 0;
	semiperimetro = (SideA + SideB + SideC) / 2;

	result = sqrt(semiperimetro * (semiperimetro - SideA) * (semiperimetro - SideB) * (semiperimetro - SideC));
	return result;
}



void CalcularTriangle()
{
	double SideA, SideB, SideC;
	double Perimeter;
	double Area;

	printf("Dame un valor entero: "); scanf_s("%lf", &SideA);
	printf("Dame otro valor entero: "); scanf_s("%lf", &SideB);
	printf("Y uno más: "); scanf_s("%lf", &SideC);

	Perimeter = GetPerimeter(SideA, SideB, SideC);
	Area = GetArea(SideA, SideB, SideC);
	printf("Perimeter: %lf\n", Perimeter);
	printf("Area: %lf\n", Area);
}

int Execute()
{
	CalcularTriangle();
	while (1)
	{
		char ch;
		//read a single character
		ch = fgetc(stdin);

		if (ch == 101)
		{
			return 0;
		}
		//read dummy cha2racter to clear
		//input buffer, which inserts after character input
		ch = getchar();
		CalcularTriangle();
	}
}



int main()
{
	return Execute();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
