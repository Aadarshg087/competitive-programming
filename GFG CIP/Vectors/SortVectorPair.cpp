#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sortBySec(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
        return (a.first > b.first);
    return (a.second > b.second);
}

vector<pair<int, int>> sortBySecond(vector<pair<int, int>> &v)
{
    // Your code here
    sort(v.begin(), v.end(), sortBySec);

    return v;
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