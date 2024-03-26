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
    char arr[n];
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '.')
        {
            check++;
            if (check == 3)
            {
                cout << 2 << endl;
                return;
            }
            count++;
        }
        else
        {
            check = 0;
        }
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