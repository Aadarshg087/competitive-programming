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
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        next = NULL;
    }
};

ListNode *constructLinkedList(vector<int> &v)
{
    int i = 0;
    ListNode *head = new ListNode(v[i]);
    i++;
    ListNode *temp = head;
    int n = v.size();
    while (i < n)
    {
        ListNode *newNode = new ListNode(v[i]);
        temp->next = newNode;
        temp = temp->next;
        i++;
    }

    return head;
}

void printLL(ListNode *&head)
{
    ListNode *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    vector<int> v{1, 2, 3, 90, 5, 61, 7};
    ListNode *head = constructLinkedList(v);
    printLL(head);

    return 0;
}