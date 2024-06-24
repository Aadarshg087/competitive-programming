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

//
/*
- Make sure to recheck the definition of maxWidth from the problem. Cause I have wasted a good amount of time solving wrong problem
- Used BFS since we need to find the max distance in a paritcular level.
- The main idea is to mark each node with some index(0 based or 1 based)
- Use this indexing to calculate the maxWidth in a particular level
- We are finding the maxWidht at each level and storing the max value of it
- There is a concept of overflow in it also. So, take case of that
- Very different idea (atleast now for me) and make sure to watch the video
T.C - O(n)
S.C - O(n)
*/
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};
int widthOfBinaryTree(TreeNode *root)
{
    if (root == NULL)
        return 0;

    int ans = 0;
    queue<pair<TreeNode *, long long int>> que;
    que.push({root, 0});
    while (!que.empty())
    {
        int size = que.size();
        int mmin = que.front().second;
        int first, last;
        for (int i = 0; i < size; i++)
        {
            long long int cur_id = que.front().second - mmin;
            TreeNode *node = que.front().first;
            que.pop();
            if (i == 0)
                first = cur_id;
            if (i == size - 1)
                last = cur_id;
            if (node->left)
            {
                que.push({node->left, cur_id * 2 + 1});
            }
            if (node->right)
            {
                que.push({node->right, cur_id * 2 + 2});
            }
        }
        ans = max(ans, last - first + 1);
    }
    return ans;
}

int main()
{

    return 0;
}