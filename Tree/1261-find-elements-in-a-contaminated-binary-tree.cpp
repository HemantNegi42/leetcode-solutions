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
class FindElements {
    unordered_set<int> st;

public:
    void recover(TreeNode* root) {
        if (!root)
            return;

        if (root->right != NULL) {
            root->right->val = 2 * root->val + 2;
            st.insert(root->right->val);
        }
        if (root->left != NULL) {
            root->left->val = 2 * root->val + 1;
            st.insert(root->left->val);
        }
        recover(root->right);
        recover(root->left);
    }
    FindElements(TreeNode* root) {
        if (root) {
            root->val = 0;
            st.insert(0);
            recover(root);
        }
    }

    bool find(int target) {
        if (st.find(target) != st.end())
            return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
