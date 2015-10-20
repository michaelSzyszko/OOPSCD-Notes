//
//  Point.cpp
//  classOverloading
//
//  Created by Eden Burton on 2015-10-15.
//  Copyright © 2015 Eden Burton. All rights reserved.
//
#include <iostream>
#include "Point.hpp"
using namespace std;

bool Point::operator==(const Point& rSide) {
    return ((x==rSide.x) && (y==rSide.y));
}

Point& Point::operator+(const Point& rSide) {
    x += rSide.x;
    y += rSide.y;
    return *this;
}

int main() {
    Point p1={2,3};
    Point p2={4,5};
    Point p3 = p1 + p2;
    cout << "Equal: " << (p1 == p2) << endl;
    cout << "x: " << p3.x << "y: " << p3.y << endl;
}