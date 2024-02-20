#include <iostream>
#include "Helpers.h"

int main()
{
	//Variables
	double first, second;
	//User enter values
	std::cout << "Enter first value: ";
	std::cin >> first;
	std::cout << "Enter second value: ";
	std::cin >> second;
	//Dispatch to a function and display the result
	std::cout << "Result: " << sumAndPow(first, second) << std::endl;
	return 0;
}