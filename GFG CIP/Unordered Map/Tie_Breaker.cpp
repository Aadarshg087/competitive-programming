#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string TieBreak(string names[], int n)
{
    // your code here
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[names[i]]++;
    }

    int max_freq = 0;
    string winner;

    for (auto i : mp)
    {
        if (i.second > max_freq)
        {
            max_freq = i.second;
            winner = i.first;
        }
        else if (i.second == max_freq && i.first < winner)
        {
            winner = i.first;
        }
    }
    return winner;
}

int main()
{

    return 0;
}