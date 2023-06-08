#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 3;
        int arr[n];
        int count_zero = 0;
        int count_one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                count_zero++;
        }

        if (count_zero >= 2)
            cout << "Water filling time" << endl;
        else
            cout << "Not now" << endl;
    }

    return 0;
}