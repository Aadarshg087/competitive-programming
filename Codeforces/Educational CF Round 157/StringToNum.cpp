#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> stringToNum(string s)
{
    pair<int, int> p;
    p.first = stoi(s);
    p.second = s.size();

    return p;
}

int main()
{
    pair<int, int> p = stringToNum("123");
    cout << p.first << " " << p.second << endl;

    return 0;
}