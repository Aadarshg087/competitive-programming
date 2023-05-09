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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int arr1[7];
        int temp = 0;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 1 && arr[i] <= 7)
            {
                arr1[temp] = arr[i];
                temp++;
            }
            if (temp == 7)
            {
                res = i;
                break;
            }
        }

        cout << res + 1 << endl;
    }

    return 0;
}