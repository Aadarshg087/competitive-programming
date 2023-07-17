#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode *> children;

    TreeNode(int data)
    {
        this->data = data;
    }
};

// int getHeight(TreeNode<int> *root)
// {
//     int height = 1;
//     int res;
//     for (int i = 0; i < root->children.size(); i++)
//     {
//         res = height + getHeight(root->children[i]);
//     }
//     return res;
// }

int helper(TreeNode<int> *root)
{
    int max = 1;
    int prev = 4;
    int count = 0;

    int max_num = max(max, prev);
    for (int i = 0; i < root->children.size(); i++)
    {
        count = helper(root->children[i]);
    }
    return 1 + count;
}

int getHeight(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int max = 0;
    int prev = 0;
    int count = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        count = helper(root->children[i]);

        if (count > prev)
        {
            max = count;
        }
        else
        {
            prev = count;
        }
    }
    return 1 + count;
}
int main()
{

    return 0;
}