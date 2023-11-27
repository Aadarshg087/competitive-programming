#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sortbyElements(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
    if (a.first == b.first)
        if (a.second.first == b.second.first)
            return a.second.second < b.second.second;
        else
            return a.second.first < b.second.first;
    return a.first < b.first;
}

vector<pair<int, pair<int, int>>> increasing_List(vector<pair<int, pair<int, int>>> v)
{
    // Your code here
    sort(v.begin(), v.end(), sortbyElements);
}

int main()
{

    return 0;
}