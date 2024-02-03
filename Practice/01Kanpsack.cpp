#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Bag capacity - 10 kg
int solve(vector<int> &w, vector<int> &p, int c, int i)
{
    if (c <= 0 || i == w.size())
    {
        return 0;
    }

    int ans1 = 0;
    int ans2 = 0;

    if (w[i] <= c)
    {
        ans1 = p[i] + solve(w, p, c - w[i], i + 1);
    }
    ans2 = solve(w, p, c, i + 1);
    return max(ans1, ans2);
}

int main()
{
    vector<int> w{1, 5, 3, 7};
    vector<int> p{20, 30, 15, 40};
    int c = 10;
    cout << solve(w, p, c, 0) << endl;

    return 0;
}