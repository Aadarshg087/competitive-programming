#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << count << " ";
                count += 2;
                if (count > n * n)
                    count = 2;
            }
            cout << endl;
        }
    }

    return 0;
}