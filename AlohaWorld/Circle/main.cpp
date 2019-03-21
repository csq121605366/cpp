#include <iostream>
#include "circle.h"


void print(Circle c){
	std::cout << c.getArea() << std::endl;
}

void printR(Circle& c){
	std::cout << c.getArea() << std::endl;
}
void print(Circle* c){
	std::cout << c->getArea() << std::endl;
}

int main(){
	//Circle c1;
	//Circle c2{ 2.0 };
	//std::cout << c1.getArea() << std::endl;
	//std::cout << c2.getArea() << std::endl;

	/*Circle ca[]{1.0, 2.0, 3.0};
	Circle c1 = ca[0];
	Circle* c2 = ca + 1;
	printR(c1);
	print(c2);
	print(ca + 2);*/
	Circle c{ 1.0 };
	std::cout << c.setRadius(2.0).setRadius(3.0).getArea() << std::endl;



	std::cin.get();
	return 0;

}




