'''53. Find the Difference of Two Arrays'''
class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        final_ans = list()
        ans0 = list()
        ans1 = list() 

        for i in nums1: # O(M) because of iteration
            if i not in nums2: # O(N) as it searcehs through the list
                ans0.append(i)

        ans0 = list(set(ans0))
        final_ans.append(ans0)

        for j in nums2: # O(M) because of iteration
            if j not in nums1: # O(N) as it searcehs through the list
                ans1.append(j)
        
        ans1 = list(set(ans1))
        final_ans.append(ans1)

        return final_ans

        # this worked and passed the test but TC is O(M * N). leetcode says the runtime is 393ms 😵‍💫 (basically instant for humans, innit? yeah i'm just coping)