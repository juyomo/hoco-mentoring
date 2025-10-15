'''Transpose a matrix'''
class Solution:
    def transpose(self, mat):
        return [list(temp) for temp in zip(*mat)] # the asterisk makes a variable iterable