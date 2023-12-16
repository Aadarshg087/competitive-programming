#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string o = s;
    sort(o.begin(), o.end());
    int count = 0;

    if (s == o)
    {
        cout << 0 << endl;
        return;
    }
    while (s != o)
    {

        // cout << s << endl;
        // cout << o << endl;
        string temp;
        // cout << " is called" << endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
            {
                temp = s[0];
                continue;
            }
            if (s[i] > temp[0])
            {
                temp = s[i];
            }
            else if (temp[temp.size() - 1] == s[i])
            {
                temp += s[i];
            }
            else
            {
                int n = temp.size();
                if (temp[n - 1] < s[i])
                {
                    temp[n - 1] = s[i];
                }
                else
                {
                    temp += s[i];
                }
            }
        }
        string oTemp = temp;
        cout << temp << endl;

        // vector<pair<char, int>> p(s.size());
        // for (int i = 0; i < s.size(); i++)
        // {
        //     p[i].first = s[i];
        //     p[i].second = i;
        // }
        int n = temp.size();
        char last = temp[n - 1];
        for (int i = temp.size() - 1; i > 0; i--)
        {
            temp[i] = temp[i - 1];
        }
        temp[0] = last;
        count++;

        int j = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (oTemp[j] == s[i])
            {
                s[i] = temp[j];
                j++;
            }
        }
        // cout << s << endl;

        if (s == o)
        {
            cout << count << endl;
            return;
        }
    }
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