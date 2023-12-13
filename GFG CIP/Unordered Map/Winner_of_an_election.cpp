#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> winner(string arr[], int n)
{
    // Your code here
    // Return the string containing the name and an integer
    // representing the number of votes the winning candidate got
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int max_freq = 0;
    string votes = "0";
    string winner = 0;
    for (auto i : mp)
    {
        if (i.second > max_freq)
        {
            max_freq = i.second;
            winner = i.first;
            votes = to_string(i.second);
        }
        else if (i.second == max_freq && i.first < winner)
        {
            winner = i.first;
            votes = to_string(i.second);
        }
    }
    vector<string> v;
    v.push_back(winner);
    v.push_back(votes);
    return v;
}
int main()
{

    return 0;
}