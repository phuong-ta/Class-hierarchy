#include "Point.h"
#include "Circle.h"
#include "Square.h"
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

bool sort_by_area(shared_ptr<Point> a, shared_ptr<Point> b) {
	return a->area()< b->area();
}
void displayData(vector<shared_ptr<Point>> point){
	for (const auto& s : point){
		s->output();
	}
}
void insertData(vector<shared_ptr<Point>> point){
	for (const auto& s : point){
		s->input("Enter value");
	}
}
int main(){
	/*
	vector<shared_ptr<Point>> point{
		make_shared<Point>(1.0, 1.0),
		make_shared<Circle>(2.0, 2.0, 2.0),
		make_shared<Square>(5.0, 5.0, 2.0, 2.0)
	};
	vector<shared_ptr<Point>> point1(3);
	point1[2] = make_shared<Point>();
	point1[1] = make_shared<Circle>();
	point1[0] = make_shared<Square>();
	insertData(point1);
	point.insert(std::end(point), std::begin(point1), std::end(point1));
//	point.insert(point.end(), point1.begin(), point1.end());
	displayData(point);
	sort(point.begin(), point.end(), sort_by_area);
	cout<<"\nsorted:"<<endl;
	displayData(point);
	*/
	/*
	vector<shared_ptr<Point>> point{
		make_shared<Point>(1.0, 1.0),
		make_shared<Circle>(2.0, 2.0, 2.0),
		make_shared<Square>(5.0, 5.0, 2.0, 2.0)
	};
	displayData(point);
	sort(point.begin(), point.end(), sort_by_area);
	cout<<"\nsorted:"<<endl;
	displayData(point);
	*/
	/*
	vector<shared_ptr<Point>> point(6);
	point[0] = make_shared<Point>();
	point[1] = make_shared<Circle>();
	point[2] = make_shared<Square>();
	
	
	insertData(point);
	displayData(point);
	sort(point.begin(), point.end(), sort_by_area);
	cout<<"\nsorted:"<<endl;
	displayData(point);
	*/
	
	vector<shared_ptr<Point>> point(5);
	for(int i=0; i<point.size();i++){
		int random = (rand() % 3) + 1;
		if(random ==1){
			point[i] = make_shared<Point>();
		}else if(random ==2){
			p4oint[i] = make_shared<Circle>();
		}else if(random ==3){
			point[i] = make_shared<Square>();
		}else{
			break;
			return 0;
		}
	}

	insertData(point);
	displayData(point);
	sort(point.begin(), point.end(), sort_by_area);
	cout<<"\nsorted:"<<endl;
	displayData(point);
	
	return 0;
}