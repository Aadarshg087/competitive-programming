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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> visited(n, 0);
    vector<int> ans;
    int mask = 0;
    int index = 0;
    for (int it = 0; it <= 30; it++)
    {
        int maxmask = mask;
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && ((v[i] | mask) > maxmask))
            {
                maxmask = (v[i] | mask);
                index = i;
            }
        }

        if (index == -1)
            break;
        visited[index] = true;
        ans.push_back(v[index]);
        mask |= maxmask;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            ans.push_back(v[i]);
        }
    }

    for (int i : ans)
        cout << i << " ";
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