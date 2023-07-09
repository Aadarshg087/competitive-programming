#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int total_bells, first_X, so_far, current_level;
        cin >> total_bells >> first_X >> so_far >> current_level;
        int remaining_bells = total_bells - first_X;
        int so_far2 = so_far;
        int ans = 0;
        if (so_far >= first_X)
        {
            ans = 10 * first_X;
            so_far -= first_X;
            ans += so_far * 5;
            if (so_far2 >= total_bells)
            {
                ans += 20;
            }
            cout << current_level + ans << endl;
        }
        else
        {
            ans = 10 * so_far;
            cout << current_level + ans << endl;
        }
    }

    return 0;
}