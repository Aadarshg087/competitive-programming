#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func(int &a)
{
    a++;
    cout << a << endl;
}

int main()
{

    int a = 10;
    func(a);
    cout << a << endl;

    return 0;
}