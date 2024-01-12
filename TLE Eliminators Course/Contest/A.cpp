#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n, z;
    cin >> n >> z;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n);
    int ans = 0;
    for (int i = n; i >= 1; i--)
    {
        int temp = (arr[i] | z);
        // cout << temp << " " << arr[i] << endl;
        ans = max(ans, temp);
        // z = z & arr[i];
    }
    cout << ans << endl;
    //     cout << (27 | 7) << endl;
    //     cout << (29 | 7) << endl;
    //     cout << (30 | 7) << endl;
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