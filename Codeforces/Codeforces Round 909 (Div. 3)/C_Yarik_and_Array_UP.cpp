#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll sum = 0;
    ll maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        maxi = max(maxi, sum);

        if (abs(arr[i]) % 2 == abs(arr[i + 1]) % 2)
        {
            sum = 0;
        }

        if (sum < 0)
            sum = 0;
    }
    cout << maxi << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}