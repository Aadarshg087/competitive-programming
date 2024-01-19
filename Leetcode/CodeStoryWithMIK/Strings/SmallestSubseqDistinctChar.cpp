#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string smallestSubsequence(string s)
{
    int n = s.size();
    string res = "";
    vector<int> lastIndex(26, -1);
    vector<bool> taken(26, false);
    for (int i = 0; i < n; i++)
    {
        char ch = s[i] - 'a';
        lastIndex[ch] = i;
    }

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (taken[ch - 'a'] == true)
            continue;

        while (res.size() > 0 && res.back() > ch && lastIndex[res.back() - 'a'] > i)
        {
            taken[res.back() - 'a'] = false;
            res.pop_back();
        }

        res.push_back(s[i]);
        taken[ch - 'a'] = true;
    }

    return res;
}

// Failed
string smallestSubsequence(string s)
{
    string sortedStr = s;
    sort(sortedStr.begin(), sortedStr.end());
    set<char> set;
    vector<pair<char, int>> v;
    vector<pair<int, char>> v1;
    for (int i = 0; i < s.size(); i++)
    {
        set.insert(s[i]);
        pair<char, int> p = {s[i], i};
        pair<int, char> p1 = {i, s[i]};
        v.push_back(p);
        v1.push_back(p1);
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i].first << " " << v1[i].second << endl;
    }
    for (auto i : set)
        cout << i << " ";
    cout << endl;

    return " ";
}

int main()
{
    string s = "cbacdcbc";
    cout << s << endl;
    cout << smallestSubsequence(s) << endl;

    return 0;
}