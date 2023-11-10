#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumMe(vector<int> arr, int n)
{
    int sum = 0;
    for (auto i : arr)
    {
        sum += i;
    }
    return sum;
    // return accumulate(arr.begin(), arr.end(), 0);
}

int main()
{

    return 0;
}