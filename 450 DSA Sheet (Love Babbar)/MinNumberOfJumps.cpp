#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minJumps(int *arr, int n)
{
    int ans = 0;
    int i = 0;
    while (i < n - 1)
    {
        if (arr[i] == 0)
        {
            ans = -1;
            break;
        }

        i += arr[i];
        ans++;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << minJumps(arr, n) << endl;

    return 0;
}