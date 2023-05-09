#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int first_term = l + l;
        int last_term = r + r;
        int ans = (last_term - first_term) + 1;
        cout << ans << endl;
    }

    return 0;
}