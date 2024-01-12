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
    int arr[n];
    int xori = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // if (arr[i] == 4)
        //     continue;
        xori ^= arr[i];
    }
    // cout << xori << endl;
    for (int i = 0; i < n; i++)
    {
        if ((xori ^ arr[i]) == arr[i])
        {
            cout << arr[i] << endl;
            return;
        }
    }
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