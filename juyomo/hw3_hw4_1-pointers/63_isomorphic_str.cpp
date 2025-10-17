// Author: Juyoung Moon
// https://leetcode.com/problems/isomorphic-strings/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> seen;
        unordered_map<char, char> seen2;
        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];
            if (seen.find(a) == seen.end()) {
                seen[a] = b;
            } else if (seen[a] != b) {
                return false;
            }
            if (seen2.find(b) == seen2.end()) {
                seen2[b] = a;
            } else if (seen2[b] != a) {
                return false;
            }
            
        }
        return true;
    }
};
