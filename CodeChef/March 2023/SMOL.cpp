#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int var1 = 0;
        cin >> n >> k;
        if (k == 0)
        {
            cout << var1 << endl;
        }
        else if (k > n)
        {
            cout << n << endl;
        }
        else
        {
            int sum = n % k;
            cout << sum << endl;
        }
    }

    return 0;
}