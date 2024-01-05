#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minDeletionSize(vector<string> &strs)
{
    // Traverse through the cols check for the lexi sorted, if not count++;
    // how to check lexi - ascii value of prev should be greater
    int count = 0;
    for (int i = 0; i < strs[0].size(); i++)
    {
        for (int j = 0; j < strs.size() - 1; j++)
        {
            char ch = strs[j][i];
            if (ch > strs[j + 1][i])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{

    return 0;
}