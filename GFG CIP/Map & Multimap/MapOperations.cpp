#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<int, int> mapInsert(int arr[], int n)
{
    map<int, int> mp;
    // Insert arr[i] as key and i as value
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
    return;
}

void mapErase(map<int, int> &mp, int x)
{
    // Write the if and else condition to erase x from map
    if (mp.find(x) == mp.end())
    {
        cout << "not found";
    }
    else
    {
        cout << "erased " << x;
        mp.erase(mp.find(x));
    }

    cout << endl;
    return;
}

int main()
{

    return 0;
}