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

int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i].first = start[i];
        v[i].second = end[i];
    }

    sort(v.begin(), v.end());

    int ans = 0;
    int j = 0;
    while (j < n)
    {
        int count = 0;
        int prev = -1;
        for (int i = j; i < n; i++)
        {
            if (prev == -1)
            {
                prev = v[i].second;
                count++;
            }
            else if (v[i].first > prev)
            {
                prev = v[i].second;
                count++;
            }
        }

        ans = max(ans, count);
        j++;
    }

    return ans;
}

// Trying a Recursive Soluiton
int maxMeetings(int start[], int end[], int n)
{
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = make_pair(end[i], start[i]);
    }

    sort(v.begin(), v.end());

    int prev = -1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (prev == -1)
        {
            prev = v[i].first;
            count++;
        }
        if (v[i].second > prev)
        {
            prev = v[i].first;
            count++;
        }
    }

    return count;
}

int main()
{

    return 0;
}