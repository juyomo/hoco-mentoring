// Author: Juyoung Moon
// https://leetcode.com/problems/clear-digits/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    string clearDigits(string s) {
        int idx = 0;
        while (idx < s.size()) {
            if (isdigit(s[idx])) {
                s.erase(idx, 1);
                if (idx >= 1) {
                    s.erase(idx-1, 1);
                    idx--;
                }
            } else {
                idx++;
            }
        }
        return s;
    }
};
