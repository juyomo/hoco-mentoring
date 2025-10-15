'''54. Merge strings alternately'''
from itertools import zip_longest
# just 'zip' functions cannot handle a case where one of the inputs is longer than the other
# we use 'zip_longest' instead.

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        pairs = list(zip_longest(word1, word2, fillvalue='')) # fillvalue makes shorter string padded with empty strings

        temp = []
        for pair in pairs:
            temp.append(''.join(pair))

        output = ''.join(temp)

        return output