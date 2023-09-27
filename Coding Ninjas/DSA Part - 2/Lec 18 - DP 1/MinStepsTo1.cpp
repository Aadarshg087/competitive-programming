#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSteps2_helper(int n, int *ans)
{
    if (n <= 1)
    {
        return 0;
    }

    if (ans[n] != -1)
    {
        return ans[n];
    }

    int count3 = INT_MAX, count2 = INT_MAX, count1 = INT_MAX;
    if (n % 3 == 0)
    {
        count3 = minSteps2_helper(n / 3, ans);
    }
    else if (n % 2 == 0)
    {
        count2 = minSteps2_helper(n / 2, ans);
    }
    else
        count1 = minSteps2_helper(n - 1, ans);

    int min_ans = min(count3, min(count1, count2)) + 1;
    ans[n] = min_ans;
    return min_ans;
}

int minSteps2(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        ans[i] = -1;
    }

    ans[1] = 1;
    return minSteps2_helper(n, ans);
}

int minSteps(int n)
{
    // Base Case
    if (n <= 1)
    {
        return 0;
    }

    int count1 = INT_MAX, count2 = INT_MAX, count3 = INT_MAX;
    if (n % 3 == 0)
    {
        count3 = minSteps(n / 3);
    }
    else if (n % 2 == 0)
    {
        count2 = minSteps(n / 2);
    }
    count1 = minSteps(n - 1);
    cout << count1 << " " << count2 << " " << count3 << endl;
    int ans = min(count3, min(count1, count2)) + 1;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    // cout << minSteps(n) << endl;
    cout << minSteps2(n) << endl;
    return 0;
}