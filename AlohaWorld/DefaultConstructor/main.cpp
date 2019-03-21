#include <iostream>

using namespace std;

class Circle{
private:
	double radius;
public:
	Circle(double r){
		radius = r;
	}
	double getArea(){
		return 3.14*radius*radius;
	}
};
class Square{
private:
	double side;
public:
	double getArea(){
		return side*side;
	}
};

class Combo{
public:
	Circle c;
	Square s;

};

int main(){
	Combo combo{1};

	cout << combo.c.getArea() << endl;

	return 0;
}