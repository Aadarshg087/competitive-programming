#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int min1 = min(a, b);
        int max1 = max(a, b);
        int temp = min1;
        int count = 0;
        while (temp != max1)
        {
            if (max1 % temp != 0)
            {
                temp = (temp - 1) / 2;
                count++;
                cout << temp << endl;
                cout << count << endl;
            }
            else if (temp % 2 == 0 || temp == 1)
            {
                temp *= 2;
                count++;
                cout << count << endl;
            }
        }
        cout << count << endl;
    }

    return 0;
}