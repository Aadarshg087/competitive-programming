#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    n = 7;
    int arr[n] = {3, 5, 7, 4, 2, 14, 15};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    int l = 1;
    int size = n;
    while (l < size)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1] && i != n - 1)
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        size = size - 1;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}