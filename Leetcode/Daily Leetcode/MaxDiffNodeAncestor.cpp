#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(TreeNode *root, pair<int, int> p)
{
    if (root == NULL)
    {
        pair<int, int> p = {INT_MIN, INT_MAX};
        return p;
    }
    pair<int, int> p1 = solve(root->left, p);
    pair<int, int> p2 = solve(root->right, p);
    if (root->val > p1.first)
        p1.first = root->val;
    if (root->val < p1.second)
        p1.second = root->val;
    if (root->val > p2.first)
        p2.first = root->val;
    if (root->val < p2.second)
        p2.second = root->val;

    pair<int, int> ans = {max(p1.first, p2.first), min(p1.second, p2.second)};
    return ans;
}

int maxAncestorDiff(TreeNode *root)
{
    pair<int, int> p;
    pair<int, int> p1 = solve(root, p);
    pair<int, int> p2 = solve(root, p);
    int ans1 = abs(p1.first - p1.second);
    int ans2 = abs(p2.first - p2.second);

    return max(ans1, ans2);
}

int main()
{

    return 0;
}