/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    bool sol(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL || q == NULL)
            return false;

        if (p->val == q->val && sol(p->left, q->right) &&
            sol(p->right, q->left))
            return true;

        return false;
    }

public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        TreeNode* p = root->left;
        TreeNode* q = root->right;
        return sol(p, q);
    }
};
