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
template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode()
    {
        if (left)
        {
            delete left;
        }
        if (right)
        {
            delete right;
        }
    }
};

int findfloorInBSTCeil(BinaryTreeNode<int> *node, int x)
{
    int ans = -1;
    BinaryTreeNode<int> *temp = node;
    while (temp != NULL)
    {
        if (temp->data > x)
        {
            temp = temp->left;
        }
        else
        {
            ans = temp->data;
            temp = temp->right;
        }   
    }
    return ans;
}

int main()
{

    return 0;
}

int main()
{

    return 0;
}