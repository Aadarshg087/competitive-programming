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
ListNode *removeZeroSumSublists(ListNode *head)
{
    vector<int> t;
    ListNode *temp = head;
    while (temp != NULL)
    {
        t.push_back(temp->val);
        temp = temp->next;
    }
    vector<int> p(t.size() + 1, 0);
    for (int i = 0; i < t.size(); i++)
    {
        if (i == 0)
            p[i + 1] = t[i];
        else
        {
            p[i + 1] = p[i] + t[i];
        }
    }

    
}
int main()
{
    vector<int> t{1, 2, 3, 4};
    vector<int> p(t.size() + 1, 0);
    for (int i = 0; i < t.size(); i++)
    {
        if (i == 0)
            p[i + 1] = t[i];
        else
        {
            p[i + 1] = p[i] + t[i];
            cout << p[i] << " " << t[i] << endl;
        }
    }

    for (int i : p)
    {
        cout << i << " ";
    }

    return 0;
}