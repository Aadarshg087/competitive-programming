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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1)
            {
                continue;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = -1;
                }
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}