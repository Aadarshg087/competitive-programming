#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort_0_1_2(int *arr, int n)
{
    int pos_zero = 0;
    int pos_two = n - 1;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0 && i > pos_zero)
        {
            int temp = arr[i];
            arr[i] = arr[pos_zero];
            arr[pos_zero] = temp;
            pos_zero++;
            i = i - 1;
        }
        else if (arr[i] == 2 && i < pos_two)
        {
            int temp = arr[i];
            arr[i] = arr[pos_two];
            arr[pos_two] = temp;
            pos_two--;
            i = i - 1;
        }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void sort012(int *arr, int n)
// {
//     int n0 = 0;
//     int n2 = n - 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             int temp = arr[n0];
//             arr[n0] = arr[i];
//             arr[i] = temp;
//             n0++;
//         }
//         else if (arr[i] == 2)
//         {
//             int temp = arr[n2];
//             arr[n2] = arr[i];
//             arr[i] = temp;
//             n2--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort012(arr, n);
    sort_0_1_2(arr, n);

    return 0;
}