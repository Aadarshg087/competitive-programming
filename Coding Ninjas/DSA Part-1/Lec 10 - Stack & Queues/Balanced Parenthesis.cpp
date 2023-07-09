#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
#include <stack>

bool isBalanced(string expression)
{
    stack<char> s1;
    if (expression[0] == ')' || expression[0] == ']' || expression[0] == '}')
    {
        return false;
    }
    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
        {
            s1.push(expression[i]);
        }
        else
        {
            if (s1.top() + 1 == expression[i])
            {
                s1.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (s1.empty())
    {
        return true;
    }
    else
        return false;
}

int main()
{
    string expression;
    cin >> expression;
    cout << isBalanced(expression) << endl;

    return 0;
}