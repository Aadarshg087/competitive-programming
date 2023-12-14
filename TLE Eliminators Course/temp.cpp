#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }
    
    return 0;
}