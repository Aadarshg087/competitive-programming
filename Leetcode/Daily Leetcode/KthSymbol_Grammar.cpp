#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int helper(string s, int n, int k)
{
    if (s.size() >= k)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i == k - 1)
            {
                int num = s[i] - '0';
                return num;
            }
        }
    }
    string new_s = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            new_s += "01";
        }
        else
            new_s += "10";
    }

    return helper(new_s, n, k);
}
int kthGrammar(int n, int k)
{
    string s = "0";
    return helper(s, n, k);
}

int main()
{

    return 0;
}