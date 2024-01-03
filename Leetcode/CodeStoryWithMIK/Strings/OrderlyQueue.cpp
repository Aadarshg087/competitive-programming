#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string orderlyQueue(string s, int k)
{
    if (k > 1)
    {
        sort(s.begin(), s.end());
        return s;
    }

    string res = s;
    for (int i = 0; i < s.size(); i++)
    {
        string temp = s.substr(0, 1);
        s = s.substr(1) + temp;
        res = min(res, s);
    }
    return res;
}
// bool valid(string &s, int k)
// {
//     for (int i = 0; i < k; i++)
//     {
//         if (s[i] > s[s.size() - 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// string orderlyQueue(string s, int k)
// {
//     string minString = s;
//     char minChar = s[0];
//     for (int i = 0; i < s.size(); i++)
//     {
//         minChar = min(minChar, s[i]);
//     }
//     while (!valid(s, k) || minChar != s[0])
//     {
//         char lastChar = s[s.size() - 1];
//         int minDiff = INT_MAX;
//         int minDiffI;
//         for (int i = 0; i < k; i++)
//         {
//             if (s[i] > lastChar)
//             {
//                 int diff = s[i] - lastChar;
//                 if (diff <= minDiff)
//                 {
//                     minDiff = diff;
//                     minDiffI = i;
//                 }
//             }
//         }

//         string temp = s.substr(minDiffI, 1);
//         if (minDiff != 0)
//         {
//             s = s.substr(0, minDiffI) + s.substr(minDiffI + 1);
//         }
//         else
//         {
//             s = s.substr(minDiffI + 1);
//         }
//         s += temp;
//         minString = min(minString, s);
//     }
//     return minString;
// }

int main()
{
    string s = "cdfbea";
    int k = 1;
    cout << orderlyQueue(s, k) << endl;

    return 0;
}