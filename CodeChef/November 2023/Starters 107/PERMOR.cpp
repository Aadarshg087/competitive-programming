#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bool check(int *arr, int n)
// {
//     bool isCheck = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == (arr[i - 1] | arr[i - 2]))
//         {
//             isCheck = true;
//             break;
//         }
//     }
//     return isCheck;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        int i = 2;
        while (i <= n)
        {
            if ((arr[i - 1] | arr[i - 2]) == arr[i])
            {
                swap(arr[i - 1], arr[i]);
            }
            else
            {
                i++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;

        // if (check(arr, n))
        // {
        //     cout << "Failed: code is not correct" << endl;
        // }
        // else
        //     cout << "Passed: code is correct" << endl;
    }
    return 0;
}