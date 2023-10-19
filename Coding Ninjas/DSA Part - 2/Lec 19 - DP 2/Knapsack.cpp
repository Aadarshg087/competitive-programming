#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int knapsackProblem(int w[], int v[], int n, int totalWeight)
{
    if (n == 0 || totalWeight <= 0)
    {
        return 0;
    }

    int temp1 = knapsackProblem(w + 1, v + 1, n - 1, totalWeight - w[0]) + v[0];
    int temp2 = knapsackProblem(w + 1, v + 1, n - 1, totalWeight);

    return max(temp1, temp2);
}

int main()
{
    int n;
    cin >> n;
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int totalWeight;
    cin >> totalWeight;

    cout << knapsackProblem(w, v, n, totalWeight);
    return 0;
}