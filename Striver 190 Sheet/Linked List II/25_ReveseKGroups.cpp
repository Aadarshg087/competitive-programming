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
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

// Basic Apprach ------
/*
- Creating a smaller LL and reversing it
- managing the pointer when we get the reverses LL
- Take of the connecting pointers after reversal
- Explictly handle the case there is no LL of k size
-
*/
ListNode *reverse(ListNode *head)
{
    // Reversing the LL, basic question
    ListNode *temp = head;
    ListNode *prev = NULL;
    ListNode *n = head->next;

    while (temp != NULL)
    {
        n = temp->next;
        temp->next = prev;
        prev = temp;
        temp = n;
    }

    return prev;
}

ListNode *getKthNode(ListNode *head, int k)
{
    // Derivoing the kth node
    // We can also keep this function as void
    int count = 1;
    ListNode *temp = head;
    while (count != k)
    {
        temp = temp->next;
        if (temp == NULL)
            return NULL;
        count++;
    }

    return temp;
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *temp = head;
    ListNode *n = NULL;
    ListNode *prev = NULL; // to keep track of teh lst pointer in order to connect to newly reversed LL

    while (temp != NULL)
    {
        ListNode *kth = getKthNode(temp, k); // gettign kth Node
        if (kth == NULL)
        {
            // Imp - Handling if there is no LL of size k
            prev->next = temp;
            break;
        }
        n = kth->next; // preserving the next node before setting the it to NULL for the function
        kth->next = NULL;
        reverse(temp);
        if (temp == head)
        {
            head = kth; // preserving the head pointer to return in the head
        }
        else
        {
            prev->next = kth; // building connection to newly recieved reversed LL
        }
        prev = temp; // updating prev for the next iteration
        temp = n;    // setting up the temp for reversing the LL
    }

    return head;
}

int main()
{

    return 0;
}