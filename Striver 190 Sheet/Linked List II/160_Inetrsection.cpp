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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *i = headA;
    ListNode *j = headB;
    if (headA == NULL || headB == NULL)
        return NULL;
    unordered_set<ListNode *> st;

    while (i != NULL)
    {
        st.insert(i);
        i = i->next;
    }

    while (j != NULL)
    {
        if (st.find(j) != st.end())
        {
            return j;
        }
        else
        {
            st.insert(j);
        }
        j = j->next;
    }

    return NULL;
}

int main()
{

    return 0;
}