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

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool Palindrome(ListNode *head)
{
    ListNode *temp = head;
    string s = "";
    while (temp != NULL)
    {
        string t = to_string(temp->val);
        s += t;
        temp = temp->next;
    }

    return isPalindrome(s);
}

int main()
{

    return 0;
}