// Author: Juyoung Moon
// https://www.geeksforgeeks.org/problems/factorial5739/1

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    int factorial(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
};
