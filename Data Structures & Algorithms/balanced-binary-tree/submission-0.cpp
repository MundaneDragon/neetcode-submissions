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

    vector<int> dfs(TreeNode* root) {
        if (root == nullptr) {
            return {true, 0};
        }

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        auto balanced = left[0] == 1 and right[0] == 1 and std::abs(left[1] - right[1]) <= 1;

        return {balanced ? 1 : 0, 1 + max(left[1], right[1])};
    }

    bool isBalanced(TreeNode* root) {
        return dfs(root)[0];
    }
};
