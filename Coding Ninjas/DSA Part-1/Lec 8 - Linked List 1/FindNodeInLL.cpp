#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int helper(Node *head, int n, int count)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == n)
    {
        return count;
    }
    return helper(head->next, n, count + 1);
}

int findNode(Node *head, int n)
{
    helper(head, n, 0);
}

int findNode2(Node *head, int n)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == n)
    {
        return 0;
    }
    int res = findNode(head->next, n);
    if(res==-1)
        return res;
    else
        return res + 1;
}

int main()
{

    return 0;
}