#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int countL = count(s.begin(), s.end(), 'L');
    int countO = count(s.begin(), s.end(), 'O');
    int newCountL = 0;
    int newCountO = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'L')
        {
            newCountL++;
        }
        else
            newCountO++;

        if ((newCountL != (countL - newCountL)) && (newCountO != (countO - newCountO)))
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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