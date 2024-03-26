#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
int trap(vector<int> &v)
{
    int n = v.size();
    vector<int> lMax(n);
    vector<int> rMax(n);
    lMax[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        lMax[i] = max(v[i], lMax[i - 1]);
    }

    rMax[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rMax[i] = max(v[i], rMax[i + 1]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(lMax[i], rMax[i]) - v[i];
    }
    return ans;
}

int main()
{

    return 0;
}