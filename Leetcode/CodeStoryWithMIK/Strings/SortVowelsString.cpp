#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string sortVowels(string s)
{
    vector<char> vowels = {'A', 'E', 'I', 'O', 'U',
                           'a', 'e', 'i', 'o', 'u'};
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        auto it = find(vowels.begin(), vowels.end(), s[i]);
        if (it != vowels.end())
        {
            temp += s[i];
            s[i] = '_';
        }
    }
    sort(temp.begin(), temp.end());
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '_')
        {
            s[i] = temp[j++];
        }
    }

    return s;
}

int main()
{

    return 0;
}