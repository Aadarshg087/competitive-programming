#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> maximum_from_left(vector<int> v)
{
    vector<int> p;
    int maxi = v[0];
    int n = v.size();
    int location = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > maxi)
        {
            location = i;
            p.push_back(location);
            maxi = v[i];
        }
    }

    return p;
}

int main()
{
    return 0;
}