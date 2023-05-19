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
    bool isSymmetric(TreeNode* root) {
        return isSame(root -> left, root -> right);
    }
    bool isSame(TreeNode* l, TreeNode* r) {
        if (l == nullptr && r == nullptr) return true;
        else if (l == nullptr || r == nullptr || l -> val != r -> val) return false;
        else {
            bool leftSym = isSame(l -> left, r -> right);
            bool rightSym = isSame(l -> right, r -> left);
            return leftSym && rightSym;
        }
    }
};
