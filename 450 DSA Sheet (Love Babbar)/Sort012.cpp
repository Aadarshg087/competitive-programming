#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else if (arr[i] == 2)
        {
            count2++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (count0 != 0)
        {
            arr[i] = 0;
            count0--;
        }
        else if (count1 != 0)
        {
            arr[i] = 1;
            count1--;
        }
        else
        {
            arr[i] = 2;
            count2--;
        }
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

    sort012(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}