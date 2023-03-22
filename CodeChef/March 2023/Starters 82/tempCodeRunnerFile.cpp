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
        int arr1[n];
        int arr2[n];
        bool ones = false;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (arr1[i] == 1)
            {
                ones = true;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        if (ones == false)
        {
            cout << "NO" << endl;
            exit(EXIT_SUCCESS);
        }

        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == 1 && arr2[i] == 0)
            {
                cout << "NO" << endl;
                check = false;
                exit(EXIT_SUCCESS);
            }
            else
            {
                check = true;
            }
        }

        if (check == true)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}