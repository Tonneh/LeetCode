//
// Created by Tony on 9/27/2022.
//
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

vector<vector<int>> levelOrder(TreeNode* root)
{
    if (!root)
        return {};
    queue<TreeNode*> q;
    vector<vector<int>> res;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(q.front()->val);
            if (q.front()->left)
                q.push(q.front()->left);
            if (q.front()->right)
                q.push(q.front()->right);
            q.pop();
        }
        res.push_back(v);
    }
    return res;
}

int main()
{
    return 0;
}