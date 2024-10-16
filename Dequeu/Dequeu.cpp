#include <iostream>
#include <deque>
#include "Point.h"

using namespace std;

int main()
{
    deque<Point> dp1;

    dp1.push_front(Point(3, 4));

    dp1.emplace_back(5, 6);
    dp1.emplace_front(7, 8);
    cout << "dp1: ";
    for (const auto& point : dp1)
        cout << point << "; ";
    cout << endl;

    deque<Point> dp2(2, Point(0, 0));

    dp2.push_back(Point(9, 10));
    dp2.push_front(Point(11, 12));
    dp2.emplace_back(13, 14);

    cout << "dp2 avant suppressions: ";
    for (const auto& point : dp2)
        cout << point << "; ";
    cout << endl;


    dp2.pop_front();


    dp2.erase(dp2.begin());

    cout << "dp2 après suppressions: ";
    for (const auto& point : dp2)
        cout << point << "; ";
    cout << endl;

    dp2.push_back(Point(15, 16));


    cout << "dp2 après ajout de 1 Point: ";
    for (const auto& point : dp2)
        cout << point << "; ";
    cout << endl;

    dp2.resize(10, Point(0, 0));


    cout << "dp2 après redimensionnement à 10: ";
    for (const auto& point : dp2)
        cout << point << "; ";
    cout << endl;

    deque<Point> dp3(dp1);

    cout << "dp3 (copie de dp1): ";
    for (const auto& point : dp3)
        cout << point << "; ";
    cout << endl;

    dp2.swap(dp3);


    cout << "dp2 après échange: ";
    for (const auto& point : dp2)
        cout << point << "; ";
    cout << endl;

    cout << "dp3 après échange: ";
    for (const auto& point : dp3)
        cout << point << "; ";
    cout << endl;

    return 0;
}
