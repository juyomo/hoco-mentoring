'''
중복만 날리면 된다!
set으로 변환
'''
from typing import List

class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        set1 = set(nums1)
        set2 = set(nums2)
        
        return [list(set1 - set2), list(set2 - set1)]