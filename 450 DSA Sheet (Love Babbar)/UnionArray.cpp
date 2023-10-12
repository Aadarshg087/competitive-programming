#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int doUnion(int *arr, int n, int *brr, int m)
{
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < n && j < m)
    {
        if (arr[i] == brr[j])
        {
            count++;
        }
        else
        {
            count += 2;
        }
        i++;
        j++;
    }
    if (j >= m)
    {
        count = count + (n - i);
    }
    if (i >= n)
    {
        count = count + (m - j);
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int *arr = new int[n];
    int *brr = new int[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    cout << doUnion(arr, n, brr, m);

    return 0;
}