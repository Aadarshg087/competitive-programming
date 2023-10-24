#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//  Done
void segregateElements(int *arr, int n)
{
    int *arr2 = new int[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr2[j] = arr[i];
            // arr[i] = INT_MAX;
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr2[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr2[i];
    }
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

    segregateElements(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}