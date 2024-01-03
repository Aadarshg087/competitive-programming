#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num)
{
    vector<int> v = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> s = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string ans = "";
    for (int i = 0; i < v.size(); i++)
    {
        if (num == 0)
            break;
        int times = num / v[i];
        while (times--)
        {
            ans += s[i];
        }

        num = num % v[i];
    }
    return ans;
}

// string intToRoman(int num)
// {
//     map<int, char> mp;
//     mp.insert({1, 'I'});
//     mp.insert({5, 'V'});
//     mp.insert({10, 'X'});
//     mp.insert({50, 'L'});
//     mp.insert({100, 'C'});
//     mp.insert({500, 'D'});
//     mp.insert({1000, 'M'});

//     string ans = "";
//     // 501
//     // 90 - XC
//     // 51 - LI

//     int tens = 1;
//     while (num != 0)
//     {
//         int rem = num % 10;
//         rem *= tens;
//         num /= 10;
//         if (mp.find(rem + (1 * tens)) != mp.end() && rem != 0)
//         {
//             auto it = mp.lower_bound(rem + (1 * tens));
//             ans += it->second;
//             if ((rem + (1 * tens)) % 5 == 0)
//             {
//                 int d = it->first / 5;
//                 auto it2 = mp.lower_bound(d);
//                 ans += it2->second;
//             }
//             else
//             {
//                 int d = it->first / tens;
//                 auto it2 = mp.lower_bound(d);
//                 ans += it2->second;
//             }
//         }
//         else
//         {
//             if (rem != 0)
//             {
//                 // cout << rem << endl;
//                 if (mp.find(rem) != mp.end())
//                 {
//                     auto i = mp.find(rem);
//                     ans += i->second;
//                 }
//                 else
//                 {
//                     auto it = mp.lower_bound(rem);
//                     it--;
//                     int temp = 0;
//                     while (temp != rem)
//                     {
//                         ans += it->second;
//                         temp += it->first;
//                     }
//                 }
//             }
//         }
//         tens *= 10;
//     }
//     // cout << ans << endl;
//     reverse(ans.begin(), ans.end());
//     // cout << ans << endl;
//     return ans;
// }

int main()
{
    int num = 789;
    cout << intToRoman(num) << endl;

    return 0;
}