#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

int maxPoints(int *arr, int *brr, int n, int k)
{
    k--;
    int i = 0;
    int ans = arr[0];
    while (i != k)
    {
        // if (arr[i + 1] == brr[i])
        // {
        //     int temp = max(arr[i+1]+brr[i], )
        // }
        // else
        // {
        // k--;
        ans += max(arr[i + 1], brr[i]);
        cout << max(arr[i + 1], brr[i]) << endl;
        cout << "ans: ";
        cout << ans << endl;
        i++;
    }
    return ans;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    int *brr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    cout << maxPoints(arr, brr, n, k) << endl;

    // if (k <= n)
    // {
    //     int sum = 0;
    //     for (int i = 0; i < k; i++)
    //     {
    //         sum += arr[i];
    //     }
    //     cout << sum << endl;
    //     return;
    // }
    // else if (k > n)
    // {
    //     int sum = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         sum += arr[i];
    //     }
    //     k = k - n;
    //     sort(brr, brr + n);
    //     sum += brr[0] * k;
    //     cout << sum << endl;
    //     return;
    // }
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