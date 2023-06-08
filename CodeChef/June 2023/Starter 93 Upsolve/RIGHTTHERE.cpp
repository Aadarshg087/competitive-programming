#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n <= x)
            cout << "YES" << endl;
        else if (n > x)
            cout << "NO" << endl;
    }

    return 0;
}