// Author: Juyoung Moon
// https://leetcode.com/problems/binary-tree-level-order-traversal/

// HOCO Mentoring HW 2
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*, int>> tovisit;
        if (root == nullptr) {
            return {};
        }

        vector<vector<int>> ans;
        tovisit.push(make_pair(root, 0));

        while (!tovisit.empty()) {
            auto curr = tovisit.front();
            int depth = curr.second;
            tovisit.pop();

            if (curr.first != nullptr) {
                if (ans.size() <= depth) {
                    ans.resize(depth + 1);
                }
                ans[depth].push_back(curr.first->val);
                tovisit.push(make_pair(curr.first->left, depth+1));
                tovisit.push(make_pair(curr.first->right, depth+1));
            }
        }
        return ans;
    }
};
