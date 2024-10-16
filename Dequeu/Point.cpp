#include "Point.h"
#include <ostream>
#include <iostream>

#define SILENT_POINT

Point::Point()
{
    x = 0;
    y = 0;
#ifdef SILENT_POINT
    std::cout << "==> Point: Constructeur par défaut " << this << "\n";
#endif
}

Point::Point(int x, int y) :x(x), y(y)
{
#ifdef SILENT_POINT
    std::cout << "==> Point: Constructeur standard " << this << "\n";
#endif
}

Point::Point(const Point& source)
{
    x = source.x;
    y = source.y;
#ifdef SILENT_POINT
    std::cout << "==> Point: Constructeur par copie de " << &source << " vers " << this << "\n";
#endif
}

Point::~Point()
{
#ifdef SILENT_POINT
    std::cout << "==> Point: Destructeur " << this << "\n";
#endif
}

Point& Point::operator= (const Point& source)
{
    if (this != &source)
    {
        x = source.x;
        y = source.y;
    }
#ifdef SILENT_POINT
    std::cout << "==> Point: Operateur =  de " << this << " depuis " << &source << "\n";
#endif
    return *this;
}

std::ostream& operator <<(std::ostream& os, const Point& source)
{
    os << "(" << source.getX() << ", " << source.getY() << ")";
    return os;
}
