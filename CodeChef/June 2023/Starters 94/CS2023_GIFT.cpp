#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money_needed, have_money, fund_money;
    cin >> have_money >> money_needed >> fund_money;
    if (have_money + fund_money >= money_needed)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}