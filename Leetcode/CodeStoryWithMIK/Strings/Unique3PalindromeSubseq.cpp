#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countPalindromicSubsequence(string s)
{

    int n = s.size();
    unordered_set<char> set;
    // getting the unique elements
    for (int i = 0; i < n; i++)
    {
        set.insert(s[i]);
    }

    int ans = 0;
    for (char ch : set)
    {

        // finding the left most index and right most index
        int leftIdx = -1;
        int rightIdx = -1;
        for (int i = 0; i < n; i++)
        {

            // upadting left most index & right most index
            if (s[i] == ch)
            {
                if (leftIdx == -1)
                    leftIdx = i;

                rightIdx = i;
            }
        }

        // keeping the middle unique elements in a set to avoid repetition
        unordered_set<char> st;
        for (int i = leftIdx + 1; i < rightIdx; i++)
        {
            st.insert(s[i]);
        }

        // size of the set will be number of unique palindromes
        ans += st.size();
    }

    return ans;
}

int main()
{

    return 0;
}