#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcd";
    char n = '3';
    string t = to_string(s[0]);
    string a = string(1, n);
    cout << t << " " << a << endl;

    return 0;
}