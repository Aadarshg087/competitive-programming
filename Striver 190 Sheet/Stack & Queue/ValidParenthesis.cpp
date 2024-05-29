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

/*
Approach : -
- We will allow the opening brackets in the stack and whenever we encounter closing bracket(using string) , we will check whether it will match with the stack top bracket. If we found any one instance of error, we will return false.
Also, we will also check whether stack is empty or not after the for loop and return the answer accordingly.
Make sure to handle some edges like "](". Just dry run adjust the logic accordingly

- Time Complexity - O(n) + O(6)
- Space Complexity - O(n)

*/

bool isValid(string s)
{
    stack<int> st;
    string b = "(){}[]";
    int n = s.size();
    for (int i = 0; i < n; i++) // O(n)
    {
        int j = -1;
        if (!st.empty())
            j = b.find(st.top()); // O(6)
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (j != -1 && s[i] == b[j + 1])
        {
            st.pop();
        }
        else
            return 0;
    }
    if (st.empty())
        return 1;
    return 0;
}

int main()
{

    return 0;
}