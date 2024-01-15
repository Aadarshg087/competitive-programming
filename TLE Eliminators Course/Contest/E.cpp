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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp = arr[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (temp == 0)
        {
            count++;
            temp = arr[i];
            // cout << temp << endl;
        }
        temp &= arr[i];
        // cout << temp << endl;
    }
    if (temp == 0)
        count++;

    if (count == 0)
    {
        cout << 1 << endl;
        return;
    }

    cout << count << endl;
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