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

#define ll long long int
int rangeBitwiseAnd(int left, int right)
{
    // for (int i = left; i <= right; i++)
    // {
    //     cout << i << " " << bitset<8>(i) << endl;
    // }

    // return -1;

    int temp = 1;
    ll ans = 0;
    if(left == right)
            return left;
    for (int i = 0; i <= 31; i++)
    {
        left >>= 1;
        right >>= 1;
        if (left == right)
        {
            ans = (left << temp);
            break;
        }
        temp++;
    }
    return ans;
}

int main()
{
    int left = 5;
    int right = 7;
    cout << bitset<8>(5) << endl;
    cout << bitset<8>(7) << endl;
    cout << rangeBitwiseAnd(left, right) << endl;

    return 0;
}