// Author: Juyoung Moon
// https://leetcode.com/problems/valid-perfect-square/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    bool isPerfectSquare(int num) {
        for (int i = 1 ; i <= num/i; i++) {
            if (i*i == num) {
                return true;
            }
        }
        return false;
    }
};
