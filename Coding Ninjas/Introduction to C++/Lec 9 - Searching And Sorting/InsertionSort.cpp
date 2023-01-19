#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    n = 6;
    int arr[n] = {1, 7, 4, 0, 9, 4};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // for (int i = 0; i < n; i++)
    // {
    //     int curr = arr[i];
    //     int j;
    //     for (j = i - 1; j >= 0; j--)
    //     {
    //         if (curr < arr[j])
    //         {
    //             arr[j + 1] = arr[j];
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     arr[j + 1] = curr;
    // }




    // Write your code here
    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}