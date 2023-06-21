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

Node *skipMdeleteN(Node *head, int M, int N)
{
    if (M == 0 || head == NULL)
    {
        return NULL;
    }
    if (N == 0)
    {
        return head;
    }
    Node *temp = head;
    int m = M;
    int n = N;
    Node *store;
    while (temp != NULL)
    {
        if (m > 0)
        {
            store = temp;
            temp = temp->next;
            m--;
        }
        else if (m == 0 && n > 0)
        {
            temp = temp->next;
            n--;
        }
        else if (m == 0 && n == 0)
        {
            store->next = temp;
            m = M;
            n = N;
        }
    }
    store->next = NULL;
    return head;
}

int main()
{
    return 0;
}