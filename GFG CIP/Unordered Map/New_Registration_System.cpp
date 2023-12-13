#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string> login_system(vector<string> v)
{
    // Your code here
    unordered_map<string, int> mp;
    vector<string> ans;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second >= 2)
        {
            string temp = to_string(i.second - 1);
            string n = i.first + temp;
            ans.push_back(n);
        }
        else
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}
int main()
{

    return 0;
}