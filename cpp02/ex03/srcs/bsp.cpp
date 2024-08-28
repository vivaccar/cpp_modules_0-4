#include "../includes/Point.hpp"

float   get_area(Point a, Point b, Point c)
{
    Fixed Area =  (a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY())) / Fixed(2);
    return Area.toFloat();
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed triangle_area(get_area(a, b, c));
    std::cout << triangle_area << std::endl;

    Fixed t1(get_area(point, a, b));
    Fixed t2(get_area(point, a, c));
    Fixed t3(get_area(point, b, c));

    if ((t1 + t2 + t3) == triangle_area)
    {
        std::cout << "Is inside the triangle!" << std::endl;
        return true;
    }
    std::cout << "Is outside the triangle!" << std::endl;
    return false;
}