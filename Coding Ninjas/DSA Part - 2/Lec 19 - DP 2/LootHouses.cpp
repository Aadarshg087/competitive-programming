#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute Force
int maxMoneyLooted(int arr[], int n)
{
    // Base Case
    if (n <= 0)
    {
        return 0;
    }

    if (n % 2 == 0)
    {
        int temp1 = arr[0] + maxMoneyLooted(arr + 2, n - 2);
    }
    else
    {
        int temp2 = arr[0] + maxMoneyLooted(arr + 2, n - 2);
    }

    // Recursive Calls
    // int i = 1;
    // int temp1 = 0;
    // int temp2 = 0;
    // temp1 = temp1 + arr[0] + maxMoneyLooted(arr + 2, n - 2);
    // temp2 = temp2 + arr[i] + maxMoneyLooted(arr + (i + 2), n - (i + 2));

    return max(temp1, temp2);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxMoneyLooted(arr, n) << endl;

    return 0;
}