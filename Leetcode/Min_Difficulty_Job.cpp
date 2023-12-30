#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t[301][11];
int solve(vector<int> &jobDifficulty, int n, int d, int index)
{
    cout << index << " " << d << endl;
    if (d == 1)
    {
        int maxElement = INT_MIN;
        for (int i = index; i < n; i++)
        {
            maxElement = max(maxElement, jobDifficulty[i]);
        }
        return maxElement;
    }

    if (t[index][d] != -1)
    {
        return t[index][d];
    }

    int maxD = INT_MIN;
    int finalResult = INT_MAX;
    for (int i = index; i <= n - d; i++)
    {
        maxD = max(maxD, jobDifficulty[i]);
        int result = maxD + solve(jobDifficulty, n, d - 1, i + 1);
        finalResult = min(finalResult, result);
    }
    return t[index][d] = finalResult;
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
    memset(t, -1, sizeof(t));
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