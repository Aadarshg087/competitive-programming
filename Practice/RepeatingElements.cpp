#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {0, 2, 1, 3, 2, 2};
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += i;
    }
    int mainSum = 0;
    int maxElement = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        mainSum += v[i];
        maxElement = max(maxElement, v[i]);
    }
    int diff = mainSum - sum; 

    return 0;
}