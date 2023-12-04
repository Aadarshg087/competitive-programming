#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<int, int> mapInsert(int arr[], int n)
{
    // Insert arr[i] as key and i as value
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = i;
    }

    return mp;
}

void mapDisplay(map<int, int> mp)
{
    // Print every key and value pair in a new line
    for (auto i : mp)
        cout << i.first << " " << i.second << endl;
}

void mapErase(map<int, int> &mp, int x)
{
    // Write the if and else condition to erase x from map
    if (mp.find(x) != mp.end())
        cout << "erased " << x;
    else
        cout << "not found";
    mp.erase(mp.find(x));
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //       10
        // 9 8 7 4 4 2 1 1 9 8
        // 1
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x;
        cin >> x;
        map<int, int> m = mapInsert(arr, n);
        mapDisplay(m);
        mapErase(m, x);
        mapDisplay(m);
    }

    return 0;
}