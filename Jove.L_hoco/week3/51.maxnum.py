'''
양수만 골라서 더하기
양수 없으면 최대값 하나
'''

from typing import List

class Solution:
    def maxSum(self, nums: List[int]) -> int:
        unique_nums = set(nums)
        
        positive_sum = 0
        for num in unique_nums:
            if num > 0:
                positive_sum += num
        
        if positive_sum > 0:
            return positive_sum
        else:
            return max(nums)