// Author: Juyoung Moon
// https://leetcode.com/problems/binary-tree-right-side-view/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        while (q.size() > 0) {
            TreeNode* curr = q.front().first;
            if (curr != nullptr) {
                int depth = q.front().second;
                int val = curr->val;
              	
                if (res.size() < depth + 1) {
                    res.push_back(val);
                }

                q.push({curr->right, depth +1});
                q.push({curr->left, depth +1});
            }
            q.pop();
        }
        return res;
    }
};
