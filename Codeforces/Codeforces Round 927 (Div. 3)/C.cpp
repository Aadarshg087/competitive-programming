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
    ll n, m;
    cin >> n >> m;
    vector<int> v(n);
    ll p = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        p *= v[i];
    }
    string s;
    cin >> s;
    vector<ll> ans;
    int an = p % m;
    ans.push_back(an);
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            int a = p / v[left];
            p /= v[left];
            // cout << a << endl;
            int a1 = a % m;
            // cout << a << " " << m << " " << a1 << endl;
            ans.push_back(a1);
            // cout << ans.back() << endl;
            left++;
        }
        else
        {
            int a = p / v[right];
            p /= v[right];
            int a1 = a % m;
            // cout << a << " " << m << " " << a1 << endl;
            ans.push_back(a1);
            // cout << ans.back() << endl;
            right--;
        }
    }
    ans.pop_back();

    for (int i : ans)
        cout << i << " ";
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