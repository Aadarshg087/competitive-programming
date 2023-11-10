#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);    
    v.push_back(10);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    for (auto &i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}