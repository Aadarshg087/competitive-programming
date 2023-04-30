#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int price;
        cin >> price;
        (price * 4 <= 1000) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}