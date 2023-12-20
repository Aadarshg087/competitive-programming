#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Approach 1 --------------------- O(n*logn)
int buyChoco(vector<int> &prices, int money)
{
    sort(prices.begin(), prices.end());
    int minMoney = prices[0] + prices[1];
    if (minMoney > money)
        return money;
    return money - minMoney;
}

// Approach 2 ------------------------ O(n);
int buyChoco(vector<int> &prices, int money)
{
    int minElement = INT_MAX;
    int minElement2 = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minElement)
        {
            minElement2 = minElement;
            minElement = prices[i];
        }
        else if (prices[i] < minElement2)
        {
            minElement2 = prices[i];
        }
    }

    int sum = minElement2 + minElement;
    if(sum>money)
        return money;
    return money - sum;
}

int main()
{

    return 0;
}