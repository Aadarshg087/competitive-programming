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

struct Item
{
    int value;
    int weight;
};

// Basic Approach ----------------
/*
- Sorting according to the perprofit so that we can first pick the item with max value
- Since it is frectional, so we considering its fractions
- T.C - O(N) + O(NlogN) + O(N)
- S.C - O(N)

*/
double fractionalKnapsack(int W, Item arr[], int n)
{
    vector<vector<double>> v(n);
    for (int i = 0; i < n; i++)
    {
        vector<double> temp;
        double perProfit = arr[i].value / arr[i].weight;
        temp = {perProfit, (double)arr[i].value, (double)arr[i].weight};
        v[i] = temp;
    }

    sort(v.begin(), v.end(), greater<vector<double>>());

    int i = 0;
    double profit = 0;
    while (i < n && W != 0)
    {
        if (v[i][2] <= W)
        {
            profit += v[i][1];
            W -= v[i][2];
        }
        else
        {
            double temp = v[i][0] * W;
            W = 0;
            profit += temp;
        }
        i++;
    }

    return profit;
}

// Better Approach ---------------
/*
- A bit faster than the previous one cause we are using set
- It sort the thing in one go
T.C - O(NlogN) + O(N)
S.C - O(N)
*/
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    multiset<vector<double>, greater<vector<double>>> v;
    for (int i = 0; i < n; i++)
    {
        vector<double> temp;
        double perProfit = (double)arr[i].value / arr[i].weight;
        temp = {perProfit, (double)arr[i].value, (double)arr[i].weight};
        v.insert(temp);
    }

    // sort(v.begin(), v.nd(), greater<vector<double>>());
    // reverse(v.begin(), v.end());

    double profit = 0;
    for (auto t : v)
    {
        if (t[2] <= W)
        {
            // cout<<"YES"<<endl
            profit += t[1];
            W -= t[2];
        }
        else
        {
            double temp = t[0] * W;
            // cout<<t[0] <<" "<<W<<endl;
            W = 0;
            profit += temp;
            break;
        }
    }

    return profit;
}
// Optimal Approach ----------------
/*
- Here we will not use the extra space and we'll use comparator funciton
- Everythinh else is almost same
- T.C - O(NlogN) + O(N)
- S.C - O(1)
*/
double fractionalKnapsack(int W, Item arr[], int n)
{
}

int main()
{

    return 0;
}