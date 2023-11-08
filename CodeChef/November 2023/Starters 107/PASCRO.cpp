#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int p1 = 0;
        int p2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R' && s2[i] == 'S')
                p1++;
            else if (s1[i] == 'R' && s2[i] == 'P')
                p2++;
            else if (s1[i] == 'P' && s2[i] == 'R')
                p1++;
            else if (s1[i] == 'P' && s2[i] == 'S')
                p2++;
            else if (s1[i] == 'S' && s2[i] == 'P')
                p1++;
            else if (s1[i] == 'S' && s2[i] == 'R')
                p2++;
        }

        // cout << p1 << " " << p2 << endl;

        if (p2 > p1)
        {
            int ans = (p2 - p1) / 2;
            cout << ans + 1 << endl;
        }
        else if (p2 == p1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}