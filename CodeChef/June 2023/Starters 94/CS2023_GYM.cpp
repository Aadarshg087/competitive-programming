#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int nominies, voters;
        cin >> nominies >> voters;
        cout << (voters / 2) + 1 << endl;
    }

    return 0;
}