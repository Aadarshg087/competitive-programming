#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arr[46];
int solve(int n, int i)
{

    if (i == n)
        return 1;
    if (i > n)
        return 0;
    if (arr[i] != 0)
        return arr[i];

    int ans = solve(n, i + 1) + solve(n, i + 2);
    return arr[i] = ans;
}

int climbStairs(int n)
{
    memset(arr, 0, sizeof(arr));
    return solve(n, 0);
}

int main()
{

    return 0;
}