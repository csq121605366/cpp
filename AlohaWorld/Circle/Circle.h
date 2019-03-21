#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
	double radius;
public:
	Circle();
	Circle(double _radius);
	double getArea() const;
	double getRadius()const;
	Circle& setRadius(double radius);
};

#endif