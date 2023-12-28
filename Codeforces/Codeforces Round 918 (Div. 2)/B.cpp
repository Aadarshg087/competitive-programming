#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n = 3, m = 3;
    char arr[3][3];
    char ans;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        bool A = false;
        bool B = false;
        bool C = false;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'A')
            {
                A = true;
            }
            else if (arr[i][j] == 'B')
            {
                B = true;
            }
            else if (arr[i][j] == 'C')
            {
                C = true;
            }
        }
        if (A == false)
        {
            cout << "A" << endl;
        }

        if (B == false)
        {
            cout << "B" << endl;
        }
        if (C == false)
        {
            cout << "C" << endl;
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