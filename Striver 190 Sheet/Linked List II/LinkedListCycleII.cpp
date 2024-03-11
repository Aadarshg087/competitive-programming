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
// Optimal Approach using slow and fast pointers
ListNode *detectCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
// Better approach -----------------
ListNode *detectCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    set<ListNode *> st;
    ListNode *temp = head;
    while (st.find(temp) != st.end())
    {
        st.insert(temp);
        temp = temp->next;
    }
    return temp;

    // Dont make this mistake - slow and fast pointers are used to detect the cycle.
    // It does not return the position of the cycle.
    if (head == NULL || head->next == NULL)
        return NULL;
    ListNode *slow = head;
    ListNode *fast = head;
    while (slow != fast)
    {
        if (slow == NULL || fast->next == NULL || fast->next->next == NULL)
            return NULL;
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{

    return 0;
}