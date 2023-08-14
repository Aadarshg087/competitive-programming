#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<int> *right;
    BinaryTreeNode<int> *left;

    BinaryTreeNode(T data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }

    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

int maxElement(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0; //
    }

    int ans = max(root->data, max(maxElement(root->left), maxElement(root->right)));
    return ans;
}

int minElement(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return INT_MAX;
    }

    int ans = min(root->data, min(minElement(root->left), minElement(root->right)));
    return ans;
}

// ----------- Approach 1 -> Time Complexity = O(n^2) ------------
// bool isBST(BinaryTreeNode<int> *root)
// {
//     if (root == NULL)
//     {
//         return true;
//     }

//     int leftMax = maxElement(root->left);
//     int rightMin = minElement(root->right);

//     if (root->data < leftMax || root->data > rightMin)
//     {
//         return false;
//     }
//     else
//     {
//         bool ans = isBST(root->left) && isBST(root->right);
//         return ans;
//     }

//     // ---------- Another Approach --------------- //
//     // bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
//     // return output;
// }

// -------------------- Approach 2 Time complexity = O(n) -------------------------------
class IsBSTReturn
{
public:
    bool isBST;
    int minimum;
    int maximum;
};

IsBSTReturn isBST2(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        IsBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }

    IsBSTReturn leftOutput = isBST2(root->left);
    IsBSTReturn rightOutput = isBST2(root->right);
    int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
    int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
    bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data <= rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;

    IsBSTReturn output;
    output.isBST = isBSTFinal;
    output.maximum = maximum;
    output.minimum = minimum;
    return output;
}

int main()
{

    return 0;
}