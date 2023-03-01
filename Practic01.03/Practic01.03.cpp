#include <iostream>
#include "Point.h"
#include "String.h"

using namespace std;


//int main()
//{
//    setlocale(LC_ALL, "");
//    Point point1(1, 1);
//    Point point2;
//    Point point3{ 1, 1 };
//    if (4 << 5) {}
//    if (point1 == point3) {
//        cout << "Точки равны\n";
//    }
//    cout << "point1 = ";
//    //point1.display();
//    cout << point1;
//    cout << endl;
//
//    cout << "point2 -> ";
//    //point2.read();
//    cin >> point2;
//    cout << point2;
//    cout << endl;
//
//    //cout << "point1 + point2 = ";
//    Point p3 = point2 + point1;
//    cout << p3;
//
//    cout << "Distance point1 and point2 = " 
//        << Point::distance(point1, point2);
//
//
//   
//    !=
//    >=
//        .
//        ::
//        .*
//
//
//   
//}

int main() {
	String str1;
	String str2;
	cin >> str1 >> str2;

	char* str3 = str1 * str2;
	cout << str3;
}

