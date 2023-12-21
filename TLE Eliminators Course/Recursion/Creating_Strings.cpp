#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<string> allStrings;
void createString(map<char, int> mp, string s = "")
{
    if (mp.empty())
    {
        allStrings.push_back(s);
        return;
    }

    for (auto &i : mp)
    {
        if (i.second != 0)
        {
            auto newMp = mp;
            if (--newMp[i.first] == 0)
                newMp.erase(i.first);

            createString(newMp, s + i.first);
        }
    }
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for (auto &i : s)
        mp[i]++;

    createString(mp);
    cout << allStrings.size() << endl;
    for (auto i : allStrings)
        cout << i << endl;
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