#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string
    string s = "abcd";
    // s = s + "ef";
    // cout << s << endl;

    // s += "ef";
    // cout << s << endl;

    s.push_back('e'); // O(1)
    s.pop_back();     // O(1)
    cout << s << endl;

    // cout << s.back() << endl;
    // cout << s[s.size() - 1] << endl;
    string s1 = "";
    for (int i = 0; i < s.size(); i++)
    {
        // if (i == s.size() - 1)

        s1 += s[i];
        continue;
    }
    cout << s1 << endl;


    // given a character, if end of the string is 'a', remove 'a' and then add character

    return 0;
}