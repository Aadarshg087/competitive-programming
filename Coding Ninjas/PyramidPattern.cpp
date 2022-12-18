#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k;
        for (k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int l = k + 2; l <= i; l++)
        {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}