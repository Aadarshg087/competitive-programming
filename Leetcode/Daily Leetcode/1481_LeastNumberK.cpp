#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
int findLeastNumOfUniqueInts(vector<int> &arr, int k)
{
    map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    multimap<int, int> mp1;
    for (auto i : mp)
    {
        mp1.insert({i.second, i.first});
    }

    int count = 0;
    for (auto i : mp1)
    {
        if (k > i.second)
            k -= i.second;

        if (i.second > 0)
            count++;
    }
    return count;
}

int main()
{
    vector<int> arr{1, 4, 5, 6, 4};
    int k = 3;
    cout << findLeastNumOfUniqueInts(arr, k) << endl;

    return 0;
}