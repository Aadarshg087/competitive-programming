#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int minEle = INT_MAX;
    int minIndex = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            minEle = arr[i];
        else
        {
            if (arr[i] <= minEle)
            {
                minEle = arr[i];
                minIndex = i;
            }
        }
    }

    int j = minIndex;
    while (j != 0 && arr[j] == arr[j - 1])
    {
        minIndex--;
        j--;
    }

    for (int i = minIndex; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }

    if (arr[0] < arr[n - 1] && minIndex != 0)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < minIndex - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    if (n == (n - minIndex))
    {
        cout << 0 << endl;
        return;
    }

    cout << n - minIndex << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}