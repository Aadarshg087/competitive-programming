#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 0;
    int p = n;

    for (int i = 1; i <= n; i++)
    {
        int u;
        for (u = 1; u <= p; u++)
        {
            cout << u;
        }
        if (i >= 2)
        {
            for (int k = 1; k <= l; k++)
            {
                cout << "*";
            }
        }
        for (int m = u - 1; m >= 1; m--)
        {
            cout << m;
        }
        cout << endl;
        l = l + 2;
        p = p - 1;
    }

    return 0;
}