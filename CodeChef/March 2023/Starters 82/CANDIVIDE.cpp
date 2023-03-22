#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int candies;
        cin >> candies;
        if (candies % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}