#include <iostream>
#include <bits/stdc++.h>
#include "PriorityQueue.h"
using namespace std;

int main()
{
    PriorityQueue p;
    p.insert(10);
    p.insert(20);
    p.insert(30);
    p.insert(40);
    p.insert(50);
    p.insert(9);

    cout << p.isEmpty() << endl;
    cout << p.getSize() << endl;
    cout << p.getMin() << endl;

    cout << p.removeMin() << endl;
    cout << p.removeMin() << endl;
    cout << p.removeMin() << endl;
    cout << p.removeMin() << endl;
    cout << p.removeMin() << endl;

    return 0;
}