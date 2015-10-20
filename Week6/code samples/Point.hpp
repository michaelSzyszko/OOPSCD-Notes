//
//  Point.hpp
//  classOverloading
//
//  Created by Eden Burton on 2015-10-15.
//  Copyright © 2015 Eden Burton. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

struct Point {
    int x,y;
    bool operator==(const Point&);
    Point& operator+(const Point&);
};
#endif /* Point_hpp */
