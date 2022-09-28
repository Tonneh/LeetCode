//
// Created by Tony on 9/27/2022.
//
#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr)
    {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr)
    {}

    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right)
    {}
};

vector<int> rightSideView(TreeNode* root)
{
    if (root == nullptr)
        return {};
    vector<int> res;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        res.push_back(q.back()->val);
        for (int i = 0; i < n; i++)
        {
            if (q.front()->left)
                q.push(q.front()->left);
            if (q.front()->right)
                q.push(q.front()->right);
            q.pop();
        }
    }
    return res;
}

int main()
{
    return 0;
}