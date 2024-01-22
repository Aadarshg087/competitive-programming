#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;
    ll minLCM = INT_MAX;
    pair<int, int> p;
    if (n == 2)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }
    else if (n == 3)
    {
        cout << 1 << " " << 2 << endl;
        return;
    }
    else if (n == 4)
    {
        cout << 2 << " " << 2 << endl;
        return;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int a = i;
            int b = n - a;
            // cout << "n:" << a << " " << b << endl;
            ll LCM = (a * b) / gcd(a, b);
            if (LCM < minLCM)
            {
                minLCM = LCM;
                p.first = a;
                p.second = b;
            }
        }
    }
    cout << p.first << " " << p.second << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}