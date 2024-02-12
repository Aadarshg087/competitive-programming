#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
{
    stack<int> s1;

    int i = 0;
    int j = 0;
    while (j < pushed.size())
    {
        while (true)
        {
            s1.push(pushed[j]);
            if (j < pushed.size() && pushed[j++] != popped[i])
                break;
            else if (j == pushed.size())
                break;
        }

        while (!s1.empty() && s1.top() == popped[i++])
        {
            s1.pop();
        }

        if (s1.empty() && i == popped.size())
            return true;
    }
    return false;
}

int main()
{

    return 0;
}