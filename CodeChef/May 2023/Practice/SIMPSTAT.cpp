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

        int s = 0;
        int e = n - 1;
        for (int i = 1; i <= k; i++)
        {
            arr[s] = 0;
            arr[e] = 0;
            s++;
            e--;
        }
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }

        double avg = sum / (n - (2 * k));
        cout << fixed << setprecision(6) << avg << endl;
    }

    return 0;
}