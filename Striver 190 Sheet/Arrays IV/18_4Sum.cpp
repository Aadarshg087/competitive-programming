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

// Brute Force
/*
- We could use 4 four loops to find all the 4 numbers from the array.
- But this would be too much of time complexity.
*/
#define ll long long int
vector<vector<int>> foursum1(vector<int> nums, int target)
{
    int n = nums.size();
    set<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    ll sum = 0LL + nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> t(ans.begin(), ans.end());
    return t;
}
// Better Approach --------------------------
/*
- We are using only 3 for loops and finding the frouth element by target - sum of three elements
- And fourth element in the set. Make sure to notice the implementation of set to get unique answer everytime
= T.C - O(N^3)
- S.C - O(N)
*/
vector<vector<int>> foursum1(vector<int> nums, int target)
{
    int n = nums.size();
    set<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<ll> hashset;
            for (int k = j + 1; k < n; k++)
            {
                ll sum = 0LL + nums[i] + nums[j] + nums[k];
                int need = target - sum;
                if (hashset.find(need) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], need};
                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> a(ans.begin(), ans.end());
    return a;
}

// Better Approach
/*
- Using the two pointer approach similar to the 3sum
- i and j will go till n and k,l will be used to from the quads and check accordingly with the target
- One of the thing that we did to avoid duplicate temps, using the loops to avoid counting repeating elements
- the while condition of k and l will ensure to get the unique answers(same goes for i and j)
- T.C - O(N^3)
- S.C - O(1)
*/
vector<vector<int>> foursum(vector<int> nums, int target)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int i = 0;
    int j = i + 1;
    int k;
    int l;
    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            k = j + 1;
            l = n - 1;
            while (k < l)
            {
                ll sum = nums[i] + 0LL + nums[j] + nums[k] + nums[l];
                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;

                    l--;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if (sum < target)
                {
                    k++;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                }
                else if (sum > target)
                {
                    l--;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1])
                j++;
        }
        i++;
        while (i < n && nums[i] == nums[i - 1])
            i++;
    }
    return ans;
}

int main()
{

    return 0;
}