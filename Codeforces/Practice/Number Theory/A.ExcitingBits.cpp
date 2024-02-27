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
    ll a, b;
    cin >> a >> b;
    if (abs(a - b) == 1)
    {
        cout << 1 << " " << 0 << endl;
        return;
    }

    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }

    if ((a == 0 || b == 0))
    {
        cout << max(a, b) << " " << 0 << endl;
        return;
    }

    ll diff = abs(a - b);
    ll f1 = a % diff;
    ll f2 = diff - f1;
    cout << diff << " " << min(f1, f2) << endl;
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