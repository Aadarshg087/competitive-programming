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

int findNodeRec(Node *head, int n)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == n)
    {
        return 0;
    }
    int res = 1 + findNodeRec(head->next, n);
    if (res == 0)
    {
        return -1;
    }
    return res;
}

int main()
{

    return 0;
}