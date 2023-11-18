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
    int maxW = INT_MIN;
    int minW = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    sort(arr, arr + n);

    int i = 0;
    int j = n - 1;
    int lSide = 0;
    int rSide = 0;
    int diff = abs(arr[i] - arr[j]);
    while (i < j)
    {
        lSide += arr[i++];
        rSide += arr[j--];
        if ((n % i) == 0)
        {
            cout << "Yes: " << i + 1 << " " << arr[i] << " " << arr[j] << endl;
            if (abs(lSide - rSide) > diff)
                diff = abs(lSide - rSide);
        }
    }

    cout << diff << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] < minW)
    //         minW = arr[i];
    //     if (arr[i] > maxW)
    //         maxW = arr[i];
    // }

    // cout << minW << " " << maxW << endl;

    // cout << abs(minW - maxW) << endl;
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