#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Wrong Check again

int t[101];
int solve(int i, int n)
{
    // cout << "jsf is called" << endl;
    if (i > n)
        return 0;
    if (i == n)
        return 1;

    if (t[i] != -1)
        return t[i];

    int ans1 = solve(i + 1, n);
    int ans2 = solve(i + 2, n);
    // cout << ans1 << " " << ans2 << endl;

    return t[i] = ans1 + ans2;
}

int main()
{
    int n;
    cin >> n;
    memset(t, -1, sizeof(t));
    cout << solve(0, n) << endl;

    return 0;
}