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

        int max_freq = 0;
        int count, element;
        for (int i = 0; i < n; i++)
        {
            count = 1;
            int ele = arr[i];
            if (arr[i] == -1)
                continue;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = -1;
                    count++;
                }
            }
            if (count > max_freq)
            {
                element = ele;
                max_freq = count;
            }
            arr[i] = -1;
        }

        cout << n - max_freq << endl;
    }

    return 0;
}