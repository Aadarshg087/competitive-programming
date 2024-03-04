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

bool hasCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return false;
    ListNode *temp1 = head;
    ListNode *temp2 = head;
    while (temp1 != temp2)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
        if (temp1 == NULL || temp2 == NULL)
            return false;
    }
    return true;
}

int main()
{

    return 0;
}