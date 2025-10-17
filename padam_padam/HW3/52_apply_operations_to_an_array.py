'''52. Apply Operations to an Array'''
class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)-1): # keep in mind that nested for-loops give all PAIRS, we want to check CONSECUTIVE elements. The nested loops DO NOT give you consecutive pairs, you stupid Kihyo :(
            if nums[i] == nums[i+1]:
                nums[i] = nums[i]*2
                nums[i+1] = 0

        '''shift all zeros to the end''' # this part was tricky
        count = 0
    
        for k in range(len(nums)):
        
            # if the current element is non-zero
            if nums[k] != 0:
            
                # swap the current element with the 0 at index 'count'
                nums[k], nums[count] = nums[count], nums[k]
            
                # move 'count' pointer to the next position
                count += 1
            
        return nums