#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int operate(int a, int b, string token)
{
    if (token == "-")
        return a - b;
    if (token == "*")
        return (long)a * (long)b;
    if (token == "+")
        return a + b;
    if (token == "/")
        return a / b;

    return -1;
}

int evalRPN(vector<string> &tokens)
{
    stack<int> st;
    for (string &token : tokens)
    {
        if (token == "*" || token == "/" || token == "-" || token == "+")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int res = operate(a, b, token);
            st.push(res);
        }
        else
        {
            st.push(stoi(token));
        }
    }
    return st.top();
}

int main()
{

    return 0;
}