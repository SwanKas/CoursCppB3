#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

int main()
{
    vector<Point> vp1;

    vp1.push_back(Point(1, 2));
    vp1.push_back(Point(3, 4));

    vp1.emplace_back(5, 6);

    cout << "vp1: ";
    for (const auto& point : vp1)
    cout << point << "; ";
    cout << endl << endl;

    vector<Point> vp2(2, Point(0, 0));

    vp2.push_back(Point(7, 8));
    vp2.push_back(Point(9, 10));
    vp2.emplace_back(11, 12);

    cout << "vp2 avant suppressions: ";
    for (const auto& point : vp2)
        cout << point << "; ";
    cout << endl << endl;

    vp2.erase(vp2.begin());
    vp2.erase(vp2.begin());

    cout << "vp2 apres suppressions: ";
    for (const auto& point : vp2)
        cout << point << "; ";
    cout << endl << endl;

    vp2.reserve(8);
    cout << "Capacite de vp2 apres reserve de 8: " << vp2.capacity() << endl;

    vp2.push_back(Point(13, 14));

    cout << "vp2 apres ajout de 1 Point: ";
    for (const auto& point : vp2)
        cout << point << "; ";
    cout << endl << endl;

    vp2.resize(10, Point(0, 0));

    cout << "vp2 apres redimensionnement a 10: ";
    for (const auto& point : vp2)
        cout << point << "; ";
    cout << endl << endl;

    vector<Point> vp3(vp1);

    cout << "vp1: ";
    for (const auto& point : vp1)
        cout << point << "; ";
    cout << endl;

    cout << "vp3 (copie de vp1): ";
    for (const auto& point : vp3)
        cout << point << "; ";
    cout << endl ;

    cout << "vp2: ";
    for (const auto& point : vp2)
        cout << point << "; ";
    cout << endl << endl;

    vp2.swap(vp3);

    cout << "vp2 apres echange: ";
    for (const auto& point : vp2)
        cout << point << "; ";
    cout << endl << endl;

    cout << "vp3 apres echange: ";
    for (const auto& point : vp3)
        cout << point << "; ";
    cout << endl << endl;

    return 0;
}
