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

// OPTIMAL APPROAHC
/*
- We are calling using recursion to sort the stack.
- At every step we inserting the element to it correct position using insert function
- similar approach we use in the linked list to tranverse back in a singly linked list using recursion
T.C - O(n * n)
S.C - O(1)
*/

void insert(stack<int> &st, int temp)
{
    if (st.empty() || st.top() <= temp)
        st.push(temp);
    int t = st.top();
    st.pop();
    insert(st, temp);
    st.push(t);
    return;
}

void solve(stack<int> &st)
{
    if (st.size() == 1)
        return;

    int temp = st.top();
    st.pop();
    solve(st);
    insert(st, temp);
    return;
}

void sortStack(stack<int> &st)
{
    solve(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{

    return 0;
}