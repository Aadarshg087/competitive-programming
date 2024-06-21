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

class MinStack
{
public:
    stack<int> st;
    multiset<int> s;
    MinStack()
    {
    }

    void push(int val)
    {
        s.insert(val);
        st.push(val);
    }

    void pop()
    {
        s.erase(s.find(st.top()));
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return *s.begin();
    }
};

int main()
{

    return 0;
}