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

// AMORTIZED COMPLEXITY
/*
Amortized complexity is a concept used in computer science to analyze the average time per operation over a sequence of operations, rather than considering the worst-case time of a single operation. This is particularly useful when certain operations are very costly, but those costly operations only occur occasionally.
*/

// BRUTE FORCE
/*
- This approach is pretty basic and I am just transferring elements from one stack to another
- whenever asked for required condition
- This approach is the worst as the at every operation we shifting all the elements from one side to the another
- Every operation has the complexity of O(n)
- Space Complexity would O(2n)
- Next Approach is a bit better approach
 */

class MyQueue
{
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue()
    {
    }

    void push(int x)
    {
        while (!st2.empty())
        {
            int num = st2.top();
            st2.pop();
            st1.push(num);
        }

        st1.push(x);
    }

    int pop()
    {
        while (!st1.empty())
        {
            int num = st1.top();
            st1.pop();
            st2.push(num);
        }

        int ans = st2.top();
        st2.pop();
        return ans;
    }

    int peek()
    {
        while (!st1.empty())
        {
            int num = st1.top();
            st1.pop();
            st2.push(num);
        }
        return st2.top();
    }

    bool empty()
    {
        if (st1.empty() && st2.empty())
            return 1;
        return 0;
    }
};

// BIT BETTER APPROACH
/*
- This approach is a bit better because of we are only doing the significant operation only at pushing the elements
- This, results in the time complexity of push operation at O(2n)
- And all the other operation at O(1);
- Space complexity would be the same as before which is O(2n)
 */

class MyQueue
{
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue()
    {
    }

    void push(int x)
    {
        while (!st1.empty())
        {
            int num = st1.top();
            st1.pop();
            st2.push(num);
        }

        st1.push(x);

        while (!st2.empty())
        {
            int num = st2.top();
            st2.pop();
            st1.push(num);
        }
    }

    int pop()
    {
        int ans = st1.top();
        st1.pop();
        return ans;
    }

    int peek()
    {
        return st1.top();
    }

    bool empty()
    {
        if (st1.empty() && st2.empty())
            return 1;
        return 0;
    }
};

// OPTIMAL APPROACH
/*
- Dry run on some cases, you will get it immediately.
- We are simply printing hte elements in output and if found emtpy we shifting the elements from input (only this operation is taking O(n) time complexity)
- Everything else is taking O(1)

This is called amortized complexity, on average every operation is taking O(1) but for some special cases it is taking O(n)

T.C - O(1) amortized
S.C - O(2n)

*/

class MyQueue
{
public:
    stack<int> input;
    stack<int> output;
    MyQueue()
    {
    }

    void push(int x)
    {
        input.push(x);
    }

    int pop()
    {
        if (!output.empty())
        {
        }
        else
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int ans = output.top();
        output.pop();
        return ans;
    }

    int peek()
    {
        if (!output.empty())
        {
        }
        else
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int ans = output.top();
        return ans;
    }

    bool empty()
    {
        if (output.empty() && input.empty())
            return 1;
        return 0;
    }
};

int main()
{

    return 0;
}