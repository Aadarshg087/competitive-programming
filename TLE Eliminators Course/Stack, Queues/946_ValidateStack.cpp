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
            s1.push(pushed[j++]);
            if (s1.top() == popped[i])
                break;
            if (j == pushed.size())
                return false;
        }

        while (!s1.empty() && s1.top() == popped[i])
        {
            s1.pop();
            i++;
        }

        if (s1.empty() && i == popped.size())
            return true;
    }
    return false;
}

int main()
{
    vector<int> push{1, 2, 3, 4, 5};
    vector<int> pop{4, 5, 3, 2, 1};
    if (validateStackSequences(push, pop))
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
    return 0;
}