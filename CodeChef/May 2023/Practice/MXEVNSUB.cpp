#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int prev = 0;
        // for (int i = 1; i < n; i++)
        // {
        //     prev = prev + i;
        // }
        // if ((prev % 2 == 0 && n % 2 != 0) || (prev % 2 != 0 && n % 2 == 0))
        // {
        //     cout << n - 1 << endl;
        // }
        // else
        // {
        //     cout << n << endl;
        // }

        // Alternative Approach
        int temp = (n * (n + 1)) / 2;
        if (temp % 2 != 0)
        {
            cout << n - 1 << endl;
        }
        else
            cout << n << endl;
    }

    return 0;
}