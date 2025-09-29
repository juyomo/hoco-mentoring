// Author: Juyoung Moon
// https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>>& mat, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int tmp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = tmp;
            }
        }
    }
};
