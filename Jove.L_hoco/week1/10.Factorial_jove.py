class Solution:
    # Function to calculate factorial of a number.
    def factorial(self, n: int) -> int:
        # code here
        if n == 0:
            return 1
        elif n != 0:
            self = n
            for i in range(n-1, 0 , -1):
                self = self * i
            return self