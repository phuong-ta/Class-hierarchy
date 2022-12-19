#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <string>
#include <cmath>
#include <memory>
using namespace std;
//definition of class Point
class Point {
	public:
	    //constructor
	    Point(double xcoord = 0.0, double ycoord = 0.0);
	    Point(const Point &p);
	    // destructor
	    virtual ~Point() = default;
	    double getx() const;
		double gety()const;
	
	    virtual void input(const char* prompt);
	    virtual void output() const;
	    virtual double area() const;
	    void move(double deltax, double deltay);
	private:
	    double x;
	    double y;
};

Point::Point(double xcoord, double ycoord) {
	x = xcoord;
	y = ycoord;
}
Point::Point(const Point &p) { //copy constructor
	x = p.x;
	y = p.y;
}
void Point::input(const char *prompt) {
	cout << prompt<<endl;
	cout << "Enter x:";
	cin >> x;
	cout << "Enter y:";
	cin >> y;
}
void Point::output()const{
	cout<< "Coordinates: ";
	cout<<"(" <<getx() << "," <<gety() << ")";
}
double Point::getx(void)const {
	return x;
}
double Point::gety(void) const{
	return y;
}

void Point::move(double deltax, double deltay) {
	x+=deltax;
	y+=deltay;
}

double Point::area() const{}
