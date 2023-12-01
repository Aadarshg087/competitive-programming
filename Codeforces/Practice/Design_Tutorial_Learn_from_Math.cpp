#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

bool checkPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    int ans1 = n / 2;
    int ans2 = n - ans1;
    while (checkPrime(ans1) || checkPrime(ans2))
    {
        ans1++;
        ans2 = n - ans1;
    }
    cout << ans1 << " " << ans2 << endl;
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