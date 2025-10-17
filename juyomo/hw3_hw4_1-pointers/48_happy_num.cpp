// Author: Juyoung Moon
// https://leetcode.com/problems/happy-number/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
private:
    int getSumOfDigitsSquared(int n) {
        int res = 0;
        while (n > 0) {
            int tmp = n % 10;
            res += (tmp * tmp);
            n = n / 10;
        }
        return res;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (true) {
            seen.insert(n);
            n = getSumOfDigitsSquared(n);
            if (n == 1) {
                return true;
            }
            if (seen.find(n) != seen.end()) {
                return false;
            }
        }
        return false;
    }
};
