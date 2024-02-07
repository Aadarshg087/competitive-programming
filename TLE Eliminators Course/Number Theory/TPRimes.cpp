#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"
const int n = 1e6 + 7;
bool seive[n];

void calc()
{
    seive[0] = seive[1] = true;
    for (int i = 2; i <= n; i++)
    {
        if (seive[i] == true)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                seive[j] = false;
            }
        }
    }
}

void solve()
{
    ll n1;
    cin >> n1;
    if (n1 == 1 || n1 == 2)
    {
        cout << "NO" << endl;
        return;
    }
    ll num = sqrt(n1);
    if (num * num == n1)
    {
        if (seive[num])
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
    memset(seive, 1, sizeof(seive));
    calc();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}