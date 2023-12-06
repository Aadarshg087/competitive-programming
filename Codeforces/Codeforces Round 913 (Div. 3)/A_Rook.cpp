#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    string s;
    cin >> s;
    char alpha = s[0];
    int num = s[1] - '0';
    // cout << alpha << " " << num << endl;
    for (char i = 'a'; i != 'i'; i++)
    {
        if (i == alpha)
            continue;
        cout << i << num << endl;
    }

    for (int i = 1; i <= 8; i++)
    {
        if (i == num)
            continue;
        cout << alpha << i << endl;
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