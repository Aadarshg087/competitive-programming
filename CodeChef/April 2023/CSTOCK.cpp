#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float price, range1, range2, percent;
        cin >> price >> range1 >> range2 >> percent;
        double currentPrice = (percent / 100) * price;
        if (percent >= 0)
        {
            price = price + currentPrice;
        }
        else
        {
            price = price - currentPrice;
        }

        if (price >= range1 && price <= range2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}