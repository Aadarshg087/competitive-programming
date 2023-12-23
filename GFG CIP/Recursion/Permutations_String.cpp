#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutation(string s)
{
    string n = s;
    cout << s << " ";
    next_permutation(s.begin(), s.end());
    cout << s << " ";
    while (s != n)
    {
        bool ans = next_permutation(s.begin(), s.end());
        if (!ans)
        {
            break;
        }
        cout << s << " ";
    }
}
void permute(string s, int i, string ans = "")
{
    if (i == s.size() - 1)
    {
        // ans += s[s.size() - 1];
        cout << ans << " ";
        return;
    }

    for (int j = i; j < s.size(); j++)
    {
        // if (i == 0)
        // {
        //     cout << s[i] << endl;
        // }
        ans += s[j];
        permute(s, i + 1, ans);
        ans = ans.substr(0, ans.size() - 1);
    }
}
void permutation1(string s)
{
    permute(s, 0);
}

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    permutation1(s);

    return 0;
}