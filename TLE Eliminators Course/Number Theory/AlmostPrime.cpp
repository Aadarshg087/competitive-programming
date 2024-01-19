#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

bool AlmostPrime(int n)
{
    int t = n / 2;
    vector<int> v(n + 1, 0);
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            v[i]++;
            n /= i;
        }
    }
    if (n > 1)
        v[n]++;

    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
            sum++;
    }
    return sum == 2;
}

void solve()
{
    int n;
    cin >> n;
    vector<bool> primes(n + 1, true);
    int ans = 0;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 2; i <= n; i++)
    {
        if (AlmostPrime(i))
        {
            ans++;
        }
    }
    cout << ans << endl;
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