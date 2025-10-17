// Author: Juyoung Moon
// https://leetcode.com/problems/unique-number-of-occurrences/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> counts;
        for (int n : arr) {
            counts[n]++;
        }

        unordered_set<int> seen;
        for (const auto& c : counts) {
            int n = c.second;
            if (seen.find(n) != seen.end()) {
                return false;
            }
            seen.insert(n);
        }
        return true;
    }
};
