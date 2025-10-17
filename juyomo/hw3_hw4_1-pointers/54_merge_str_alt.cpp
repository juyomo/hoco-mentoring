// Author: Juyoung Moon
// https://leetcode.com/problems/merge-strings-alternately/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;

        int longerLength = max(word1.size(), word2.size());

        for (int i = 0; i < longerLength; i++) {
            if (i < word1.size()) {
                res += word1[i];
            }
            if (i < word2.size()) {
                res += word2[i];
            }
        }

        return res;
    }
};
