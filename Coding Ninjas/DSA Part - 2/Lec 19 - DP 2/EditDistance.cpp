#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int editDistance(string s1, string s2)
{
    // Base case
    if (s1.length() == 0 || s2.length() == 0)
    {
        return abs(s1.length() - s2.length());
    }

    // Recursive Call
    int ans = editDistance(s1.substr(1), s2.substr(1));

    // Small Calculation
    if (s1[0] != s2[0])
    {
        ans += 1;
    }

    return ans;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << editDistance(s1, s2) << endl;

    return 0;
}