#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int duplicateNumber(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        cout << duplicateNumber(arr, size) << endl;
    }

    return 0;
}