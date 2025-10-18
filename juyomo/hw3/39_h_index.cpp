// Author: Juyoung Moon
// https://leetcode.com/problems/h-index/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend());
        
        for (int i = citations.size() - 1; i >= 0; i--) {
            if (citations[i] >= i + 1) {
                return i + 1;
            }
        }
        return 0;
    }
};
