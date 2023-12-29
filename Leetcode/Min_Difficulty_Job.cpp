#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &jobDifficulty, int n, int d, int index)
{
    if (index == 1)
        cout << "Yes" << endl;
    if (d == 1)
    {
        cout << "No" << endl;
        int maxElement = INT_MIN;
        for (int i = index; i < n; i++)
        {
            maxElement = max(maxElement, jobDifficulty[i]);
        }
        return maxElement;
    }

    int maxD = INT_MAX;
    int finalResult = INT_MAX;
    for (int i = index; i <= n - d; i++)
    {
        maxD = max(maxD, jobDifficulty[i]);
        for (int j = index; j <= n - d; j++)
        {
            cout << jobDifficulty[j] << " ";
        }
        cout << "   " << index << endl;
        cout << endl;
        int result = maxD + solve(jobDifficulty, n, d - 1, i + 1);
        finalResult = min(finalResult, result);
    }
    return finalResult;
}

int minDifficulty(vector<int> &jobDifficulty, int d)
{
    if (d > jobDifficulty.size())
    {
        return -1;
    }

    if (d == jobDifficulty.size())
    {
        int sum = 0;
        sum = accumulate(jobDifficulty.begin(), jobDifficulty.end(), sum);
        return sum;
    }
    int n = jobDifficulty.size();
    return solve(jobDifficulty, n, d, 0);
}

int main()
{

    vector<int> v = {6, 5, 4, 3, 2, 1};
    int d;
    cin >> d;
    cout << minDifficulty(v, d) << endl;

    return 0;
}