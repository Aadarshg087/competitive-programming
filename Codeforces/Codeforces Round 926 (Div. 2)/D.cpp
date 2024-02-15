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
ll const M = 998244353;
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return (res % M);
}

unsigned ll factorial(unsigned ll n)
{
    ll res = 1, i;
    for (i = 2; i <= n; i++)
        res = (res * i * 1LL) % M;
    return res % M;
}

ll faulty(vector<ll> v, int i, vector<ll> temp)
{
    int n = v.size();
    if (i == n)
    {
        if (temp.size() > 2)
            return 1;
        else
            return 0;
    }

    if (temp.size() == 2)
    {
        ll t = n - 2;
        ll o = factorial(t);
        return o;
    }

    // Recursive relation
    ll ans2 = faulty(v, i + 1, temp);
    temp.push_back(v[i]);
    ll ans1 = faulty(v, i + 1, temp);

    ll mainAns = (ans1 + ans2) % M;
    // if (temp.size() > 2)
    //     mainAns++;
    return mainAns;
}

void solve()
{
    ll n;
    cin >> n;
    set<ll> st;
    vector<ll> freq(3 * 1e5 + 7, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        freq[u]++;
        freq[v]++;
        st.insert(u);
        st.insert(v);
    }

    ll size = st.size();

    ll totalSet = binpow(2, size);

    vector<ll> v;
    for (int i : st)
        v.push_back(i);

    vector<ll> temp;
    cout << faulty(v, 0, temp) << endl;
    cout << totalSet << endl;
    // cout << totalSet - faulty(v, 0, temp) << endl;
    // ll ans = (faulty(v, 0, temp)) >> 1;
    // cout << ans << endl;

    // cout << (size - faulty(v)) << endl;
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