/*
Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
Note: A leaf is a node with no children.

Example 1:

Input: root = [3,9,20,null,null,15,7]
Output: 2

Example 2:

Input: root = [2,null,3,null,4,null,5,null,6]
Output: 5
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;

        int left_min = minDepth(root->left);
        int right_min = minDepth(root->right);
        if (left_min == 0 || right_min == 0) {
            return left_min + right_min + 1;
        }

        return min(left_min,right_min) + 1;
    }
};
