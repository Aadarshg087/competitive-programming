#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int raw_budget;
        cin >> raw_budget;
        int budget = raw_budget * 1000;
        int icm = budget / 2;
        int remaining = budget - icm;
        cout << remaining / 5 << endl;
    }

    return 0;
}