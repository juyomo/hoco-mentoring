'''51. Maximum Unique Subarray Sum After Deletion'''
class Solution:
    def maxSum(self, nums: List[int]) -> int:
        # Kadane's algorithm should be used...and i didn't know such alogrithm exists but it's simple and mint!
        # first time to try dynamic programming! (obviously i didn't know how to solve this question at first)
        
        # initially, get unique elements by getting rid of duplicated numbrs, store them into a list
        nums = list(set(nums)) 

        # stores the result (maximum sum found so far)
        res = nums[0]
    
        # maximum sum of subarray ending at current position
        maxEnding = nums[0]

        for i in range(1, len(nums)):
        
            # either extend the previous subarray or start new from current element
            maxEnding = max(maxEnding + nums[i], nums[i])
        
            # update result if the new subarray sum is larger
            res = max(res, maxEnding)
    
        return res

# found out there's a whole wikipeida document called 'maximum subarray problem' (https://en.wikipedia.org/wiki/Maximum_subarray_problem). this is really interesting.