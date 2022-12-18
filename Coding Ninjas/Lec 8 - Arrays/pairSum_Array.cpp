#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pairSum(int arr[], int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, x;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cin >> x;

        cout<<pairSum(arr, size, x)<<endl;
    }

    return 0;
}