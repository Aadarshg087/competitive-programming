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

class Node
{
public:
    int data;
    Node *next;
    Node *bottom;
    Node(int data)
    {

        this->data = data;
        next = NULL;
        bottom = NULL;
    }
};

// Brute force
/*
- Put all the elements in a vector and sort
- Create a new LL out of this
*/
Node *flatten(Node *root)
{
    if (root == NULL || root->data == NULL)
        return root;
    Node *temp = root;
    vector<int> v;
    while (temp != NULL)
    {
        Node *t = temp;
        while (t != NULL)
        {
            v.push_back(t->data);
            t = t->bottom;
        }
        temp = temp->next;
    }
    sort(v.begin(), v.end());
    int n = v.size();
    Node *head;
    Node *temp;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            Node *t = new Node(v[i]);
            head = t;
            temp = head;
        }
        else
        {
            Node *t = new Node(v[i]);
            temp->bottom = t;
            temp = temp->bottom;
        }
    }

    // root = head;
    // temp = head;
    // while(temp!= NULL){
    //     cout<<temp->data<<" ";
    //     temp = temp ->next;
    // }

    return head;
}

// Better Approach ----------
/*
- We are taking advantage of the sorted linked list given in the question
- Have used the idea of merging two sorted linked list concept
T.C - O(m + n) * O(k)
S.C - O(m + n)
 */

Node *sortLists(Node *head1, Node *head2)
{
    Node *root = new Node(0);
    Node *temp = root;
    Node *i = head1;
    Node *j = head2;
    while (i != NULL && j != NULL)
    {
        if (i->data <= j->data)
        {
            Node *newNode = new Node(i->data);
            temp->bottom = newNode;
            temp = temp->bottom;
            i = i->bottom;
        }
        else
        {
            Node *newNode = new Node(j->data);
            temp->bottom = newNode;
            temp = temp->bottom;
            j = j->bottom;
        }
    }
    while (i != NULL)
    {
        Node *newNode = new Node(i->data);
        temp->bottom = newNode;
        temp = temp->bottom;
        i = i->bottom;
    }
    while (j != NULL)
    {
        Node *newNode = new Node(j->data);
        temp->bottom = newNode;
        temp = temp->bottom;
        j = j->bottom;
    }

    return root->bottom;
}

Node *flatten(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *temp = head->next;
    Node *t = head;
    while (temp != NULL)
    {
        t = sortLists(t, temp);
        temp = temp->next;
    }

    return t;
}

int main()
{

    return 0;
}