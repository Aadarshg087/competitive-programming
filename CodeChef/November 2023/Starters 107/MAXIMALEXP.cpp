#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Incomplete
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x = n / 2;
        int ans1 = (x % k);
        int ans2 = ((n - x) % k);
        cout << ans1 << " " << ans2 << endl;
        cout << ans1 * ans2 << endl;

        cout << 2 % 7 << endl;
    }
    return 0;
}