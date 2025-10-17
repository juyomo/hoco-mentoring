// Author: Juyoung Moon
// https://leetcode.com/problems/leaf-similar-trees/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    void getLeaves(TreeNode* root, vector<int>& leaves) {
        if (root == nullptr) {
            return;
        }

        if (root->left == nullptr && root->right == nullptr) {
            leaves.push_back(root->val);
            return;
        }

        if (root->left != nullptr) {
            getLeaves(root->left, leaves);
        }
        if (root->right != nullptr) {
            getLeaves(root->right, leaves);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;

        getLeaves(root1, v1);
        getLeaves(root2, v2);

        if (v1.size() != v2.size()) {
            return false;
        }

        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i]) {
                return false;
            }
        }
        return true;
    }
};
