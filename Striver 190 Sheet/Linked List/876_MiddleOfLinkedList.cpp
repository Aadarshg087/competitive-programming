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

ListNode *middleNode(ListNode *head)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count << endl;
    temp = head;
    int i = 0;
    while (i != count / 2)
    {
        temp = temp->next;
        i++;
    }
    // if ((count & 1) == 0) {
    //     temp = temp->next;
    //     return temp;
    // }
    return temp;
}

int main()
{

    return 0;
}