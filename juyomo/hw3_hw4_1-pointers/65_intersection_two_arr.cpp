// Author: Juyoung Moon
// https://leetcode.com/problems/intersection-of-two-arrays/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        for (int n : nums1) {
            seen.insert(n);
        }
        unordered_set<int> common;
        for (int n : nums2) {
            if (seen.count(n) > 0) {
                common.insert(n);
            }
        }
        vector<int> res(common.size());
        int idx = 0;
        for (int n : common) {
            res[idx] = n;
            idx++;
        }
        return res;
    }
};
