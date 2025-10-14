'''
0예외 생각해서 1부터 제곱해서 숫자비교!
'''

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        for i in range(1, num + 1):
            square = i * i
            
            if square == num:
                return True
            
            if square > num:
                break
                
        return False