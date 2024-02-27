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
    unordered_set<int> st;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v[i] = temp;
        st.insert(temp);
        sum += v[i];
    }

    if (sum % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    if ((sum + 1) % 3 == 0)
    {
        cout << 1 << endl;
        return;
    }
    int f1 = sum % 3;
    int f2 = 3 - f1;
    // cout << sum << endl;
    int temp1 = sum - f1;
    int temp2 = sum + f2;
    for (int i = 0; i < n; i++)
    {
        // if (((sum - v[i]) + 1) % 3 == 0)
        // {
        //     cout << 1 << endl;
        //     return;
        // }
        if (((sum - v[i])) % 3 == 0 || (sum - v[i]) == 0)
        {
            cout << 1 << endl;
            return;
        }
    }

    cout << 2 << endl;
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