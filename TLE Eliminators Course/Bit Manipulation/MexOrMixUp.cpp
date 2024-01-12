#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

int arr[300000];
void solve()
{
    // int Mex, Xor;
    // cin >> Mex >> Xor;
    // if (Mex == 0)
    // {
    //     cout << 1 << endl;
    //     return;
    // }

    // int size = Mex;
    // int ans_x = arr[Mex - 1];

    // if (ans_x == Xor)
    // {
    //     cout << size << endl;
    //     return;
    // }

    // // cout << size + 1 << endl;
    // int temp = 0;

    // temp = (ans_x ^ Xor);

    // if (temp != Mex)
    // {
    //     cout << size + 1 << endl;
    // }
    // else
    // {
    //     cout << size + 2 << endl;
    // }

    // any compbination of value will give the third valur (in XOR case)
    // cout << (1 ^ 11) << endl;
    // cout << (10 ^ 1) << endl;
    // cout << (10 ^ 11) << endl;
    // cout << (10 ^ 11 ^ 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;

    arr[0] = 0;
    for (int i = 1; i < 300000; i++)
    {
        arr[i] = arr[i - 1] ^ i;
    }
    while (t--)
    {
        solve();
    }
    return 0;
}