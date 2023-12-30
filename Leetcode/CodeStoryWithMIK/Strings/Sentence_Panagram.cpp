#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence)
{
    bool alpha[27] = {0};
    for (auto &i : sentence)
    {
        alpha[(i - 'a') + 1] = true;
    }
    for (int i = 1; i <= 26; i++)
    {
        if (alpha[i] == false)
            return false;
    }

    return true;
}

int main()
{
    string s = "uwqohxamknblecdtzpisgvyfjr";
    cout << checkIfPangram(s);

    return 0;
}