#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> list_less_than_k(vector<int> a, int n, int k)
{
    // Your code here
    // Return a vector with elements less than k
    vector<int> v;
    for (auto i : a)
    {
        if (i < k)
            v.push_back(i);
    }
    return v;
}

int main()
{

    return 0;
}