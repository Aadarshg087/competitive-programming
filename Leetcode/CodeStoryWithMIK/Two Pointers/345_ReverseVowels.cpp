#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s)
{
    string v = "aeiouAEIOU";
    int n = s.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v.find(s[i]) != string::npos && v.find(s[j]) != string::npos)
        {
            swap(s[i], s[j]);
            i++;
            j--;
            continue;
        }
        if (v.find(s[i]) == string::npos)
        {
            i++;
        }

        if (v.find(s[j]) == string::npos)
        {
            j--;
        }
    }

    return s;
}

int main()
{
    string s = "leetcode";
    cout << reverseVowels(s) << endl;

    return 0;
}