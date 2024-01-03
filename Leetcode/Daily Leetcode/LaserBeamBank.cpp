#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numberOfBeams(vector<string> &bank)
{
    // Keep track of previous rows number of ones
    // check if the row is empty
    int countOnes = 0;
    int countPrevOnes = 0;
    int res = 0;
    for (int i = 0; i < bank.size(); i++)
    {
        countOnes = 0;
        for (int j = 0; j < bank[i].size(); j++)
        {
            if (bank[i][j] == '1')
            {
                countOnes++;
            }
        }
        if (countOnes != 0)
        {
            res += countPrevOnes * countOnes;
            countPrevOnes = countOnes;
        }
    }
    return res;
}

int main()
{

    return 0;
}