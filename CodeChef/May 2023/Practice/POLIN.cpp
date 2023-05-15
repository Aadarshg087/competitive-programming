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
        long int size = n * 2;
        long int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        int freq_x = 0;
        int freq_y = 0;
        // x --> i even
        // y --> i odd
        // for (int i = 0; i < size; i++)
        // {
        //     if (arr[i] == -1)
        //         continue;
        //     count = 1;
        //     if (i % 2 == 0)
        //     {
        //         for (int j = i + 2; j < size; j += 2)
        //         {
        //             if (arr[i] == arr[j])
        //                 arr[j] = -1;
        //         }
        //         arr[i] = -1;
        //         freq_x += count;
        //     }
        //     else
        //     {
        //         for (int j = i + 2; j < size; j += 2)
        //         {
        //             if (arr[i] == arr[j])
        //                 arr[j] = -1;
        //         }
        //         arr[i] = -1;
        //         freq_y += count;
        //     }
        // }

        // cout << freq_x + freq_y << endl;


        int i=0;
        int j=1;
        while (i<=size)
        {
            
        }
        
    }

    return 0;
}