// Author: Juyoung Moon
// https://leetcode.com/problems/find-special-substring-of-length-k/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        char currChar = s[0];
        int lastIdx = 0;
        int idx = 1;
        while (idx < s.size()) {
            if (s[idx] != currChar) {
                if (idx - lastIdx == k) {
                    return true;
                }
                currChar = s[idx];
                lastIdx = idx;
            }
            idx++;
        }
        return (idx - lastIdx == k);
    }
};
