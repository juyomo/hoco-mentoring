// Author: Juyoung Moon
// https://leetcode.com/problems/find-the-difference-of-two-arrays/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> first;
        unordered_set<int> second;
        for (int n : nums1) {
            first.insert(n);
        }

        for (int n : nums2) {
            first.erase(n);
            second.insert(n);
        }

        for (int n : nums1) {
            second.erase(n);
        }
        vector<vector<int>> res(2);
        for (int n : first) {
            res[0].push_back(n);
        }
        for (int n : second) {
            res[1].push_back(n);
        }
        return res;
    }
};
