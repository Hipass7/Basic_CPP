#include <iostream>
#define _POINT
#ifndef _POINT
#include "point1.hpp"
#include "point2.hpp"
#endif _POINT

class Point {
public:
    double x;
    double y;
    Point() : x(0), y(0) {}
    Point(double x, double y);
    double get_x() const;
    double get_y() const;
    Point operator+ (const Point& p2) const;
};
Point::Point(double x, double y) : x(x), y(y) {}
double Point::get_x() const{
    return x;
}
double Point::get_y() const{
    return y;
}
Point Point::operator+ (const Point& p2) const {
    Point result;
    result.x = x + p2.x;
    result.y = y + p2.y;
    return result;
}

std::ostream& operator << (std::ostream& os, const Point& p) {
    os << p.x << ", " << p.y << std::endl;
    return os;
}

//int main(){
//    const Point ptr(5, 3);
//    std::cout << ptr.get_x() << ptr.get_y() << std::endl;
//    std::cout << ptr+ptr;
//}
