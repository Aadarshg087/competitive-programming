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

int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = i; j < n; j++)
        {
            product *= nums[j];
            maxi = max(product, maxi);
        }
    }
    return maxi;
}

// Approach
/*
- A little different concept, very observational problem
- Not so DP tag, but the concept is to use -ve values as break points cause either they can make product of subarray huge if even
- Otherwise they can make it negative
- If at any point the pref or suff becomes zero, that we cannot take that subarray including the zero, so we reset
- so calculate pref and suff form start as well as end, and look for maximum
- Used MOD values of for overflow issue even in ll (though they have mentioned it wont overflow in int but it did). somehow it's passing all the test cases
T.C - O(n)
S.C - O(1)
*/

int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    long long int maxi = INT_MIN;
    long long int pref = 1;
    long long int suff = 1;
    long long int MOD = 1e16 + 7;
    for (int i = 0; i < n; i++)
    {
        if (pref == 0)
            pref = 1;
        if (suff == 0)
            suff = 1;
        pref = (1LL * pref * nums[i]) % MOD;
        suff = (1LL * suff * nums[n - i - 1]) % MOD;
        maxi = max(maxi, max(pref, suff));
    }
    return (int)maxi;
}

int main()
{

    return 0;
}