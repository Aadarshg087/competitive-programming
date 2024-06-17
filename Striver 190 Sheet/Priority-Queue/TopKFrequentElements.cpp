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

/*
BRUTE FORCE
- Use the map to store the frqency and reverse the kay value roles into another map
- Simply print k element from the max frequency to min frequency
- T.C - O(nlogn) + O(nlogn)
- S.C - O(n) + O(n) + O(k)
*/
vector<int> topKFrequent(vector<int> &nums, int k)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    vector<int> ans;
    multimap<int, int, greater<int>> mp2;
    for (auto i : mp)
    {
        mp2.insert({i.second, i.first});
    }

    for (auto it = mp2.begin(); it != mp2.end() && k--; it++)
        ans.push_back(it->second);
    return ans;
}

/*
BETTER APPROACH
-


*/

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    for (int i : nums)
    {
        mp[i]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (auto i : mp)
    {
        pq.push({i.second, i.first});
        if (pq.size() > k)
            pq.pop();
    }
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

/*
OPTIMAL SOLUTION
- We are creating a array and index will reflect the freq and in it there is a vector which contains all the
- elements having that frequency
- We dump the map in this array.
- Then, we traverse from the back in vector and pick the top k elements
T.C - O(n) + O(n) +O(n)
S.C - O(n)


*/

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    for (int i : nums) // O(n)
        mp[i]++;
    int maxN = nums.size();
    vector<vector<int>> v(maxN, vector<int>());
    for (auto i : mp) // O(n)
    {
        v[i.second].push_back(i.first);
    }

    vector<int> ans;
    for (int i = maxN - 1; i >= 1; i--) // O(n)
    {
        if (v[i].size() != 0)
        {
            for (int it : v[i])
            {
                if (ans.size() < k)
                    ans.push_back(it);
                else
                    break;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}