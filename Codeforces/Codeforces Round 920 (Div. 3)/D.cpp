#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr1(n);
    vector<ll> arr2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    // sort(arr1.begin(), arr1.end(), greater<ll>());
    // sort(arr2.begin(), arr2.end());

    int ans = 0;
    // int k = 0;
    // int j = m - 1;

    for (int i = 0; i < n; i++)
    {
        int maxDiff = 0;

        for (int l = 0; l < m; l++)
        {
            cout << " is called" << endl;
            if (arr2[l] == -1)
            {
                continue;
            }
            int diff = abs(arr1[i] - arr2[l]);
            if (diff > maxDiff)
            {
                arr2[l] = -1;
                maxDiff = diff;
            }
        }
        ans += maxDiff;
        // int diff1 = abs(arr1[i] - arr2[k]);
        // int diff2 = abs(arr1[i] - arr2[j]);
        // if (diff1 > diff2)
        // {
        //     ans += diff1;
        //     k++;
        // }
        // else
        // {
        //     ans += diff2;
        //     j--;
        // }
    }

    cout << ans << endl;

    // for (auto i : arr2)
    //     cout << i << " ";
    // cout << endl;
    // ll ans = 0;
    // int j = m - 1;
    // int k = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << arr1[i] << " " << arr2[i] << endl;
    //     // cout << arr1[i] << " " << arr2[j] << endl;
    //     int diff1 = abs(arr1[i] - arr2[k]);
    //     int diff2 = abs(arr1[i] - arr2[j]);
    //     if (diff2 > diff1)
    //     {
    //         ans += diff2;
    //         j--;
    //     }
    //     else
    //     {
    //         ans += diff1;
    //         k++;
    //     }
    // }

    // cout << ans << endl;
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