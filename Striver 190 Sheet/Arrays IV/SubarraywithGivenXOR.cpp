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
// Brute force - will give TLE
int subArrayWithGivenXOR(vector<int> &v, int b)
{
    int n = v.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int XOR = v[i];
        if (XOR == b)
            count++;
        for (int j = i + 1; j < n; j++)
        {
            XOR = XOR ^ v[j];
            if (XOR == b)
                count++;
        }
    }
    return count;
}

// Better Approach -----------------
int subArrayWithXOR(vector<int> &v, int b)
{
    int n = v.size();
    int count = 0;
    vector<int> pre(n + 1, 0);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = (pre[i] ^ v[i]);
        if (mp.find(pre[i + 1]) == mp.end())
        {
            mp[pre[i + 1]] = i;
        }
    }

    cout << (12 ^ 9) << endl;

    for (int i : pre)
        cout << i << " ";
    cout << endl;

    int maxDiff = 0;
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
    {
        
        if (pre[i] == b)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    // vector<int> v{5, 6, 7, 8, 9};
    vector<int> v{4, 2, 2, 6, 4};
    int b = 5;
    cout << subArrayWithXOR(v, b) << endl;
    return 0;
}