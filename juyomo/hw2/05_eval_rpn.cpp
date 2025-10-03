// Author: Juyoung Moon
// https://leetcode.com/problems/evaluate-reverse-polish-notation/

// HOCO Mentoring HW 2
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    void helper(stack<int>& stk, int& a, int& b) {
        if (stk.size() < 2) {
            return;
        }

        b = stk.top(); stk.pop();
        a = stk.top(); stk.pop();
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int a, b;
        for (string s : tokens) {
            if (s == "*") {
                helper(nums, a, b);
                nums.push(a * b);
            } else if (s == "/") {
                helper(nums, a, b);
                nums.push(a / b);
            } else if (s == "+") {
                helper(nums, a, b);
                nums.push(a + b);
            } else if (s == "-") {
                helper(nums, a, b);
                nums.push(a - b);
            } else {
                nums.push(stoi(s));
            }
        }
        return nums.top();
    }
};
