#include "Point.h"

class Circle: public Point {
	public:
		Circle(double cpx=0.0, double cpy=0.0, double r=1.0);
		Circle(const Point &cp, double r); //constructor 2
		Circle(const Circle &c); //copy constructor
		virtual void input(const char *prompt) override;
		virtual void output() const override;
		double getRadius() const;
		double area() const;
	private:
		double radius;
};

Circle::Circle (double cpx, double cpy, double r0 ): Point(cpx, cpy), radius(r0) { }
Circle::Circle(const Point &cp, double r0): Point(cp), radius(r0) { }
Circle::Circle(const Circle &c): Point (c), radius(c.radius) { }
void Circle :: input(const char *prompt){
	cout << prompt;
	Point::input("\nEnter center point: ");
	cout << "Enter radius ";
	cin >> radius;
}
void Circle::output() const{
	cout << "\nCircle's area: " <<area()<<" ";
	Point::output();
}

double Circle::getRadius() const{
	return radius;
}
double Circle::area(void) const {
	double area;
	area = M_PI* radius * radius;
	return area;
}
