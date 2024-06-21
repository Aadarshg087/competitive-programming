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

// BETTER APPROACH
/*
- We have take in the pair<int, int> first is for the element and second is for the curr min element
- We are inserting the element and minElement
- Also, keep in mind the update the minElement while popping the elements to the st.top().second
T.C - O(1)
S.C - O(2N)
*/
class MinStack
{
public:
    stack<pair<int, int>> st;
    int minEle;
    MinStack()
    {
        minEle = LLONG_MAX;
    }

    void push(int val)
    {
        minEle = min(val, minEle);
        st.push({val, minEle});
    }

    void pop()
    {
        st.pop();
        if (st.empty() == false)
            minEle = st.top().second;
        else
            minEle = INT_MAX;
    }

    int top()
    {
        return st.top().first;
    }

    int getMin()
    {
        return st.top().second;
    }
};

// OPTIMAL APPROACH
/*
- We are using the formula to put the elements into the stack if we found the new min
- Similarily, we are using the formula to roll back if needed to return the top element using the formula
- This will allow every single operation to be executed in O(1);
T.C - O(1)
S.C - O(n)

*/
class MinStack
{
public:
    stack<long long int> st;
    long long int mini;
    MinStack()
    {
        mini = INT_MAX;
    }

    void push(int value)
    {
        long long val = value;
        if (st.empty())
        {
            st.push(val);
            mini = val;
        }
        else
        {
            if (val < mini)
            {
                st.push(2 * val * 1LL - mini);
                mini = val;
            }
            else
                st.push(val);
        }
    }

    void pop()
    {
        long long int ele = st.top();
        st.pop();
        if (ele < mini)
            mini = 2 * mini - ele;
    }

    int top()
    {
        long long ele = st.top();
        if (ele < mini)
            return mini;
        return ele;
    }

    int getMin()
    {
        return mini;
    }
};

int main()
{

    return 0;
}