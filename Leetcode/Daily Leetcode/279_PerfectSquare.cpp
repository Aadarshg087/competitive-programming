#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int n, int i, int arr[])
{
    if (i == n)
        return 0;

    if (arr[i] != -1)
        return arr[i];

    int ans = INT_MAX;
    for (int j = 1; (i + (j * j)) <= n; j++)
    {
        ans = min(ans, 1 + solve(n, i + (j * j), arr));
    }

    return arr[i] = ans;
}

int numSquare(int n)
{
    int arr[100000 + 1];
    memset(arr, -1, sizeof(arr));
    return solve(n, 0, arr);
}
int main()
{
    int n = 24;
    cout << numSquare(n) << endl;
    return 0;
}