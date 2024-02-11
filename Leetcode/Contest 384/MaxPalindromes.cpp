#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxPalindromesAfterOperations(vector<string> &words)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            mp[words[i][j]]++;
        }
    }
    int size = words.size();
    int countOdd = 0;
    int countEven = 0;
    for (auto i : mp)
    {
        if (i.second & 1)
            countOdd++;
        else
            countEven++;
    }

    int ans = 0;
    for (int i = 0; i < words.size(); i++)
    {
        if (words.size() & 1)
        {
            countOdd--;
        }
        else
        {
            
        }
    }
}

int main()
{

    return 0;
}
