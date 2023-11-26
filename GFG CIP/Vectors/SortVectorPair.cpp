#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sortBySecond(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

void sortBySecond(vector<pair<int, int>> &v)
{
    // Your code here
    sort(v.begin(), v.end(), sortBySecond);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main()
{
    pair<int, int> p1 = {1, 2};
    pair<int, int> p2 = {2, 3};
    pair<int, int> p3 = {3, 1};
    pair<int, int> p4 = {4, 5};
    pair<int, int> p5 = {5, 7};

    vector<pair<int, int>> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    sortBySecond(v);

    return 0;
}