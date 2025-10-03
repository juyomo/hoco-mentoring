// Author: Juyoung Moon
// https://leetcode.com/problems/evaluate-reverse-polish-notation/

// HOCO Mentoring HW 2
// https://github.com/juyomo/hoco-mentoring

class Solution {
private:
    void getNums(stack<int>& stk, int& a, int& b) {
        if (stk.size() < 2) {
            return;
        }

        b = stk.top(); stk.pop();
        a = stk.top(); stk.pop();
    }

public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int a, b;

        for (string s : tokens) {
            if (s == "+") {
                getNums(nums, a, b);
                nums.push(a + b);
            } else if (s == "-") {
                getNums(nums, a, b);
                nums.push(a - b);
            } else if (s == "*") {
                getNums(nums, a, b);
                nums.push(a * b);
            } else if (s == "/") {
                getNums(nums, a, b);
                nums.push(a / b);
            } else {
                nums.push(stoi(s));
            }
        }
        return nums.top();
    }
};
