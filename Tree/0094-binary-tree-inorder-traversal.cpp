class Solution {
    vector<int> inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return ans;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
        return ans;
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        return inorder(root, ans);
    }
};
