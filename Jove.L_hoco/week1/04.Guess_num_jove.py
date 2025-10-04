# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num):

"""
반 자르고 봤을때 
최소값이나 최대값이 중간값 기준으로 재설정된다!
"""

class Solution(object):
    def guessNumber(self, n):

        
        """
        :type n: int
        :rtype: int
        """
        min = 1
        max = n

        while min <= max:
            mid = (min + max)//2
            check = guess(mid)
            if check == 0:
                return mid
            elif check == 1: #작다
                min = mid + 1
            elif check == -1: #크다 
                max = mid - 1
        return mid


