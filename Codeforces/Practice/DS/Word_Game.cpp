#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

// void solve1()
// {

//     string s;
//     int n;
//     cin >> n;
//     cin >> s;
//     return;
// }

void solve1()
{
    int n;
    cin >> n;
    int count1 = 0, count2 = 0, count3 = 0;
    set<string> s1;
    set<string> s2;
    set<string> s3;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s1.insert(temp);
    }
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s2.insert(temp);
    }
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s3.insert(temp);
    }

    // for (auto i : s1)
    //     cout << i << " ";
    // cout << endl;

    // for (auto i : s2)
    //     cout << i << " ";
    // cout << endl;

    // for (auto i : s3)
    // {
    //     // cout << "Hello world" << endl;
    //     cout << i << " ";
    // }
    // cout << endl;

    for (auto i = s1.begin(); i != s1.end(); i++)
    {
        if (s2.find(*i) != s2.end())
        {
            if (s3.find(*i) != s3.end())
            {
                s1.erase(i);
                s2.erase(i);
                s3.erase(i);
            }
            else
            {
                count1++;
                count2++;
                s1.erase(i);
                s2.erase(i);
            }
        }
        else if (s3.find(*i) != s3.end())
        {
            s1.erase(i);
            s3.erase(i);
            count1++;
            count3++;
        }
        else
        {
            count1 += 2;
        }
    }

    count2 += (2 * s2.size());
    count3 += (2 * s3.size());

    cout << count1 << " " << count2 << " " << count3 << endl;
    return;
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