#pragma once
#include <iostream>

using namespace std;

class Point
{
	double x;
	double y;

public:
	Point(double x, double y): x{x}, y{y}{}
	Point(): Point(0,0){}

	void display()const {
		cout << "x = " << x << " y = " << y << endl;
	}

	friend ostream& operator<< (ostream& out, Point& point) {
		out << "x = " << point.x << " y = " << point.y << endl;
		return out;
	}
	void read() {
		cin >> x >> y;
	}
	friend istream& operator>>(istream& in, Point& point) {
		in >> point.x >> point.y;
		return in;
	}
	friend bool operator==(const Point& point1, const Point& point2) {
		return point1.x == point2.x && point1.y == point2.y;
	}
	Point operator+(const Point& point2) {
		return Point(this->x + point2.x, this->y + point2.y);
	}
	friend static Point operator*(const Point& point, double value) {
		return Point(point.x * value, point.y + value);
	}
	static double distance(const Point& point1, const Point& point2) {
		return sqrt((point1.x - point2.x) * (point1.x - point2.x) +
			(point1.y - point2.y) * (point1.y - point2.y));
	}
	friend static double operator!(const Point& point) {
		return distance(point, Point());
	}
};

