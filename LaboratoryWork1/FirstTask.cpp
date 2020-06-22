#include <iostream>
#include <cmath>
#include "FirstTask.h"

double Square(int A, int B, int C)//���������� ������� ������������ �� ���� ��������
{
	double p = (A + B + C) / 2.0; //������������
	double s = sqrt(p * (p - A) * (p - B) * (p - C));//�������
	return s;
}

int Perimeter(int A, int B, int C)
{
	return A + B + C;
}

bool isTriangle(int A, int B, int C)//�������� ������������� ������������
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
		//���������� � ���������� �������� ������
		std::cout << "Enter sides of thew triangle: " << std::endl;
		std::cin >> A;
		std::cin >> B;
		std::cin >> C;

		if (isTriangle(A, B, C))//���� �����������
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
