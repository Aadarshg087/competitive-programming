#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void freqSorted(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) != mp.end())
            mp[arr[i]]++;
        else
            mp[arr[i]] = 1;
    }

    for (auto i : mp)
        cout << "(" << i.first << "," << i.second << ")"
             << " ";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    freqSorted(arr, n);

    return 0;
}