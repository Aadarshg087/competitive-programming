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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }


    int i = 1;
    int j = v.size() - 1;
    int t = v[1];
    while (i < j)
    {
        if ((t == v[j]))
            j--;
        if (v[i] == t)
            i++;
        if (v[i] != t && v[j] != t)
            break;
    }

    int ans1 = j - i + 1;
    int count = 1;
    for (int i = 2; i <= n; i++)
    {
        if (v[i - 1] == v[i])
        {
            count++;
        }
        else
            break;
    }

    int ans2 = n - count;
    int count2 = 1;
    for (int i = n; i >= 1; i--)
    {
        if (v[i - 1] == v[i])
        {
            count2++;
        }
        else
            break;
    }
    int ans3 = n - count2;

    int ans = min(ans1, min(ans2, ans3));
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