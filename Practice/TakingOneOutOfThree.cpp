#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v)
{
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << solve(v);
    return 0;
}