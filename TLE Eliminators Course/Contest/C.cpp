#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

int solve2(int total, int divide, int sub)
{
    if (total <= 0)
        return 0;
    int ans1 = INT_MAX;
    int ans2 = INT_MAX;
    if (divide != 0)
    {
        total = (total / 2) + 10;
        ans1 = solve2(total, divide - 1, sub);
    }
    if (divide != 0 && sub != 0)
    {
        total = ((total - 10) / 2) + 10;
        ans2 = solve2(total, divide - 1, sub - 1);
    }
    if (divide == 0 && sub == 0)
    {
        return INT_MAX;
    }
    return min(ans1, ans2);
}

void solve()
{
    int total, divide, sub;
    cin >> total >> divide >> sub;

    int ans = solve2(total, divide, sub);
    if (ans == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // while (true)
    // {
    //     int temp = INT_MAX;
    //     int temp2 = INT_MAX;
    //     if (divide != 0)
    //         temp = (total / 2) + 10;
    //     if (sub != 0 && divide != 0)
    //         temp2 = ((total - 10) / 2) + 10;
    //     else if (sub != 0 && divide == 0)
    //         temp2 = (total - 10);
    //     if (temp < temp2)
    //     {
    //         total = temp;
    //         divide--;
    //     }
    //     else
    //     {
    //         total = temp2;
    //         sub--;
    //         divide--;
    //     }

    //     if (total <= 0)
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     if (divide == 0 && sub == 0)
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
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