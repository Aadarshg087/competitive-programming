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
        int res = 0;
        int sum = a + b;
        for (int i = 0; sum > 0; i++)
        {
            int rem = sum % 10;
            sum = sum / 10;
            switch (rem)
            {
            case 0:
            case 9:
            case 6:
                res = res + 6;
                break;
            case 1:
                res = res + 2;
                break;
            case 2:
            case 3:
            case 5:
                res = res + 5;
                break;
            case 4:
                res = res + 4;
                break;
            case 7:
                res = res + 3;
                break;
            case 8:
                res = res + 7;
                break;
            }
        }
        cout << res << endl;
    }

    return 0;
}