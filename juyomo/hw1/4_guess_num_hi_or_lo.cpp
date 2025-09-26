// Author: Juyoung Moon
// https://leetcode.com/problems/guess-number-higher-or-lower/

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

class Solution {
    public:
        int guessNumber(int n) {
            return guessHelper(1, n);
        }
    
        int guessHelper(int low, int high) {
            int mid = low + (high - low) / 2;
            int res = guess(mid);
            if (res == 0) {
                return mid;
            } else if (res == 1) {
                return guessHelper(mid + 1, high);
            } else {
                return guessHelper(low, mid - 1);
            }
        }
    };
