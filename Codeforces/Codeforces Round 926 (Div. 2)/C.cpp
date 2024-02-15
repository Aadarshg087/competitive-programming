#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

const int N = 1e6 + 7;
vector<bool> isPrime(N, true);
void seiveAlgo()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
void solve()
{
    ll k, lossesNo, coins;
    cin >> k >> lossesNo >> coins;

    ll a1 = coins - lossesNo;
    if (a1 <= 0)
    {
        cout << "NO" << endl;
        return;
    }

    ll a2 = a1 * k;
    if (a2 > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

/*
    - Read the problem twice
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
    // seiveAlgo();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}