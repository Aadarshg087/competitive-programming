#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool makeEqual(vector<string> &words)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            mp[words[i][j]]++;
        }
    }

    int n = words.size();
    for (auto &i : mp)
    {
        cout << i.first << " " << i.second << endl;
        if (i.second % n != 0)
            return false;
    }

    return true;
}

int main()
{

    return 0;
}