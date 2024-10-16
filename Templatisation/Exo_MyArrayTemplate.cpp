#include <iostream>
#include "MyArray.h"
using namespace std;


struct Point
{
	int x, y;
};

std::ostream& operator <<(std::ostream& out, Point& p)
{
	out << "{" << p.x << ", " << p.y << "}" << endl;
	return out;
}

int main()
{
	MyArray<int> tab1(5);
    tab1.Fill(66);
    for (int i = 0; i < tab1.getSize(); i++)
    {
        cout << tab1[i] << "; ";
    }
    cout << endl << endl;

}
