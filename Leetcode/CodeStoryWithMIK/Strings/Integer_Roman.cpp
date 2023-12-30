#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num)
{
    map<int, char> mp;
    mp.insert({1, 'I'});
    mp.insert({5, 'V'});
    mp.insert({10, 'X'});
    mp.insert({50, 'L'});
    mp.insert({100, 'C'});
    mp.insert({500, 'D'});
    mp.insert({1000, 'M'});

    string ans = "";
    // 501
    // 90 - XC
    // 51 - LI

    int ten = 1;
    while (num != 0)
    {
        int r = (num % 10) * ten;
        if (r == 0)
            continue;
        if (mp.find(r + (1 * ten)) != mp.end())
        {
            auto ch = mp.lower_bound(r + (1 * ten));
            ans += ch->second;
            auto i = mp.lower_bound(r + (1 * ten));
            i--;
            i--;
            ans += i->second;
        }
        else
        {
            auto ch = mp.lower_bound(r);
            ans += ch->second;
        }

        ten *= 10;
        num /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int num = 4;
    cout << intToRoman(num) << endl;

    return 0;
}