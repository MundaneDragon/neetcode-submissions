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
    int diameterOfBinaryTree(TreeNode* root) {

        auto result = 0;
        dfs(root, result);
        return result;
        
    }

    int dfs(TreeNode* root, int& result) {
        if (root == nullptr) {
            return 0;
        }
        auto left =  dfs(root->left, result);
        auto right =  dfs(root->right, result);
        result = max(result, left + right);
        return 1 + max(left,right);

    }
};
