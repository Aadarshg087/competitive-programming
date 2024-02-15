#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
long long largestPerimeter(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    bool check = false;
    vector<ll> pre;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        pre.push_back(sum);
        cout << sum << " ";
    }
    cout << endl;

    ll ans = -1;
    for (int i = 2; i < n; i++)
    {
        if (pre[i - 1] > nums[i])
        {
            check = true;
            ans = pre[i];
        }
    }

    return (check) ? ans : -1;
}

int main()
{
    vector<int> v{1, 1, 2};
    // vector<int> v{1, 12, 1, 2, 5, 50, 3};
    // vector<int> v{5, 5, 50};
    cout << largestPerimeter(v) << endl;

    return 0;
}