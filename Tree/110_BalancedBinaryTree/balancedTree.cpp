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
    bool isBalanced(TreeNode* root) {
        bool balanced = true;
        checkBalanced(root, balanced);
        
        return balanced;
    }
    
    int checkBalanced(TreeNode* root, bool& balanced) {
        if (root == nullptr || !balanced) return 0;
        
        int LHeight = checkBalanced(root -> left, balanced);
        int RHeight = checkBalanced(root -> right, balanced);
        if (abs(LHeight - RHeight) > 1) balanced = false;

        return max(LHeight, RHeight) + 1;
    }
};
