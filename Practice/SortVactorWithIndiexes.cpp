#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSorted(vector<int> &v)
{
    vector<pair<int, int>> p;
    for (int i = 0; i < v.size(); i++)
    {
        pair<int, int> d(v[i], i);
        p.push_back({v[i], i});
    }
    sort(p.begin(), p.end());

    for (auto &element : p)
    {
        cout << element.first << " " << element.second << endl;
    }
}

int main()
{
    vector<int> v{34, 65, 86, 32, 87};
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    printSorted(v);

    return 0;
}