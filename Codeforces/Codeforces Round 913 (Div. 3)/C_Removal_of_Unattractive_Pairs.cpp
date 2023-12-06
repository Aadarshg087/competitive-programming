#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

int minCount(char arr[], int n)
{
    // if (n == 0)
    // {
    //     return 0;
    // }
    // res = minCount(arr + 1, n);
    // if (n == 1)
    //     return 1;

    // if (arr[0] == arr[1])
    // {
    //     res++;
    // }
    // else
    // {
    //     return res;
    // }
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    list<char> l;
    for (int i = 0; i < n; i++)
    {
        l.push_back(s[i]);
    }

    // for (auto i : l)
    //     cout << i << " ";

    int i = 0;
    for (auto i = l.begin(); i != l.end(); i++)
    {
        auto p = i;
        auto o = ++i;
        if (p != o)
        {
            cout << *p << " " << *o << endl;

            l.pop_front();
            l.pop_front();
            i = l.begin();
        }
    }
    cout << l.size() << endl;
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