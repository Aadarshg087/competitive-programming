#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        double arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum <= k)
            {
                count++;
            }
            else
            {
                int sum1 = sum - arr[i];
                int temp = arr[i] / 2;
                double dis = ceil(temp);
                sum1 = sum1 + dis;
                if (sum1 <= k)
                {
                    count++;
                }
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}