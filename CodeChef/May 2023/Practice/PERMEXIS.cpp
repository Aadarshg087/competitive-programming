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

        bool k = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) > 1)
            {
                cout << "NO" << endl;
                k = true;
                break;
            }
        }

        if (k == false)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}