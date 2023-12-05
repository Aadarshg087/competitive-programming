#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> common_element(vector<int> v1, vector<int> v2)
{
    // Your code here
    multimap<int, int> mp1;
    multimap<int, int> mp2;

    int m = v1.size();
    for (int i = 0; i < m; i++)
    {
        mp1.insert({v1[i], 1});
    };
    int n = v2.size();
    for (int i = 0; i < n; i++)
    {
        mp2.insert({v2[i], 1});
    }

    vector<int> ans;
    for (auto i : mp1)
    {
        auto x = mp2.find(i.first);
        if (mp2.find(i.first) != mp2.end())
        {
            ans.push_back(i.first);
            mp2.erase(x);
        }
    }
    return ans;
}

int main()
{

    return 0;
}