#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *newNode = new ListNode(-1);
    ListNode *temp = newNode;
    ListNode *temp1 = l1;
    ListNode *temp2 = l2;
    int carry = 0;
    int sum = 0;
    while (temp1 != NULL && temp2 != NULL)
    {
        sum = temp1->val + temp2->val;
        sum += carry;
        if (sum >= 10)
        {
            carry = 1;
            sum = sum % 10;
        }
        else
            carry = 0;
        temp1 = temp1->next;
        temp2 = temp2->next;
        ListNode *n = new ListNode(sum);
        if (temp->val == -1)
        {
            temp->val = n->val;
            continue;
        }
        temp->next = n;
        temp = temp->next;
    }
    while (temp1 != NULL)
    {
        sum = temp1->val + carry;
        if (sum >= 10)
        {
            carry = 1;
            sum = sum % 10;
        }
        else
            carry = 0;
        // newNode.push_back(sum);
        ListNode *n = new ListNode(sum);
        temp->next = n;
        temp = temp->next;
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        sum = temp2->val + carry;
        if (sum >= 10)
        {
            carry = 1;
            sum = sum % 10;
        }
        else
            carry = 0;
        // newNode.push_back(sum);
        ListNode *n = new ListNode(sum);
        temp->next = n;
        temp = temp->next;
        temp2 = temp2->next;
    }
    if (carry != 0)
    {
        ListNode *n = new ListNode(carry);
        temp->next = n;
    }
    return newNode;
}

int main()
{

    return 0;
}