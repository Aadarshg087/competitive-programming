#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

// void checker(vector<int> &odd, vector<int> &even)
// {
//     int temp = 0;
//     for (int i = 0; i < odd.size(); i++)
//     {
//         cout << odd[i] << " ";
//         temp ^= odd[i];
//     }
//     cout << endl;
//     cout << "Odd XOR: " << temp << endl;
//     temp = 0;
//     for (int i = 0; i < even.size(); i++)
//     {
//         cout << even[i] << " ";
//         temp ^= even[i];
//     }
//     cout << endl;
//     cout << "Even XOR: " << temp << endl;
//     cout << endl;
// }

void solve()
{
    int n;
    cin >> n;

    if (n == 3)
    {
        cout << "1 2 3" << endl;
        return;
    }

    vector<int> odd;
    vector<int> even;

    int f = 2;
    for (int i = 0; i < n / 2; i++)
    {
        even.push_back(f);
        odd.push_back(f + 1);
        f += 2;
    }

    if ((n / 2) & 1)
    {
        int p = odd[odd.size() - 1];
        p ^= 1;
        odd.pop_back();
        ll r = 1;
        int q = (r << 20);
        p ^= q;
        odd[odd.size() - 1] ^= q;
        odd.push_back(p);
    }

    // checker(odd, even);

    for (int i = 1; i <= n; i++)
    {
        if ((n & 1) && i == n)
        {
            cout << 0 << " ";
        }
        else if (i & 1)
        {
            cout << odd.back() << " ";
            odd.pop_back();
        }
        else
        {
            cout << even.back() << " ";
            even.pop_back();
        }
    }
    cout << endl;
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