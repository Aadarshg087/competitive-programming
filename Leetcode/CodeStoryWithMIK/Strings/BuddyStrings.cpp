#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool buddyStrings(string s, string goal)
{
    // if size are not equal then return false
    // if both stirng are equal and no repetition, return false;
    // if all characters are same in both, return true
    // also, got to know (after submission), only one swap is allowed
    if (s.size() != goal.size())
        return false;
    int n = s.size();
    vector<int> freq(27, 0);
    for (int i = 0; i < n; i++)
    {
        int loc = s[i] - 'a' + 1;
        freq[loc]++;
    }
    if (s == goal)
    {
        for (int i = 1; i < 27; i++)
        {
            if (freq[i] > 1)
                return true;
        }
        return false;
    }
    vector<int> temp = freq;
    freq.clear();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != goal[i])
        {
            if (freq.empty() == false)
            {
                if (find(freq.begin(), freq.end(), s[i]) == freq.end() ||
                    find(freq.begin(), freq.end(), goal[i]) == freq.end())
                {
                    return false;
                }
            }
            count++;
            freq.push_back(s[i]);
            freq.push_back(goal[i]);
        }
        if (count > 2)
            return false;
    }

    for (int i = 0; i < n; i++)
    {
        int loc = goal[i] - 'a' + 1;
        temp[loc]--;
    }

    for (int i = 1; i < 27; i++)
    {
        if (temp[i] > 0)
            return false;
    }
    return true;
}

int main()
{

    return 0;
}