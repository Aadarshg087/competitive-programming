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

bool myComp(int a, int b)
{
    return a > b;
}

int solve(vector<int> &coins, int V, int i)
{
    if (i >= coins.size())
        return INT_MAX;

    if (V == 0)
        return 1;
    // Recurrence Relation
    int t1 = solve(coins, V, i + 1);
    if (t1 != INT_MAX)
        t1++;
    int temp = V / coins[i];
    V = V % coins[i];
    int t2 = solve(coins, V, i + 1);
    if (t2 != INT_MAX)
        t2++;

    return min(t1, t2);
}

int minCoins(vector<int> &coins, int M, int V)
{
    auto myLambda = [](int a, int b)
    {
        return a > b;
    };
    sort(coins.begin(), coins.end(), myLambda);
    // sort(coins.begin(), coins.end(), myComp);
    int n = coins.size();
    int count = 0;
    // kuch smajh nhi aara, mai krra isse recursion se as supposed to greedy for sake of doing it on my own
    return solve(coins, V, 0);
}

int main()
{

    return 0;
}