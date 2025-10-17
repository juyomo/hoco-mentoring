// Author: Juyoung Moon
// https://leetcode.com/problems/search-in-a-binary-search-tree/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int target) {
        if (root == nullptr) {
            return nullptr;
        }

        if (root->val == target) {
            return root;
        }

        if (target < root->val) {
            return searchBST(root->left, target);
        } else {
            return searchBST(root->right, target);
        }
    }
};
