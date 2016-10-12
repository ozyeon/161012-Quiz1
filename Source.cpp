#include <iostream>
#include <string>

template<class print_i>
void print(const print_i& i)
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
