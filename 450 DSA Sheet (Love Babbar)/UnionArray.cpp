#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int doUnion(int *arr, int n, int *brr, int m)
{
    int c[m + n + 1];
    for (int i = 0; i < n; i++)
    {
        c[i] = arr[i];
    }

    int j = 0;
    for (int i = n; i < m + n; i++)
    {
        c[i] = brr[j++];
    }

    sort(c, c + n + m);
    int count = 1;
    for (int i = 1; i < n + m; i++)
    {
        if (c[i] != c[i - 1])
        {
            count++;
        }
    }
    return count;
}

int doUnion(int *arr, int n, int *brr, int m)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for (int i = 0; i < m; i++)
    {
        s.insert(brr[i]);
    }

    return s.size();
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