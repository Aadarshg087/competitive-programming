#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
int minimumLength(string s)
{
    int n = s.size();
    int i = 0;
    int j = n - 1;

    while (i < j && s[i] == s[j])
    {
        while (s[i] == s[i + 1] && i + 1 < j)
            i++;
        while (s[j] == s[j - 1] && j - 1 > i)
            j--;
        if (j - i == 1 && s[i] == s[j])
            return 0;
        else if (j - i == 1)
            break;
        i++;
        j--;
    }

    return (j - i) + 1;
}

int main()
{

    return 0;
}