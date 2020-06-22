#include <iostream>
#include <cmath>
#include "FirstTask.h"

double Square(int A, int B, int C)//вычисление площади треугольника по трем сторонам
{
	double p = (A + B + C) / 2.0; //полупериметр
	double s = sqrt(p * (p - A) * (p - B) * (p - C));//площадь
	return s;
}

int Perimeter(int A, int B, int C)
{
	return A + B + C;
}

bool isTriangle(int A, int B, int C)//проверка существования треугольника
{
	if ((A + B) > C && (A + C) > B && (B + C) > A)
		return true;
	else
		return false;
}

void firstTask()
{
	int A, B, C;
	bool Run = true;
	while (Run)
	{
		//считывание с клавиатуры размеров сторон
		std::cout << "Enter sides of thew triangle: " << std::endl;
		std::cin >> A;
		std::cin >> B;
		std::cin >> C;

		if (isTriangle(A, B, C))//если треугольник
		{
			std::cout << "Perimeter triangle = " << Perimeter(A, B, C) << std::endl;
			std::cout << "Square triangle = " << Square(A, B, C) << std::endl;
		}
		else
		{
			std::cout << "Is not triangle!\n";
			Run = false;
		}
	}
}
