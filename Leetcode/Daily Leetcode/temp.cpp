#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(unordered_map<int, int> mp)
{
    for (auto i : mp)
        cout << i.first << ": " << i.second << endl;
}

int main()
{
    unordered_map<int, int> mp;
    mp[1]++;
    mp[1]++;
    mp[2]++;
    mp[3] = 4;
    mp[2]--;
    // solve(mp);

    int ans = ('a' ^ 'b' ^ 'a');
    cout << ans << endl;
    return 0;
}