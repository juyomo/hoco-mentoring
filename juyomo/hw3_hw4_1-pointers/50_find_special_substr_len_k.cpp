// Author: Juyoung Moon
// https://leetcode.com/problems/find-special-substring-of-length-k/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    bool check(string s) {
        if (s.size() == 0) return true;
        
        char testChar = s[0];
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != testChar) {
                return false;
            }
        }
        return true;
    }
    bool hasSpecialSubstring(string s, int k) {
        for (int i = 0; i <= s.size() - k; i++) {
            if ((i == 0 || s[i-1] != s[i]) &&
                (check(s.substr(i, k))) &&
                (i+k == s.size() || s[i+k-1] != s[i+k])) {
                return true;
            }
        }
        return false;
    }
};
