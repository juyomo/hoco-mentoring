'''43. daily temperatures'''
# again i've solved this before but i couldn't recall how i did it...🥲
# Kihyo, study monotnic stack properly!!!!!!!!
class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []

        # initialize result array with zeros (personally i always reckon this part is mint)
        n = len(temperatures) 
        result = [0] * n 

        # traverse temperatures from right to left
        for i in range(n-1, -1, -1):
            # pop elements from stack whilst current temperature is greater or equal
            # this maintains a monotonic decresing stack!!
            while stack and temperatures[stack[-1]] <= temperatures[i]:
                stack.pop()

            if stack: #  # if stack is not empty...
                result[i] = stack[-1] -i # then top element is the next warmer day

            stack.append(i)

        return result