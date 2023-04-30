#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        float diff = (w2 - w1) / m;
        if (diff >= x1 && diff <= x2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}