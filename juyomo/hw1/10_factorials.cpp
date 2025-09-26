// Author: Juyoung Moon
// https://www.geeksforgeeks.org/problems/factorial5739/1

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

// Iterative, recursive 풀이 둘 다 해보았습니다! 참고해주세요 :)

class Solution {
public:
    int factorialIterative(int n) {
        int ans = 1;
        for (int i = 2; i <= n; i++) {
            ans *= i;
        }
        return ans;
    }
        
    int factorialRecursive(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
    
    int factorial(int n) {
        // return factorialRecursive(n);
        return factorialIterative(n);
    }
};
