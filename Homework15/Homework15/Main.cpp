#include <iostream>
#include <string>

//function prints numbers
void printNumbers(const int& flag, const int& n)
{
	flag == 0 ? std::cout << "Print even numbers: " : std::cout << "Print odd numbers: ";
	for (int idElement = 0; idElement <= n; idElement++)
	{
		if (idElement % 2 == flag)
			std::cout << std::to_string(idElement) << " ";
	}
	std::cout << std::endl;
}

int main()
{
	//task1
	const int n = 10;
	printNumbers(0, n);
	//task2
	printNumbers(1, 11);
	return 0;
}