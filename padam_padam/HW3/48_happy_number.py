'''48. happy number'''
class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set() # track numbers we've seen

        '''outer'''
        while n != 1 and n not in seen:
            seen.add(n)
            sum_of_squares = 0

            '''inner'''
            # calculate sum of squares of digits of n
            while n > 0:
                sum_of_squares += (n % 10)**2 # extract last digit
                n //= 10 # remove last digit

            # update n for the next iteration
            n = sum_of_squares
        
        return n == 1 # n is the happy number? then return true.