#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

bool isPresent(TreeNode<int> *root, int x)
{
    bool ans = false;
    if (root == NULL)
    {
        return false;
    }

    if (root->data == x)
    {
        return true;
    }
    else
    {
        for (int i = 0; i < root->children.size(); i++)
        {
            ans = isPresent(root->children[i], x);
            if (ans == true)
            {
                break;
            }
        }
        if (ans == true)
            return true;
    }
    return false;
}

int main()
{

    return 0;
}