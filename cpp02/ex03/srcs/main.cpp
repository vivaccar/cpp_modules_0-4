#include "../includes/Point.hpp"

int main(void)
{
    {
        Point p1(0, 0);
        Point p2(1, 1);
        Point p3(-4, 5);
        Point p(14, 12);

        bsp(p1, p2, p3, p);
    }

    std::cout << std::endl;

    {
        Point p1(0, -1);
        Point p2(1.2, 3);
        Point p3(4, 5);
        Point p(1, 1);

        bsp(p1, p2, p3, p);
    }
}