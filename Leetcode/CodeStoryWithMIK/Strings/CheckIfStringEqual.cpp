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
    vector<string> s1;
    vector<string> s2;

    if (arrayStringsAreEqual(s1, s2))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}