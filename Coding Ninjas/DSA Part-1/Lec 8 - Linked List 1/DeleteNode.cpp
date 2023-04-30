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

Node *takeInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    int data;
    cin >> data;
    while (data != -1)
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
        cin >> data;
    }
    return head;
}

Node *deleteNode(Node *head, int pos)
{
    if(head==NULL){
        return NULL;
    }
    int count = 1;
    if (pos == 0)
    {
		Node *temp = head;
        head = head->next;
		delete temp;
    }
    else
    {
		Node* temp=head;
		Node* prev = head;
        while (count <= pos)
        {
            prev = temp;
            temp = temp->next;
            count++;
			if(temp==NULL){
				return head;
			}
        }	
        prev->next = temp->next;
		delete temp;
    }

    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput();
        int pos;
        cout << "Enter the position: ";
        cin >> pos;
        head = deleteNode(head, pos);
        print(head);
    }

    return 0;
}