#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minCount1(int n)
{
    int *arr = new int[n + 1];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            arr[i] = min(arr[i], 1 + arr[i - j * j]);
        }
    }
    return arr[n];
}

int minCount_helper(int n, int *arr)
{
    if (arr[n] != -1)
        return arr[n];

    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, 1 + minCount_helper(n - i * i, arr));
    }

    arr[n] = ans;
    return ans;
}

int minCount(int n)
{
    int *arr = new int[n + 1];

    for (int i = 1; i < n + 1; i++)
    {
        arr[i] = -1;
    }
    arr[0] = 0;
    arr[1] = 1;

    return minCount_helper(n, arr);
}

int main()
{
    cout << minCount(9) << endl;

    cout << minCount1(9) << endl;

    return 0;
}