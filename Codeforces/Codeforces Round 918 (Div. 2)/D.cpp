#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

string perfectString(string s, int n, int i)
{
    if (n == 1)
    {
        return "-";
    }
    if (n <= 0)
    {
        string a = ".";
        return a;
    }
    string s1 = "bcd";
    string s2 = "ae";
    if (s1.find(s[i]) == string::npos || s2.find(s[i + 1]) == string::npos)
    {
        return "-";
    }

    string ans1 = s.substr(0, 2) + '.' + perfectString(s.substr(2), n - 2, i);
    string ans2;
    if (n >= 3 && s1.find(s[i + 2]) != string::npos)
    {
        ans2 = s.substr(0, 3) + '.' + perfectString(s.substr(3), n - 3, i);
    }
    if (ans1[ans1.size() - 1] == '.')
    {
        return ans1;
    }
    else
    {
        return ans2;
    }
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = perfectString(s, n, 0);
    cout << ans.substr(0, ans.size() - 2) << endl;
    // unordered_set<char> C;
    // unordered_set<char> V;
    // C.insert('b');
    // C.insert('c');
    // C.insert('d');
    // V.insert('a');
    // V.insert('e');

    // for (auto i : C)
    //     cout << i << " ";
    // cout << endl;
    // for (auto i : V)
    //     cout << i << " ";

    // 8
    // bacedbab

    // string C = "bcd";
    // string V = "ae";
    // string ans = "";
    // int i = 0;
    // while (i < s.size() - 2)
    // {
    //     if (C.find(s[i]) != string::npos)
    //     {
    //         cout << "yes is called" << endl;
    //         if (V.find(s[i + 1]) != string ::npos)
    //         {
    //             cout << "ol is called" << endl;
    //             if (C.find(s[i + 2] != string ::npos))
    //             {
    //                 cout << "third is called" << endl;
    //                 ans += s[i];
    //                 ans += s[i + 1];
    //                 ans += s[i + 2];
    //                 ans += ".";
    //                 i += 3;
    //             }
    //             else
    //             {
    //                 cout << "second is called" << endl;
    //                 ans += s[i];
    //                 ans += s[i + 1];
    //                 ans += ".";
    //                 i += 2;
    //             }
    //         }
    //     }
    //     cout << "thank you is called" << s[i] << endl;
    // }
    // cout << ans;

    // string ans = "";
    // int i = 0;
    // while (i < s.size() - 2)
    // {
    //     if (C.find(s[i]) != C.end())
    //     {
    //         cout << "yesle is called" << endl;
    //         if (V.find(s[i + 1]) != V.end())
    //         {
    //             cout << "hii is called" << endl;
    //             if (C.find(s[i + 2]) != C.end())
    //             {
    //                 cout << "ooo is called" << endl;
    //                 ans += s[i] + s[i + 1] + s[i + 2] + '.';
    //                 i += 3;
    //             }
    //             else
    //             {
    //                 cout << "opop is called" << endl;
    //                 ans += s[i] + s[i + 1] + '.';
    //                 i += 2;
    //             }
    //         }
    //     }
    // }

    // cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}