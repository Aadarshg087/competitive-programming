#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void output(vector<int> &v)
{
    int temp = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        cout << bitset<31>(v[i]) << endl;
        temp &= v[i];
    }
    cout << temp;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> count(31, 0);
    for (int i = 30; i >= 0; i--)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if ((v[j] & (1 << i)) > 0)
            {
                temp++;
            }
        }
        count[i] = n - temp;
    }
    int ans = 0;
    for (int i = 30; i >= 0; i--)
    {
        if (count[i] <= k)
        {
            k -= count[i];
            ans |= (1 << i);
        }
    }
    cout << ans << endl;

    // -------- My approach (Brute Force) ---------------------------
    /*
        if (k == 0)
        {
            output(v);
            return;
        }

        // if k=0, return as it is
        // if k=n, make the last bit as one to get the maximum output
        // if k<n, make the farthest bit as one among the numbers to get max output
        // if k>n, make teh last bit as one and fill the zeroes as one where needed
        if (k == n)
        {
            for (int i = 0; i < n; i++)
            {
                int temp = v[i];
                v[i] = temp | (1 << 30);
            }
            output(v);
            // return;
        }

        if (k > n)
        {
            for (int i = 0; i < n; i++)
            {
                v[i] = v[i] | (1 << 30);
            }
            k -= n;
        }

        if (k < n)
        {
        }
    */
}
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