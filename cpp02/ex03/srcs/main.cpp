#include "../includes/Point.hpp"

int main(void)
{
    Point p1(0, 0);
    Point p2(5, 0);
    Point p3(0, 5);
    Point p(0, 0);

    bsp(p1, p2, p3, p);
}