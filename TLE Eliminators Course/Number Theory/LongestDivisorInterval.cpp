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
    ll n;
    cin >> n;
    if (n & 1)
    {
        cout << 1 << endl;
        return;
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
        else
            break;
    }
    cout << count << endl;
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
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}