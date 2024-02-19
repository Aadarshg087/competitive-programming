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
    vector<char> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (v[0] == '*')
    {
        cout << 0 << endl;
        return;
    }

    int i = 0;
    int count = 0;
    if (v[0] == '@')
        count++;
    while (i < n - 1)
    {
        if (v[i + 1] == '@')
        {
            // cout << i << endl;
            count++;
            i++;
        }
        else if (v[i + 1] == '.')
            i++;
        else if (v[i + 1] == '*')
        {
            if (v[i + 2] == '*')
            {
                cout << count << endl;
                return;
            }
            else
            {
                if (v[i + 2] == '@')
                    count++;
                i += 2;
            }
        }
    }
    cout << count << endl;
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