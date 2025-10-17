// Author: Juyoung Moon
// https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> s;
        bool positiveExist = false;
        int largestNeg = -101;
        for (int n : nums) {
            if (n > 0) {
                positiveExist = true;
            }
            if (n <= 0 && n > largestNeg) {
                largestNeg = n;
            }
            s.insert(n);
        }

        if (positiveExist) {
            int sum = 0;
            for (int n : s) {
                if (n > 0) {
                    sum += n;
                }
            }
            return sum;
        } else {
            return largestNeg;
        }

    }
};
