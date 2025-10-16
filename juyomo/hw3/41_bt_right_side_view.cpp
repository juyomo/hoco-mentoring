// Author: Juyoung Moon
// https://leetcode.com/problems/binary-tree-right-side-view/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {

typedef pair<TreeNode*, int> TreeNodeContainer;
private:
    void insertPair(TreeNode* root, vector<TreeNodeContainer>& elemsAndDepths) {
        if (root == nullptr) {
            return;
        }

        queue<TreeNodeContainer> q;
        TreeNodeContainer ctn; // contains pointer to node and depth of that node
        q.push(make_pair(root, 0)); 

        while (!q.empty()) {
            ctn = q.front();
            q.pop();

            // process curr
            elemsAndDepths.push_back(ctn);

            TreeNode* curr = ctn.first;
            int depth = ctn.second + 1;
            
            if (curr->right != nullptr) { q.push(make_pair(curr->right, depth)); }
            if (curr->left != nullptr) { q.push(make_pair(curr->left, depth)); }
        }
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr) {
            return {};
        }

        vector<TreeNodeContainer> elemsAndDepths;
        vector<int> res;
        insertPair(root, elemsAndDepths);

        int lookFor = 0;
        for (int i = 0; i < elemsAndDepths.size(); i++) {
            TreeNodeContainer ctn = elemsAndDepths[i];
            cout << ctn.first->val << " " << ctn.second << endl;
            if (ctn.second == lookFor) {
                res.push_back(ctn.first->val);
                lookFor++;
            }
        }

        return res;
    }
};
