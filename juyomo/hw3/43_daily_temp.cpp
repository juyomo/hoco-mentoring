// Author: Juyoung Moon
// https://leetcode.com/problems/daily-temperatures/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<int> indices;
        for (int i = 0; i < temperatures.size(); i++) {
            while (!indices.empty() && temperatures[indices.top()] < temperatures[i]) {
                res[indices.top()] = i - indices.top();
                indices.pop();
            }
            indices.push(i);
        }

        /*for (int i = 0; i < temperatures.size(); i++) {
            for (int j = i + 1; j < temperatures.size(); j++) {
                if (temperatures[j] > temperatures[i]) {
                    res[i] = j - i;
                    break;
                }
            }
        }*/
        return res;
    }
};
