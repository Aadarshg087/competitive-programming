#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int minCount_helper(int n, int *arr)
{
    if (n == 0)
    {
        return 0;
    }

    if (arr[n] != -1)
    {
        // cout << "true" << endl;
        return arr[n];
    }

    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, 1 + minCount_helper(n - i * i, arr));
    }

    cout << n << " ";
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[n] = ans;

    return ans;
}

int minCount(int n)
{
    int arr[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = -1;
    }
    arr[0] = 0;
    return minCount_helper(n, arr);
}

int main()
{
    cout << "Enter a number: " << endl;
    int n;
    cin >> n;
    cout << minCount(n) << endl;

    return 0;
}