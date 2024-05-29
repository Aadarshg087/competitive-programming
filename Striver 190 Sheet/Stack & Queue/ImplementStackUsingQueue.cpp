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

class MyStack
{
public:
    stack<int> st;
    MyStack()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        int num = st.top();
        st.pop();   
        return num;
    }

    int top()
    {
        return st.top();
    }

    bool empty()
    {
        return st.empty();
    }
};

int main()
{

    return 0;
}