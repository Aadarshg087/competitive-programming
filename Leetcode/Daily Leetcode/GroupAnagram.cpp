#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagram(vector<string> &str)
{
    for (string s : str)
    {
        sort(s.begin(), s.end());
    }

    sort(str.begin(), str.end());
    int n = str.size();
    vector<vector<string>> ans;
    vector<string> temp;
    temp.push_back(str[0]);
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
        {
            temp.push_back(str[i]);
        }
        else
        {
            ans.push_back(temp);
            temp.clear();
            temp.push_back(str[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}
