#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            maxi = max(arr[i] - 0, maxi);
        else
            maxi = max(arr[i] - arr[i - 1], maxi);
    }

    int temp = 2 * (x - arr[n - 1]);
    cout << max(maxi, temp) << endl;
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