#pragma once
#include <ostream>


class Point
{
private:
    int x;
    int y;

public:
    Point(int x, int y);
    Point();                      //  Constructeur par défaut
    Point(const Point& source);    // Constructeur par copie
    virtual ~Point();
    int getX() const { return x; };
    int getY() const { return y; };
    Point& operator = (const Point& source);
};

std::ostream& operator <<(std::ostream& os, const Point& source);
