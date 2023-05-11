#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                count++;
            }
        }
        cout << min(count, (n - x)) << endl;

        // int var1 = -1;
        // int count = 0;
        // int temp = 0;
        // int arr1[n] = {0};
        // for (int i = 0; i < n; i++)
        // {
        //     count = 1;
        //     if (arr[i] < 0)
        //         continue;
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (arr[i] == arr[j])
        //         {
        //             arr[j] = var1;
        //             count++;
        //         }
        //     }
        //     if (count != 1)
        //     {
        //         arr[i] = var1;
        //         var1--;
        //     }
        //     arr1[temp++] = count;
        // }

        // int sum = 0;
        // int freq = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (arr1[i] == 0)
        //         break;
        //     sum = sum + arr1[i];
        //     freq++;
        // }

        // int bro = sum - freq;
        // if (bro >= x)
        // {
        //     cout << freq << endl;
        // }
        // else
        // {
        //     int need = x - bro;
        //     bro = bro + need;
        //     freq = freq - need;
        //     cout << freq << endl;
        // }
    }

    return 0;
}