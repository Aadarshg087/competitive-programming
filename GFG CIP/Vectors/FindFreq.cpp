#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findFreq(vector<int> v, int x)
{
    int count = 0;
    for (auto i : v)
    {
        if (i == x)
            count++;
    }
    return count;
}

int main()
{

    return 0;
}