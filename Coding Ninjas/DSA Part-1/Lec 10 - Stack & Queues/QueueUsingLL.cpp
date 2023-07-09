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
        next = NULL;
    }
};

class QueueUsingLL
{
    Node *head;
    Node *tail;
    int size;

public:
    QueueUsingLL()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    int dequeue()
    {
        if (size == 0)
        {
            return -1;
        }
        Node *temp = head;
        int element = head->data;
        head = head->next;
        size--;
        delete temp;
        return element;
    }

    int getSize() { return size; }

    int front()
    {
        if (size == 0)
        {
            return -1;
        }

        return head->data;
    }

    bool isEmpty()
    {
        return size == 0;
    }
};

int main()
{

    return 0;
}