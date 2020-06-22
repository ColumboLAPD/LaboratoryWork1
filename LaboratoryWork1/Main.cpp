#include <iostream>
#include "FirstTask.h"
#include "SecondTask.h"

int main()
{
	int numberTusk;
	bool Run = true;
	while (Run)
	{
		std::cout << "Enter number tusk\n 1 - first task\n 2 - second tusk\n 3 - exit: ";
		std::cin >> numberTusk;

		switch (numberTusk)
		{
		case 1:
			firstTask();
			break;
		case 2:
			std::cout << numericAdd() << std::endl;
		case 3: 
			Run = false;
			break;
		default:
			break;
		}
	}
	
	return 0;
}