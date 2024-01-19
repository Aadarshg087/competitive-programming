#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string justify(vector<string> &word, int extraSpaces, bool last = false)
{
    string res = "";
    if (last)
    {
        for (int i = 0; i < extraSpaces; i++)
        {
            word[word.size() - 1] += " ";
        }
    }
    else
    {
        int i = 0;
        while (extraSpaces--)
        {
            word[i] += " ";
            if (++i == word.size() - 1)
            {
                i = 0;
            }
        }
    }

    for (int i = 0; i < word.size(); i++)
    {
        res += word[i];
    }

    return res;
}

vector<string> fullJustify(vector<string> &words, int maxWidth)
{
    vector<string> ans;
    int n = words.size();
    vector<string> newStr;
    int totalChar = 0;
    int totalWords = 0;
    bool checklast = false;
    string lastWord = words[words.size() - 1];
    for (int i = 0; i < n; i++)
    {
        if ((totalChar + (int)words[i].size()) > maxWidth)
        {
            newStr[newStr.size() - 1].pop_back();

            totalChar--;
            string res;
            int extraSpaces = maxWidth - totalChar;
            if (totalWords == 1 || checklast)
            {
                res = justify(newStr, extraSpaces, true);
            }
            else
            {
                res = justify(newStr, extraSpaces);
            }
            ans.push_back(res);
            newStr.clear();
            totalChar = 0;
            totalWords = 0;
        }
        if (i == words.size() - 1)
            checklast = true;
        newStr.push_back(words[i] + " ");
        totalChar += words[i].size() + 1;
        totalWords++;
    }
    int extraSpaces = maxWidth - (--totalChar);
    newStr[newStr.size() - 1].pop_back();
    string r = justify(newStr, extraSpaces, true);
    ans.push_back(r);
    return ans;
}

int main()
{
    vector<string> v = {"What", "must", "be", "acknowledgment", "shall", "be"};
    int maxWidth = 16;
    vector<string> res = fullJustify(v, maxWidth);
    for (int i = 0; i < res.size(); i++)
    {
        if (i == res.size() - 1)
        {
            cout << res[i] << ".";
            return 0;
        }
        cout << res[i] << ",";
    }
    cout << "." << endl;

    return 0;
}