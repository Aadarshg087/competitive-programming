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
        this->val;
        next = NULL;
    }
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *temp1 = l1;
    ListNode *temp2 = l2;

    // Performing the additions
    int carry = 0;
    ListNode *ans = new ListNode(-1);
    ListNode *t = ans;
    while (temp1 != NULL && temp2 != NULL)
    {
        int v = temp1->val + temp2->val + carry;
        // cout << temp1->val << " " << temp2->val << endl;
        if (v >= 10)
        {
            carry = v / 10;
            v = v % 10;
            cout << carry << endl;
        }
        else
        {
            carry = 0;
        }
        ListNode *newNode = new ListNode(v);
        t->next = newNode;
        t = t->next;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    while (temp1 != NULL)
    {
        int v = temp1->val + carry;
        if (v >= 10)
        {
            carry = v / 10;
            v = v % 10;
        }
        else
        {
            carry = 0;
        }
        ListNode *newNode = new ListNode(v);
        t->next = newNode;
        temp1 = temp1->next;
        t = t->next;
    }

    while (temp2 != NULL)
    {
        int v = temp2->val + carry;
        if (v >= 10)
        {
            carry = v / 10;
            v = v % 10;
        }
        else
        {
            carry = 0;
        }
        ListNode *newNode = new ListNode(v);
        t->next = newNode;
        temp2 = temp2->next;
        t = t->next;
    }
    if (carry != 0)
    {
        ListNode *p = new ListNode(carry);
        t->next = p;
    }

    return ans->next;
}

int main()
{

    return 0;
}