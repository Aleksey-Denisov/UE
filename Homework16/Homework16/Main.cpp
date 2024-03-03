#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
	//Array
	const int n = 5;
	int array[n][n];
	//Get current day
	time_t t;
	time(&t);
	int divRem = (localtime(&t)->tm_mday) % n;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		std::cout << "Element array in " << i << " row: ";
		for(int j = 0; j < n; j++)
		{
			//init array
			array[i][j] = i + j;
			//output console
			std::cout << array[i][j] << " ";
			//sum elements
			if (divRem == i)
				sum += array[i][j];
		}
		std::cout << std::endl;
		//output console if values not zero
		if (sum != 0)
			std::cout << "Sum of elements in array string: " << sum << std::endl;
	}
	return 0;
}