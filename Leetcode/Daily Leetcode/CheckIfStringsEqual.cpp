#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string temp = "";
    for (int i = 0; i < word1.size(); i++)
    {
        temp += word1[i];
    }

    string temp2 = "";
    for (int i = 0; i < word2.size(); i++)
    {
        temp2 += word2[i];
    }

    return temp == temp2;
}

int main()
{

    return 0;
}