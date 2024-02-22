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

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    vector<int> temp{1};
    ans.push_back(temp);
    int i = 1;
    while (i != numRows)
    {
        vector<int> temp2;
        for (int j = 0; j < temp.size(); j++)
        {
            if (j == 0)
            {
                temp2.push_back(temp[j]);
            }
            else
            {
                int a = temp[j] + temp[j - 1];
                temp2.push_back(a);
            }
        }
        temp2.push_back(temp[temp.size() - 1]);

        ans.push_back(temp2);
        i++;
        temp = temp2;
    }
    return ans;
}

int main()
{

    return 0;
}