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
    int product = 1;
    int num_, nump;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        product *= arr[i];
    }

    int pos_num = 0;
    int neg_num = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << 0 << endl;
            return;
        }
        if (arr[i] > 0)
        {
            // cout << i << endl;
            nump = i;
            pos_num++;
        }
        else
        {
            num_ = i;
            neg_num++;
        }
    }

    if ((neg_num & 1) == 0 && neg_num != 0)
    {
        cout << 1 << endl;
        cout << num_ + 1 << " " << 0 << endl;
        return;
    }
    else if ((neg_num & 1) == 1 && neg_num != 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << nump + 1 << " " << 0 << endl;
    return;
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