// Author: Juyoung Moon
// https://leetcode.com/problems/first-bad-version/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;

        int mid;
        while (start < end) {
            mid = start + (end - start) / 2;

            if (!isBadVersion(mid)) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start;
    }
};
