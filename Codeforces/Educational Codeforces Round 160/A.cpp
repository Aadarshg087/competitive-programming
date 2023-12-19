#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve1()
{
    string s;
    cin >> s;
    string s1 = s.substr(0, 1);
    string s2 = s.substr(1);
    // cout << s1 << " " << s2 << endl;
    int i = 0;
    while (s2[i] == '0')
    {
        s1 += "0";
        // cout << s1 << endl;
        i++;
    }
    // cout << s1 << endl;

    int n1 = stoi(s1);
    int n2 = stoi(s2);
    // cout << n1 << " " << n2 << endl;
    if (n1 < n2)
    {
        cout << n1 << " " << n2 << endl;
        return;
    }
    else if (n1 == n2)
    {
        cout << -1 << endl;
        return;
    }
    else if (n1 > n2)
    {
        cout << -1 << endl;
        return;
    }
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    string s1 = s.substr(0, (n / 2));
    string s2 = s.substr((n / 2));
    if (s2[0] == '0')
    {
        int i = 0;
        while (true)
        {
            if (s2[i] != '0')
            {
                break;
            }
            s1 += '0';
            i++;
        }
    }
    // cout << s1 << " " << s2 << endl;
    int n1 = stoi(s1);
    int n2 = stoi(s2);
    // cout << n1 << " " << n2 << endl;
    // if (s1 > s2)
    // {
    //     cout << "yes" << endl;
    //     return;
    // }

    if (n1 < n2 || s1 < s2)
    {
        cout << n1 << " " << n2 << endl;
        return;
    }
    else if (n1 >= n2 || s1 >= s2)
    {
        if (n1 % 10 == 0)
        {
            cout << -1 << endl;
            return;
        }
        if (s1.size() == 1)
        {
            cout << -1 << endl;
            return;
        }
        string temp1 = s.substr(0, (n / 2) - 1);
        string temp2 = s.substr((n / 2) - 1);
        int t1 = stoi(temp1);
        int t2 = stoi(temp2);
        if (t1 > t2)
        {
            cout << -1 << endl;
            return;
        }
        cout << temp1 << " " << temp2 << endl;
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
        solve1();
    }
    return 0;
}