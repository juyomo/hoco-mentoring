// Author: Juyoung Moon
// https://leetcode.com/problems/group-anagrams/

// Solved on Aug 18, 2025.

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> counts;
        for (char c : magazine) {
            counts[c]++;
        }

        for (char c : ransomNote) {
            counts[c]--;
            if (counts[c] < 0) {
                return false;
            }
        }

        return true;
    }
};
