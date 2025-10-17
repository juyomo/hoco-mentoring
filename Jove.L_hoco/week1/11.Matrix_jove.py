class Solution:
    def transpose(self, mat):
        # code here
        solution = []
        self = len(mat)
        for i in range(self):
            inside = []
            for j in range(self):
                inside.append(mat[j][i])
            solution.append(inside)
        return solution
