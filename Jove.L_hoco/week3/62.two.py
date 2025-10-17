'''
그냥 2를 반복문으로 쭉 곱했어요!
더 빠른 방법도 있었을까 궁금하네요
'''

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n <= 0:
            return False
            
        power_of_two = 1
        
        while power_of_two < n:
            power_of_two *= 2
            
        return power_of_two == n