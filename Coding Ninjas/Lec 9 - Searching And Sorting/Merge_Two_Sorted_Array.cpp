#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int pos_arr1 = 0;
    int pos_arr2 = 0;
    int location = 0;
    int count = 1;
    int max_num = max(size1, size2);
    int min_num = min(size1, size2);
    int sum = size1 + size2;

    while (count <= sum)
    {
        if (pos_arr1 < size1 && pos_arr2 < size2 && arr1[pos_arr1] < arr2[pos_arr2])
        {
            ans[location] = arr1[pos_arr1];
            pos_arr1++;
            location++;
        }
        else if (pos_arr1 < size1 && pos_arr2 < size2 && arr1[pos_arr1] >= arr2[pos_arr2])
        {
            ans[location] = arr2[pos_arr2];
            pos_arr2++;
            location++;
        }
        else if (pos_arr1 >= size1)
        {
            for (int i = pos_arr2; i < size2; i++)
            {
                ans[location] = arr2[i];
                location++;
            }
            break;
        }
        else if (pos_arr2 >= size2)
        {
            for (int i = pos_arr1; i < size1; i++)
            {
                ans[location] = arr1[i];
                location++;
            }
            break;
        }
        count++;
    }

    for (int i = 0; i < sum; i++)
    {
        cout << ans[i] << " ";
    }
}

// void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
// {
//     int i = 0;
//     int j = 0;
//     int p = 0;
//     int k = 0;
//     int max_num = max(size1, size2);
//     int min_num = min(size1, size2);
//     while (k < max_num)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             ans[p] = arr1[i];
//             i++;
//             p++;
//         }
//         else if (arr1[i] >= arr2[j])
//         {
//             ans[p] = arr2[j];
//             j++;
//             p++;
//         }
//         else
//         {
//             if (i < size1)
//             {
//                 for (int i = i; i < size1; i++)
//                 {
//                     ans[p] = arr1[i];
//                     p++;
//                 }
//             }
//             else if (j < size2)
//             {
//                 for (int j = j; j < size2; j++)
//                 {
//                     ans[p] = arr2[j];
//                     p++;
//                 }
//             }
//         }
//     }
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size1;
        cin >> size1;
        int arr1[size1];
        for (int i = 0; i < size1; i++)
        {
            cin >> arr1[i];
        }

        int size2;
        cin >> size2;
        int arr2[size2];
        for (int i = 0; i < size2; i++)
        {
            cin >> arr2[i];
        }

        int ans[size1 + size2];
        merge(arr1, size1, arr2, size2, ans);
    }

    return 0;
}