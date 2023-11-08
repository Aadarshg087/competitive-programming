#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + (2 * n));

        int *arr2 = new int[2 * n];
        int start = 0;
        int end = (2 * n) - 1;
        int temp1 = 0;
        int temp2 = 0;
        int count = 0;
        while (start + 1 != end)
        {
            start++;
            end--;
            temp1 = temp1 + abs(arr[start - 1] - arr[start]);
            temp2 = temp2 + abs(arr[end] - arr[end + 1]);
            arr2[count] = arr[start - 1];
            arr2[count + 1] = arr[end + 1];
            count += 2;
        }

        arr2[count] = arr[start];
        arr2[count + 1] = arr[end];

        cout << temp1 + temp2 << endl;

        for (int i = 0; i < 2 * n; i++)
        {
            cout << arr2[i] << " ";
            if (i % 2 != 0)
            {
                cout << endl;
            }
        }
    }

    return 0;
}