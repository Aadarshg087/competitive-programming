#include <iostream>
#include <bits/stdc++.h>
using namespace std;

unordered_map<string, bool> mp;
bool solve(unordered_set<string> &st, string word)
{
    if (mp.find(word) != mp.end())
        return mp[word];
    int n = word.size();
    for (int i = 0; i < n; i++)
    {
        string s1 = word.substr(0, i + 1);
        string s2 = word.substr(i + 1);
        if (st.find(s1) != st.end() && st.find(s2) != st.end() ||
            (st.find(s1) != st.end() && solve(st, s2)))
            return mp[word] = true;
    }
    return mp[word] = false;
}

vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
{
    vector<string> ans;
    mp.clear();
    unordered_set<string> st;
    for (int i = 0; i < words.size(); i++)
    {
        st.insert(words[i]);
    }

    for (int i = 0; i < words.size(); i++)
    {
        if (solve(st, words[i]))
        {
            ans.push_back(words[i]);
        }
    }
    return ans;
}

// vector<string> solve(vector<string> &words)
// {
//     vector<string> ans;
//     unordered_set<string> st;
//     for (int i = 0; i < words.size(); i++)
//     {
//         st.insert(words[i]);
//     }

//     for (int i = 0; i < words.size(); i++)
//     {
//         // cout << "helo" << endl;
//         string s = "";
//         for (int j = 0; j < words[i].size(); j++)
//         {
//             // cout << "helo" << endl;
//             s += words[i][j];
//             if (st.find(s) != st.end())
//             {
//                 if (s.size() == words[i].size())
//                     continue;
//                 else
//                 {
//                     s = "";
//                 }
//                 if (j == words[i].size() - 1)
//                 {
//                     ans.push_back(words[i]);
//                 }
//             }
//         }
//     }

//     return ans;
// }

int main()
{
    vector<string> words = {"cats", "dog", "dogs", "cat", "dogcats"};
    vector<string> res = findAllConcatenatedWordsInADict(words);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}