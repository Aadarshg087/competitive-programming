#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T, typename V>

class Pair
{
    T x;
    V y;

public:
    void setX(T element)
    {
        this->x = element;
    }

    void setY(V element)
    {
        this->y = element;
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
    Pair<int, double> p1;
    p1.setX(10);
    p1.setY(20.123);

    cout << p1.getX() << endl;
    cout << p1.getY() << endl;

    return 0;
}