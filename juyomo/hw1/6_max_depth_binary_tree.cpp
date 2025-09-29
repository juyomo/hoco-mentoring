// Author: Juyoung Moon
// https://leetcode.com/problems/maximum-depth-of-binary-tree

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    int findMax(int a, int b) {
        return a > b ? a : b;
    }

    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        } else {
            return 1 + findMax(maxDepth(root->left), maxDepth(root->right)); 
        }
    }
};
