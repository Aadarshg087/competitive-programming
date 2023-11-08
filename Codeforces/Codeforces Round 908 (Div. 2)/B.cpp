#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// arr2[i] = 1;
// arr2[j] = 3;

// arr2[i] = 2;
// arr2[j] = 3;

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

        int arr2[n] = {1};
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j] && count % 2 == 0)
                {
                    arr2[i] = 1;
                    arr2[j] = 2;
                }
                else if (arr[i] == arr[j])
                {
                    arr2[i] = 1;
                    arr2[j] = 3;
                }
                count++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}