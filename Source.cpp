#include <iostream>
#include <string>

template<typename print_i>
void print(print_i i)
{
	std::cout << i << std::endl;
}

int main()
{
	print(1);
	print(2.345f);
	print("Hello World");

	return 0;
}
