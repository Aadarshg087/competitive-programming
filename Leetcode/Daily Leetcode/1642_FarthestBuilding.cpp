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
int solve(vector<int> &h, int bricks, int ladders, int i)
{
    // Base case
    if (i == h.size() - 1)
        return i;

    // Recursive Solution
    int ans1 = 0, ans2 = 0, ans3 = 0;
    if (h[i] < h[i + 1])
    {
        if (ladders == 0 || bricks == 0)
            return i;
        int temp = abs(h[i] - h[i + 1]);
        if (bricks >= temp)
            ans1 = solve(h, bricks - temp, ladders, i + 1);
        else if (ladders != 0)
            ans2 = solve(h, bricks, ladders - 1, i + 1);
        else
            return i;
    }
    else
        ans3 = solve(h, bricks, ladders, i + 1);
    int finalAns = max(ans1, max(ans2, ans3));
    return finalAns;
}

int furthestBuilding(vector<int> &h, int bricks, int ladders)
{
    return solve(h, bricks, ladders, 0);
}

int main()
{
    vector<int> v{4, 12, 2, 7, 3, 18, 20, 3, 19};
    int bricks = 10;
    int ladders = 2;
    cout << furthestBuilding(v, bricks, ladders) << endl;

    return 0;
}