#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    if (n == 0)
        return arr[n];
    return arr[n] + sum(arr, n - 1);
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

    cout << sum(arr, n - 1);

    return 0;
}