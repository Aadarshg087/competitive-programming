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

int leastInterval(vector<char> &v, int n)
{
    int size = v.size();
    vector<int> a(26, 0);
    for (int i = 0; i < size; i++)
    {
        int loc = v[i] - 'A';
        a[loc]++;
    }

    sort(a.begin(), a.end(), greater<int>());

    int maxi = *max_element(a.begin(), a.end());
    int n1 = n + 1;
    int ans = 0;
    while (maxi != 0)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (n1 != 0)
                break;
            if (a[i] != 0)
            {
                n1--;
                a[i]--;
                ans++;
            }
        }
        maxi = *max_element(a.begin(), a.end());
        if (n1 != 0 && maxi != 0)
            ans += n1;
        n1 = n + 1;
        sort(a.begin(), a.end(), greater<int>());
    }
    return ans;
}

int main()
{

    return 0;
}