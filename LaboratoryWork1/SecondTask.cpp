#include <iostream>
#include "SecondTask.h"

int numericAdd()
{
	std::cout << "Enter number: ";
	int number;
	std::cin >> number;
	int add(1);
	if (number > 999 && number < 10000)
	{
		while (number > 0)
		{
			add *= number % 10;
			number /= 10;
		}
	}
	return add;
}
