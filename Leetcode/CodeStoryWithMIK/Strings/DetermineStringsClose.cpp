#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool closeStrings(string word1, string word2)
{
    // if lenght is diff, return false
    // every occurence should be same in both

    if (word1.size() != word2.size())
    {
        return false;
    }
    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);
    for (int i = 0; i < word1.size(); i++)
    {
        char ch1 = word1[i];
        char ch2 = word2[i];

        int i1 = ch1 - 'a';
        int i2 = ch2 - 'a';

        freq1[i1]++;
        freq2[i2]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != 0 && freq2[i] != 0)
            continue;
        if (freq1[i] == 0 && freq2[i] == 0)
            continue;

        return false;
    }
    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());
    return freq1 == freq2;
}

int main()
{

    return 0;
}