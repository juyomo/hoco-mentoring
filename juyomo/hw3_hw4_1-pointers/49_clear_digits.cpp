// Author: Juyoung Moon
// https://leetcode.com/problems/clear-digits/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    string clearDigits(string s) {
        string stk;
        for (char c : s) {
            if (isdigit(c)) {
                if (stk.size() > 0) {
                    stk.pop_back();
                }
            } else {
                stk.push_back(c);
            }
        }

        return stk;
    }
};
