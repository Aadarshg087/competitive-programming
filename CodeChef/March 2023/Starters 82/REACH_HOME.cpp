#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int can_travel = x * 5;
        if (can_travel < y)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}