#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        insertion_sort(arr, n);

        int res = arr[n - 1];
        int count = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (res >= w)
            {
                break;
            }
            else
            {
                res = res + arr[i];
                count++;
            }
        }

        cout << n - count << endl;
    }

    return 0;
}