#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string Sorted_Characters(string str)
{
    // Your Code Here
    set<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }

    char st[str.size()];
    int j = 0;
    for (auto i : s)
    {
        st[j] = i;
        j++;
    }
    st[j] = '\0';
    return st;
}
int main()
{
    string s = "abccfgesssasddee";
    cout << Sorted_Characters(s) << endl;

    return 0;
}