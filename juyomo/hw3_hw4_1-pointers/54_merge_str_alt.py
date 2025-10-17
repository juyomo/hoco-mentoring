# Author: Juyoung Moon
# https://leetcode.com/problems/merge-strings-alternately/

# HOCO Mentoring HW 3
# https://github.com/juyomo/hoco-mentoring

class Solution(object):
    def mergeAlternately(self, word1, word2):
        word12 = []
        for i in range(len(word1+word2)):
            if i < len(word1):
                word12.append(word1[i])
            if i < len(word2):
                word12.append(word2[i])
        return "".join(word12)
