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
    bool isSubtree(const TreeNode* const root, const TreeNode* const subRoot) const {
        if (subRoot == nullptr) return true;
        if (root == nullptr) return false;

        // Check if trees are identical starting at the current node
        if (isSameTree(root, subRoot)) return true;

        // Recurse on left and right children
        return isSubtree(root->left, subRoot) || 
               isSubtree(root->right, subRoot);
    }

private:
    // Private helper for exact tree comparison
    bool isSameTree(const TreeNode* const p, const TreeNode* const q) const {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr) return false;
        if (p->val != q->val) return false;

        const auto leftMatches = isSameTree(p->left, q->left);
        const auto rightMatches = isSameTree(p->right, q->right);

        return leftMatches && rightMatches;
    }
};
