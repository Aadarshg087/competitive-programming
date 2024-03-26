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
    int val;
    Node *next;
    Node *random;
    Node(int val)
    {
        this->val = val;
        next = NULL;
        random = NULL;
    }
};

// 1st Approach ----------------------
/*
- We can use unordered_map to store the nodes of newly created LL and Old LL
- We are mapping the addresses of original LL with copy LL. This will be done in the first iteration
- Then, in the second iteration, we are gonna use the map to retrieve the corresponding list in new LL
- Make sure to add a check of NULL, and fill it explicitly
- T.C - O(N) + O(N)
- S.C - O(N) + O(N) - One is for the creating new nodes and other is for the unordered_map
*/

Node *copyRandomList(Node *head)
{
    Node *temp = head;
    Node *preRoot = new Node(-1);
    Node *t = preRoot;
    unordered_map<Node *, Node *> mp;
    while (temp != NULL)
    {
        Node *newNode = new Node(temp->val);
        t->next = newNode;
        mp[temp] = newNode;
        t = t->next;
        temp = temp->next;
    }

    temp = head;
    t = preRoot->next;
    while (temp != NULL)
    {
        if (temp->random)
            t->random = mp[temp->random];
        else
            t->random = NULL;
        temp = temp->next;
        t = t->next;
    }
    return preRoot->next;
}

// 2nd Approach
/*
- This is very interesting approach
- We are gonna fill the newly created the nodes in between two nodes. Basically copy of a node can be found using the next pointer.
- And, the next node of original LL can be accessed using temp->next->next
- This will give the references of the nodes and help in the navigting the random pointers which is the biggest tasks
- T.C - O(N) + O(N)
- S.C - O(N)
 */

Node *copyRandomList(Node *head)
{
    if (head == NULL)
        return head;
    Node *root = new Node(-1);
    Node *temp = head;
    Node *t = root;
    while (temp != NULL)
    {
        Node *newNode = new Node(temp->val);
        newNode->next = temp->next;
        temp->next = newNode;
        temp = temp->next->next;
    }

    temp = head;
    t = head->next;
    // Fixing the random pointers
    while (temp != NULL)
    {
        if (temp->random)
            t->random = temp->random->next;
        else
            t->random = NULL;
        if (t->next)
            t = t->next->next;
        else
            t = t->next;
        temp = temp->next->next;
    }

    // Cutting up the connections from the original array
    temp = head;
    t = head->next;
    root = head->next;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (prev)
            prev->next = t;
        temp->next = t->next;
        prev = t;
        temp = temp->next;
        if (temp)
            t = temp->next;
    }
    return root;
}
int main()
{

    return 0;
}