#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> uniqueSorted(int arr[], int n)
{
    // Your code here
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    vector<int> v;
    while (s.empty() == false)
    {
        auto it = s.begin();
        v.push_back(*it);
        s.erase(it);
    }
    return v;
}

int main()
{

    return 0;
}