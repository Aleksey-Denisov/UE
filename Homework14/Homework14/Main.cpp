#include <iostream>
#include <string>

int main()
{
	//string variable
	std::string str = "Hello world!";
	//console output by task
	std::cout << "String: " << str << std::endl << "Length string: " << str.length() << std::endl
		<< "First char: " << str[0] << std::endl << "Last char: " << str[str.length() - 1] << std::endl;
	return 0;
}