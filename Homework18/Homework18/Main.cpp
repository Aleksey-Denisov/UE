#include <iostream>
#include "Stack.h"
#include <string>

int main()
{
	Stack<int> st;
	st.push(1);
	st.push(2);
	st.push(5);
	st.push(4);
	st.push(3);
	std::cout << "Last element stack: " << st.top() << " Size stack: " << st.getSize() << std::endl;
	while (!st.empty())
	{
		std::cout << "Last element stack: " << st.pop() << " Size stack: " << st.getSize() << std::endl;
	}


	Stack<std::string> str;
	str.push("test");
	str.push("Sam");
	str.push("Tom");
	str.push("Chris");
	str.push("Klar");
	std::cout << "Last element stack: " << str.top() << " Size stack: " << str.getSize() << std::endl;
	while (!str.empty())
	{
		std::cout << "Last element stack: " << str.pop() << " Size stack: " << str.getSize() << std::endl;
	}
	return 0;
}
