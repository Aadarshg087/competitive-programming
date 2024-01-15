#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>> &matches)
{
    unordered_set<int> Elements;
    unordered_map<int, int> losers;
    for (int i = 0; i < matches.size(); i++)
    {
        Elements.insert(matches[i][0]);
        Elements.insert(matches[i][1]);

        losers[matches[i][1]]++;
    }
    vector<int> ans1;
    vector<int> ans2;
    for (const int &i : Elements)
    {
        if (losers.find(i) == losers.end())
        {
            ans1.push_back(i);
        }
        if (losers.find(i) != losers.end())
        {
            auto it = losers.find(i);
            if (it->second == 1)
                ans2.push_back(i);
        }
    }
    sort(ans1.begin(), ans1.end());
    sort(ans2.begin(), ans2.end());
    vector<vector<int>> ans;
    ans.push_back(ans1);
    ans.push_back(ans2);
    return ans;
}

int main()
{

    return 0;
}