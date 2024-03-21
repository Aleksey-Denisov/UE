#include <iostream>
#include "Stack.h"

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
	return 0;
}
