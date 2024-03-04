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

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
        return 0;
    ListNode *temp = head;
    stack<ListNode *> st;
    while (temp != NULL)
    {
        st.push(temp);
        temp = temp->next;
    }

    head = st.top();
    temp = head;
    st.pop();
    while (!st.empty())
    {
        temp->next = st.top();
        temp = temp->next;
        st.pop();
    }
    temp->next = NULL; // Important statement

    return head;
}

int main()
{

    return 0;
}