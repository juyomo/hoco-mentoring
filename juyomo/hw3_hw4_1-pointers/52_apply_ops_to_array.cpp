// Author: Juyoung Moon
// https://leetcode.com/problems/apply-operations-to-an-array/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                nums[i-1] = nums[i-1]*2;
                nums[i] = 0;
            }
        }
        vector<int> res(nums.size());
        int writeAt = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                res[writeAt] = nums[j];
                writeAt++;
            }
        }
        while (writeAt < nums.size()) {
            res[writeAt] = 0;
            writeAt++;
        }
        return res;
    }
};
