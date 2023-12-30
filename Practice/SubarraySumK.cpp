#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int res = 0;
    for (int i = 0; i < 5; i++)
    {
        res = 0;
        for (int j = i; j < 5; j++)
        {
            res = arr[i] + arr[j];
            if (res == k)
            {
                cout << arr[i] << " " << arr[j] << endl;
                cout << "true" << endl;
                return 0;
            }
        }
    }

    return 0;
}