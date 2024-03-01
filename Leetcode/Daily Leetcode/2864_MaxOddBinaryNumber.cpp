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

string maximumOddBinaryNumber(string s)
{
    if (s.size() == 1)
        return s;

    sort(s.begin(), s.end());
    s[0] = '1';
    s.pop_back();
    reverse(s.begin(), s.end());
    return s;
}

int main()
{

    return 0;
}