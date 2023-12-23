#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n)
{
    vector<int> ans;
    for (int i = 0; i <= n; i++)
    {
        int num = __builtin_popcount(i);
        ans.push_back(num);
    }

    return ans;
}

int main()
{

    return 0;
}