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

void divs(int x, unordered_map<int, int> &mp)
{

    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            mp[i]++;
            x /= i;
        }
    }
    if (x > 1)
        mp[x]++;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mini = *min_element(v.begin(), v.end());
    int maxi = *max_element(v.begin(), v.end());
    if (mini == maxi)
    {
        cout << "YES" << endl;
        return;
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int element = v[i];
        divs(element, mp);
    }

    for (auto i : mp)
    {
        if (i.second % n != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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