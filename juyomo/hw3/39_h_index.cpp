// Author: Juyoung Moon
// https://leetcode.com/problems/h-index/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    static bool compare( int a, int b ) {
        return a > b;
    }

    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), compare);
        
        for (int i = citations.size() - 1; i >= 0; i--) {
            if (citations[i] >= i + 1) {
                return i + 1;
            }
        }
        return 0;
        // want to find largest index i s.t.
        // citations[i] >= i + 1
        // return i + 1
        int start = 0;
        int end = citations.size() - 1;


        while (start < end) {
            int mid = (start + end) / 2;
            if (citations[mid] >= mid + 1 && citations[mid + 1] < mid + 1) {
                return mid + 1;
            }
            
            if (citations[mid] < mid + 1) {
                end = mid - 1;
            } else {
                start = mid;
            }
        }
        return start;
    }


};
