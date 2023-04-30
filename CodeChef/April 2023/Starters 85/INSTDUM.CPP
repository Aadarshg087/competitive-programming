#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int total_balls;
        cin >> total_balls;
        int arr[total_balls];
        int count = 0;
        int prev = 0;
        for (int i = 0; i < total_balls; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < total_balls; i++)
        {
            if (((arr[i] + prev / (i + 1)) * 100) == 100)
            {
                count++;
            }
            prev = prev + arr[i];
        }
        cout << count << endl;
    }

    return 0;
}