#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    if (count(s.begin(), s.end(), 'B') == k)
    {
        cout << 0 << endl;
        return;
    }

    int totalB = count(s.begin(), s.end(), 'B');
    int countA = 0;
    int countB = 0;
    for (int i = 0; i < n; i++)
    {
        countA += (s[i] == 'A');
        countB += (s[i] == 'B');

        if (k - totalB == countA)
        {
            cout << 1 << "\n" << i + 1 << " B\n";
            break;
        }

        if (totalB - k == countB)
        {
            cout << 1 << "\n" << i + 1 << " A\n";
            break;
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