#include <iostream>

void swap(int* x, int*y){
	int t = 0;
	t = *x; 
	*x = *y; 
	*y = t;
	std::cout << "calling a=" << x << " b=" << y << std::endl;
}

int main(){
	int a = 1, b = 2;
	std::cout << "Before a=" << a << " b=" << b << std::endl;
	swap(&a, &b);
	std::cout << "After a=" << a << " b=" << b << std::endl;
	std::cin.get();
	return 0;
}