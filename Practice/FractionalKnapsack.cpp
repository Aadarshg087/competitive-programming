#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    vector<vector<double>> items;
    // 0 - unit price, 1 - weight, 2 - value;
    for (int i = 0; i < n; i++)
    {
        double unitPrice = (double)(arr[i].value / arr[i].weight);
        vector<double> temp;
        temp.push_back(unitPrice);
        temp.push_back(arr[i].weight);
        temp.push_back(arr[i].value);
    }
    sort(items.begin(), items.end());
    reverse(items.begin(), items.end());

    int i = 0;
    double ans = 0;
    while (W != 0)
    {
        double temp = W / items[i][0];
        if (items[i][1] < W)
        {
            if (items[i][1] <= W)
            {
                ans += items[i][2];
                W = W - items[i][1];
            }
            else
            {
                ans += (W / items[i][1]) * items[i][2];
                break;
            }
        }
        i++;
    }
    return ans;
}

int main()
{

    return 0;
}