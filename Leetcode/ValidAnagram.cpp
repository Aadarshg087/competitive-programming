#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"
bool isAnagram2(string s, string t)
{
    sort(s);
    sort(t);
    if (s == t)
    {
        return true;
    }
    return false;
}
bool isAnagram(string s, string t)
{
    int sSize = s.size();
    int tSize = t.size();
    if (sSize != tSize)
        return false;
    unordered_map<char, int> mp;
    for (int i = 0; i < sSize; i++)
    {
        mp[s[i]]++;
    }

    for (int i = 0; i < tSize; i++)
    {
        if (mp.find(t[i]) == mp.end())
            return false;
        else
        {
            if (mp.find(t[i])->second <= 0)
                return false;
            mp[t[i]]--;
        }
    }
    return true;
}

void solve()
{
    string s, t;
    cin >> s >> t;
    isAnagram(s, t);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}