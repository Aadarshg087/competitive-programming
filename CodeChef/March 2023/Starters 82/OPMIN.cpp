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

        int min = 100;
        int count = 0;
        int location = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                location = i;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == min)
            {
                count++;
            }
        }
        cout << n - count << endl;
    }

    return 0;
}