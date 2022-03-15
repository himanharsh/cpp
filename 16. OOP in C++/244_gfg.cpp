#include<iostream>
using namespace std;

class Point
{
    int x, y;
    public:
        Point(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        Point &setX(int x) // return type is same as class
        {// returns object created in the class
            this ->x = x;
            return *this;
        }
        Point &setY(int y)
        {
            this ->y = y;
            return *this;
        }
};

int main()
{
    Point p1(10, 10);
    (p1.setX(5)).setY(5);
    return 0;
}