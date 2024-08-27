#include "../includes/Point.hpp"

Point::Point() {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point::~Point() {}

Point& Point::operator=(const Point& other) {
    
    // to develop
    (void) other;
    return (*this);
}

Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY() const {
    return this->y;
}