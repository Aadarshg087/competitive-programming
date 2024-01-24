#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 10, 20, 20};
    int b[] = {3, 20, 40, 80, 100, 120};
    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);

    set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        s.insert(b[i]);
    }
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    // int i = 0, j = 0;
    // while (i < m && j < n)
    // {
    //     if (i > 0 && a[i] == a[i - 1])
    //     {
    //         i++;
    //         continue;
    //     }
    //     if (j > 0 && b[j] == b[j - 1])
    //     {
    //         j++;
    //         continue;
    //     }
    //     if (a[i] < b[j])
    //     {
    //         cout << a[i++] << " ";
    //     }
    //     else if (a[i] > b[j])
    //     {
    //         cout << b[j++] << " ";
    //     }
    //     else
    //     {
    //         cout << a[i] << " ";
    //         ++i;
    //         ++j;
    //     }
    // }
    // if (i <= m - 1)
    // {
    //     while (i < m)
    //     {
    //         cout << a[i++] << " ";
    //     }
    // }
    // if (j <= n - 1)
    // {
    //     while (j < n)
    //     {
    //         cout << b[j++] << " ";
    //     }
    // }
    return 0;
}