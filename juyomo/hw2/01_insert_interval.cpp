// Author: Juyoung Moon
// https://leetcode.com/problems/insert-interval/

// HOCO Mentoring HW 2
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int st = newInterval[0];
        int ed = newInterval[1];

        vector<vector<int>> res;
        int idx = 0;
        while (idx < intervals.size() && intervals[idx][1] < st) {
            res.push_back(intervals[idx]);
            idx++;
        }

        if (idx >= intervals.size()) {
            res.push_back(newInterval);
            return res;
        }

        st = min(st, intervals[idx][0]);
        while (idx < intervals.size() && intervals[idx][0] <= ed) {
            idx++;
        }

        if (idx >= 1) {
            ed = max(intervals[idx-1][1], ed);
        } 

        res.push_back({st, ed});

        // after
        while (idx < intervals.size()) {
            res.push_back(intervals[idx]);
            idx++;
        }
        return res;
    }
};
