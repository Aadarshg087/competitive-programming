#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    int n = arr.size();
    vector<int> v(2001, 0);
    for (int i = 0; i < n; i++)
    {
        v[arr[i] + 1000]++;
    }

    sort(v.begin(), v.end());
    for (int i = 1; i < 2001; i++)
    {
        if (v[i] != 0 && v[i] == v[i - 1])
        {
            return false;
        }
    }
    return true;
}

bool uniqueOccurrences(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    unordered_set<int> s;
    for (auto &x : mp)
    {
        int temp = x.second;
        s.insert(temp);
    }
    return mp.size() == s.size();
}

bool uniqueOccurrences(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<int> v;
    if (arr.size() == 1)
        return true;
    int count = 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            v.push_back(count);
            count = 1;
        }
    }
    if (count != 1)
        v.push_back(count);
    if (arr[arr.size() - 1] != arr[arr.size() - 2])
    {
        v.push_back(1);
    }

    if (v.size() == 1)
    {
        return true;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    return 0;
}