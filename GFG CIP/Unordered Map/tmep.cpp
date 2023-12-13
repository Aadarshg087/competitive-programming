#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> func()
{
    vector<string> v(2);
    string n = "hello";
    string m = "world";
    v.push_back(n);
    v.push_back(m);
    return v;
}

int main()
{
    vector<string> res = func();
    cout << res[0] << " " << res[1] << endl;

    return 0;
}