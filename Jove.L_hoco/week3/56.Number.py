'''
week1에서 풀었던 계단 오르는 문제랑 비슷하네요!
'''
from typing import List

class Solution:
    def tribonacci(self, n: int) -> int:
        if n == 0:
            return 0
        if n == 1 or n == 2:
            return 1

        a, b, c = 0, 1, 1

        for i in range(3, n + 1):
            next_val = a + b + c

            a = b
            b = c
            c = next_val
        return c