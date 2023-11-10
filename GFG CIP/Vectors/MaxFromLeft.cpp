#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> maximum_from_left(vector<int> v)
{
    vector<int> p;
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (v[j] > v[i])
                break;
        }
    }
}

int main()
{

    return 0;
}