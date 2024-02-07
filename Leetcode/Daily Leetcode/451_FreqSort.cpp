#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    map<char, int> mp1;
    for (int i = 0; i < s.size(); i++)
    {
        mp1[s[i]]++;
    }

    multimap<int, char> mp2;
    for (auto i : mp1)
    {
        mp2.insert({i.second, i.first});
    }

    string temp = "";
    for (auto i : mp2)
    {
        string p = string(i.first, i.second);
        temp += p;
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

int main()
{
    string s = "Aadd";
    cout << frequencySort(s) << endl;

    return 0;
}