#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool detectCapitalUse(string word)
{
    // All capital is fine
    // All small letters is fine
    // First capital is fine and others must be small

    // Abcd
    bool smallcase = true;
    bool capital = true;
    bool grammer = true;
    int n = word.size();
    for (int i = 0; i < n; i++)
    {
        // All small letters
        if (word[i] >= 97 && word[i] <= 122)
        {
        }
        else
        {
            smallcase = false;
        }

        if (word[i] >= 65 && word[i] <= 90)
        {
        }
        else
        {
            capital = false;
        }

        if (word[0] >= 65 && word[0] <= 90)
        {
            if (i != 0 && word[i] < 97 || word[i] > 122)
            {
                grammer = false;
            }
        }
        else
        {
            grammer = false;
        }
    }
    return (smallcase | capital | grammer);
}

int main()
{

    return 0;
}