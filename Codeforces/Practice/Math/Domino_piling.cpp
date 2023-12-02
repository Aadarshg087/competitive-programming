#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int m, n;
    cin >> m >> n;
    int temp = m / 2;
    int temp1;
    if (m % 2 == 0)
    {
        temp = temp * n;
    }
    else
    {
        temp *= n;

        temp1 = n / 2;
        temp += temp1;
    }
    cout << temp << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}