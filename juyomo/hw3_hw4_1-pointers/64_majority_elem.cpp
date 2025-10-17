// Author: Juyoung Moon
// https://leetcode.com/problems/majority-element/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> counts;
        for (int i = 0; i < nums.size(); i++) {
            counts[nums[i]] = counts[nums[i]]+1;
        }
        for (const auto& pair : counts) {
           if (pair.second > nums.size()/2) {
                return pair.first;
           }
        }
        return -1;
    }
};
