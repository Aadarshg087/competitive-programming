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

int t[1001][1001];
int solve(vector<int> &values, vector<int> &weight, int n, int w, int i)
{
    // Base case
    if (i == values.size())
        return 0;

    if (t[w][i] != -1)
        return t[w][i];
    // Recurrence Relation
    int a = 0;
    int b = 0;
    int c = 0;
    if (w - weight[i] >= 0)
    {
        a = values[i] + solve(values, weight, n, w - weight[i], i + 1);
    }
    b = solve(values, weight, n, w, i + 1);

    return t[w][i] = max(a, b);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
    memset(t, -1, sizeof(t));
    return solve(values, weights, n, w, 0);
}

int main()
{

    return 0;
}