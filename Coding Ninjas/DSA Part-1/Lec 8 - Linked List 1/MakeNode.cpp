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

int main()
{
    // Statically
    Node n1(10);
    Node *head = &n1;
    cout << head << " " << &n1 << endl;
    Node n2(12);
    n1.next = &n2;
    cout << n1.data << " " << n2.data << endl;
    cout << &n2 << " " << n1.next->data << endl;

    // Dynamically
    Node *n3 = new Node(30);
    Node *n4 = new Node(32);
    cout << n3->data << endl;
    n3->next = n4;
    cout << n3->next << " " << n4 << endl;
    cout << n3->next->data << " " << n4->data << endl;

    return 0;
}