#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x2 = x;
    sort(arr, arr + n);
    reverse(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     if (x != 0)
    //     {
    //         sum += -arr[i];
    //         x--;
    //     }
    //     else
    //     {
    //         sum += arr[i];
    //     }
    // }
    // int sum1 = 0;
    // for (int i = k; i < n; i++)
    // {
    //     if (x2 != 0)
    //     {
    //         sum1 += -arr[i];
    //         x2--;
    //     }
    //     else
    //     {
    //         sum1 += arr[i];
    //     }
    // }

    int sum = 0;
    int sumN = 0;
    for (int i = 0; i < n; i++)
    {
        sumN += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    // sum = sum - sumN;
    int maxAns = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        }

    cout << max(sum1, sum) << endl;
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