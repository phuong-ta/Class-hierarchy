#include "Point.h"

class Square: public Point {
	public:
		Square(double cpx=0.0, double cpy=0.0, double w=1.0, double h=1.0);
		Square(const Point &cp, double w0, double h0); //constructor 2
		Square(const Square &s); //copy constructor
		virtual void input(const char *prompt) override;
		virtual void output() const override;
		double getHeight() const;
		double getWidth() const;
		double area() const;
	private:
		double width;
		double height;
};

Square::Square(double cpx, double cpy, double w, double h): Point(cpx, cpy), width(w), height(h){ }
Square::Square(const Point &cp, double w0, double h0): Point(cp), width(w0), height(h0){ }
Square::Square(const Square &s): Point(s), width(s.width), height(s.height){ }

void Square :: input(const char *prompt){
	cout << prompt;
	Point::input("\nEnter square point: ");
	cout << "Enter width ";
	cin >> width;
	cout << "Enter height ";
	cin >> height;
}
void Square::output() const{
	cout << "\nSquare's area: " <<area()<<" ";
	Point::output();
}
double Square::getWidth() const{
	return width;
}
double Square::getHeight() const{
	return height;
}
double Square::area(void) const {
	double area;
	area = width * height;
	return area;
}
