#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int r1, r2, d1, d2;
    cin >> r1 >> r2 >> d1 >> d2;
    int ans1 = r1 + d1;
    int ans2 = r2 + d2;
    cout << "Dominater: " << ans1 << endl;
    cout << "Everule: " << ans2 << endl;

    if (ans1 >= ans2)
        cout << "Dominator" << endl;
    else
        cout << "Everule" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}