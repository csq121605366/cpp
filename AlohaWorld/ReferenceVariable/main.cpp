#include <iostream>

int main(){
	int x = 0;
	int y{ 10 };
	int& rx = x;
	rx = 8;
	char* s = "Hello";
	char* t = "World";
	char*& r = s;
	r = t;
	std::cout << s << std::endl;
	std::cout << r << std::endl;


	std::cin.get();
	return 0;
}