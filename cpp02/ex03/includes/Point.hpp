#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        const Fixed x;
        const Fixed y;

    public:
        
        // constructors && destructor
        Point();
        Point(const float x, const float y);
        Point(const Point& other);
        ~Point();

        // = operator overload
        Point& operator=(const Point& other);
        
        Fixed getX() const;
        Fixed getY() const;
        bool operator==(const Point& other) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif