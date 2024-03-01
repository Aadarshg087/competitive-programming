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
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> a[i];
    for (int i = 1; i < n + 1; i++)
        cin >> b[i];
    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        v[i] = make_pair(a[i], b[i]);
    }

    sort(v.begin(), v.end());
    for (int i = 1; i < n + 1; i++)
        cout << v[i].first << " ";
    cout << endl;
    for (int i = 1; i < n + 1; i++)
        cout << v[i].second << " ";
    cout << endl;
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