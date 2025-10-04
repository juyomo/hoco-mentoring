"""
1,2 일때만 구해두고
점화식으로 그냥 계산해서 풀었어요
이렇게 풀어도 되는걸까요? 코딩 보다는 수학으로 푼 느낌이네요요
"""

class Solution(object):
    def climbStairs(self, n):
        if n <= 2:
            return n
        sequence = [0] * (n + 1)
        
        sequence[1] = 1
        sequence[2] = 2 
        
        for i in range(3, n + 1):
            sequence[i] = sequence[i-1] + sequence[i-2]
            
        return sequence[n]