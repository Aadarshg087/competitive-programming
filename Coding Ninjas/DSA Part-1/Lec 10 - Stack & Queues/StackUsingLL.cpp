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

class StackUsingLL
{
    Node *head;
    int size;

public:
    StackUsingLL()
    {
        head = NULL;
        size = 0;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            int temp = head->data;
            head = head->next;
            size--;
            return temp;
        }
    }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int top()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return head->data;
        }
    }

    int stackSize()
    {
        if (head == NULL)
        {
            return 0;
        }
        else
        {
            return size;
        }
    }
};

int main()
{
    StackUsingLL s;
    s.push(13);
    s.push(47);
    cout << s.stackSize() << endl;
    cout << s.isEmpty() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    return 0;
}