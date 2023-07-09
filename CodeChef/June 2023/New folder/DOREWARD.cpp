#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int donations;
        cin >> donations;
        if (donations <= 3)
        {
            cout << "BRONZE" << endl;
        }
        else if (donations > 3 && donations <= 6)
        {
            cout << "SILVER" << endl;
        }
        else if (donations > 6)
        {
            cout << "GOLD" << endl;
        }
    }

    return 0;
}