#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << "- Capacity: " << v.capacity() << endl;
        cout << "Size: " << v.size() << endl;
        cout << v.at(i) << endl;
    }

    v.pop_back();

    cout << v.capacity() << endl;
    cout << v.size() << endl;

    cout << v.at(0) << endl;

    

    return 0;
}