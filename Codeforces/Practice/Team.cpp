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
    vector<int> v(3);
    int count1 = 0;
    int mainAns = 0;
    for (int i = 0; i < n; i++)
    {
        count1 = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                count1++;
            }
        }
        if (count1 >= 2)
        {
            // cout << "count1: " << count1 << endl;
            mainAns++;
        }
    }

    cout << mainAns << endl;
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