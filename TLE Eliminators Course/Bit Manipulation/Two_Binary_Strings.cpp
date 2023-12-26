#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    int i = s2.size() - 1;
    int count2 = 1;
    while (s2[i] != '1')
    {
        count2++;
        i--;
    }
    // cout << "count2: " << count2 << endl;

    int j = s1.size() - count2;
    int count1 = count2;
    while (s1[j] != '1')
    {
        count1++;
        j--;
    }
    // cout << "count1: " << count1 << endl;

    cout << count1 - count2 << endl;
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