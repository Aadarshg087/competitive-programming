#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<bool> seiveAlgo(int n)
{
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

void solve()
{
    vector<bool> p = seiveAlgo(1e5 + 10);
    vector<int> primes;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i])
            primes.push_back(i);
    }

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int res = 0;
        for (int j = 0; j < m; j++)
        {
            int val = (*lower_bound(primes.begin(), primes.end(), arr[i][j]));
            res += val - arr[i][j];
        }
        ans = min(ans, res);
    }

    for (int i = 0; i < m; i++)
    {
        int res = 0;
        for (int j = 0; j < n; j++)
        {
            int val = (*lower_bound(primes.begin(), primes.end(), arr[j][i]));
            res += val - arr[j][i];
        }
        ans = min(ans, res);
    }

    cout << ans << endl;
}

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

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