#include <iostream>

#include "Stack.h"

int main(void)
{
	Stack<int> s;
	for (size_t i = 0; i < 20; i++)
	{
		s.push(i);
	}

	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}

	return 0;
}
