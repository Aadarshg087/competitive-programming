#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSteps(string s, string t)
{
    vector<int> freq(27, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int loc = s[i] - 'a' + 1;
        freq[loc]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        int loc = t[i] - 'a' + 1;
        freq[loc]--;
    }

    int count = 0;
    for (int i = 1; i < 27; i++)
    {
        if (freq[i] > 0)
            count += freq[i];
    }

    return count;
}

int main()
{

    return 0;
}