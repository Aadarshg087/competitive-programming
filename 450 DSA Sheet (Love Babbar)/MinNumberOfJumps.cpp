#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minJumps(int *arr, int n)
{
    int i = 0;
    int count = 0;
    while (i < n)
    {
        int maxLocation = 0;
        for (int j = i + 1; j <= (i + arr[i]); j++)
        {
            if (arr[j] > arr[maxLocation])
            {
                maxLocation = j;
            }
        }
        i += maxLocation;
        count++;
        if (i >= n - 1)
        {
            break;
        }
    }
    return count;
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