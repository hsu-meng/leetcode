/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> tree;
        inorder(root, tree);
        return tree;
    }
    void inorder(TreeNode* root, vector<int> &tree) {
        if (!root) return;
        if (root -> left) inorder(root -> left, tree);   // left of tree
        tree.push_back(root->val);                       // root of tree
        if (root -> right) inorder(root -> right, tree); // right of tree
    }
};
