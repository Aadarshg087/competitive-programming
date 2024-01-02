#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Approach 1 ------------- O(n^2);
int maxScore(string s)
{
    int n = s.size();
    int result = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        int count0 = 0;
        for (int j = 0; j <= i; i++)
        {
            if (s[j] == '0')
                count0++;
        }

        int count1 = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] == '1')
                count1++;
        }

        result = max(result, count0 + count1);
    }

    return result;
}

// Approach 2 ----------------- O(n)
int maxScore(string s)
{
    int n = s.size();
    int totalOnes = count(s.begin(), s.end(), '1');
    int count0 = 0;
    int count1 = 0;
    int result = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            count0++;
        }
        if (s[i] == '1')
            count1++;

        result = max(result, count0 + (totalOnes - count1));
    }

    return result;
}

// Approach 3 -------------------- Even better O(n)
int maxScore(string s)
{
    int n = s.size();
    int count1 = 0;
    int count0 = 0;
    int result = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1')
            count1++;
        else
            count0++;

        result = max(result, count0 - count1);
    }
    if (s[n - 1] == '1')
        count1++;

    return result + count1;
}

int main()
{

    return 0;
}