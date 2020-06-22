#include <iostream>
#include "FirstTask.h"

int main()
{
	int numberTusk;
	bool Run = true;
	while (Run)
	{
		std::cout << "Enter number tusk (1 - first task, 2 - exit): ";
		std::cin >> numberTusk;

		switch (numberTusk)
		{
		case 1:
			firstTask();
			break;
		case 2: 
			Run = false;
			break;
		default:
			break;
		}
	}
	
	return 0;
}