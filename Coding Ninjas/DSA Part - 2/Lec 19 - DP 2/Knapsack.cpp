#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int knapsackProblem(int w[], int v[], int n, int totalWeight)
{
    if (n == 0)
    {
        return 0;
    }

    int value = v[0];

    int temp1 = knapsackProblem(w + 1, v + 1, n - 1, totalWeight - w[0]);
    int temp1 = knapsackProblem(w + 1, v + 1, n - 1, totalWeight - w[0]);
}

int main()
{
    int n;
    cin >> n;
    int w[n];
    int v[n];

    int totalWeight;
    cin >> totalWeight;

    cout << knapsackProblem(w, v, n, totalWeight);
    return 0;
}