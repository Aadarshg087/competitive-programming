#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int term1 = abs(a - c);
        int term2 = abs(b - d);
        int res = term1 + term2;
        if (res > k)
            cout << "NO" << endl;
        else if ((k - res) % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}