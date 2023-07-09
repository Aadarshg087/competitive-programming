#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T, typename V>

class Pair
{
    T x;
    V y;

public:
    void setX(T x)
    {
        this->x = x;
    }

    void setY(V y)
    {
        this->y = y;
    }

    T getX()
    {
        return x;
    }
    V getY()
    {
        return y;
    }
};

int main()
{

    Pair<Pair<int, double>, char> p1;
    Pair<int, double> p2;
    p2.setX(10);
    p2.setY(10.123);

    p1.setX(p2);
    p1.setY('w');

    cout << p1.getX().getX() << " " << p1.getX().getY() << " " << p1.getY() << endl;

    return 0;
}