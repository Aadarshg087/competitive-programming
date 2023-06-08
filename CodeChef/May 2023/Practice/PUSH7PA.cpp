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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int freq = 0;
        int max_freq = 0;
        long long element = 0;
        int max_element = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            freq = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    freq++;
                }
            }
            if (freq > max_freq)
            {
                max_freq = freq;
                element = arr[i];
            }
            if (arr[i] > max_element)
            {
                max_element = arr[i];
            }
        }

        int ans = (max_freq + element) - 1;
        if (ans > max_element)
        {
            cout << ans << endl;
        }
        else
        {
            cout << max_element << endl;
        }
    }

    return 0;
}