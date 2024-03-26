#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

int minCoins(vector<int> &coins, int M, int V)
{
    sort(coins.begin(), coins.end(), greater<int>());
    int n = coins.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (coins[i] > V)
            continue;
        int temp = V / coins[i];
        V = V % coins[i];
        count += temp;
    }
    return count;
}

int main()
{

    return 0;
}