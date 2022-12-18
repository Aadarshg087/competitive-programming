#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     if (n == 1)
//     {
//         int ans = INT_MIN;
//         cout << ans << endl;
//         exit(EXIT_SUCCESS);
//     }

//     int k, prev, curr;
//     cin >> k;
//     prev = k;
//     int ans;
//     int count = 2;
//     while (count <= n)
//     {
//         cin >> k;
//         curr = k;
//         if (prev == curr)
//         {
//             int ans = INT_MIN;
//             cout << ans;
//             exit(EXIT_SUCCESS);
//         }
//         prev = curr;
//         count++;
//     }

//     return 0;
// }

// int main()
// {
//     int n;
//     int maxm = INT_MIN;
//     int scmaxm = INT_MIN;
//     maxm++;
//     cin >> n;
//     while (n--)
//     {
//         int curr, prev = 0;
//         cin >> curr;                      // 1
//         if (curr > maxm)                  // 1 > INTMIN
//             maxm = curr;                  // maxm = 1
//         if (scmaxm < curr  && curr < prev) // INTMIN < INTMIN+1 && 1 < 0
//             scmaxm = curr;                // 1
//         prev = curr;                      // 1
//     }
//     cout << scmaxm << endl;
//     return 0;
// }

// MAX
// SCMAXM
// PREV

int main()
{
    int n;
    cin >> n;
    int arr[n];
    if (n > 1)
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = n - 1; i >= 0; i++)
        {
            if (arr[i - 1] != arr[i])
            {
                cout << arr[i - 1] << " ";
                break;
            }
        }
    }
    else
        cout << INT_MIN;
    return 0;
}