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
    ll n;
    cin >> n;
    vector<ll> v(n);
    int countOdd = 0;
    int countEven = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] & 1)
            countOdd++;
        else
            countEven++;
    }

    int mod = v[0] % v[1];
    if (v[0] & 1)
        countOdd--;
    else
        countEven--;
    if (v[1] & 1)
        countOdd--;
    else
        countEven--;
    for (int i = 2; i < n; i++)
    {
        if ((mod % v[i]) & 1)
        {
            countEven--;
        }
        else
            countOdd--;
    }

    if (countOdd < 0 || countEven < 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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