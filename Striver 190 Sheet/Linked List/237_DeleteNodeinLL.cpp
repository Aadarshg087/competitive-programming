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

void deleteNode(ListNode *node)
{
    ListNode *temp = node;
    while (node->next != NULL)
    {
        node->val = node->next->val;
        if (node->next->next == NULL)
        {
            node->next = NULL;
            break;
        }
        node = node->next;
    }
}

int main()
{

    return 0;
}