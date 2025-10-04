// Author: Juyoung Moon
// https://leetcode.com/problems/assign-cookies/

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    int findContentChildren(vector<int>& kids, vector<int>& cookies) {
        sort(kids.begin(), kids.end());
        sort(cookies.begin(), cookies.end());

        int k = 0;
        int c = 0;
        int satisfied = 0;

        while (k < kids.size() && c < cookies.size()) {
            if (kids[k] <= cookies[c]) {
                satisfied++;
                k++;
            } 
            
            c++;
        }

        return satisfied;
    }
};
    