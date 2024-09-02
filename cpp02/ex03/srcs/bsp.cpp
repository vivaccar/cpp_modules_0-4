#include "../includes/Point.hpp"

float   get_area(Point a, Point b, Point c)
{
    Fixed Area =  (a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY()));
    Area = Area / 2;
    return std::abs(Area.toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed triangle_area(get_area(a, b, c));
    std::cout << "TRIANGLE AREA: " << triangle_area << std::endl;

    Fixed t1(get_area(point, a, b));
    std::cout << "T1 AREA: " << t1.toFloat() << std::endl;
    Fixed t2(get_area(point, a, c));
    std::cout << "T2 AREA: " << t2.toFloat() << std::endl;
    Fixed t3(get_area(point, b, c));
    std::cout << "T3 AREA: " << t3.toFloat() << std::endl;

    if (a == point || b == point || c == point)
    {
        std::cout << "The point is under one of the vertices" << std::endl;
        return false;
    }
    if (t1 == 0 || t2 == 0 || t3 == 0)
    {
        std::cout << "The point is under one of the lines of the triangle" << std::endl;
        return false;
    }
    if ((t1 + t2 + t3) == triangle_area)
    {
        std::cout << "The point is inside the triangle!" << std::endl;
        return true;
    }
    std::cout << "The point is outside the triangle!" << std::endl;
    return false;
}