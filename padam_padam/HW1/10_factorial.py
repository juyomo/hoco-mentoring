'''Factorial'''
class Solution:
    # Function to calculate factorial of a number.
    def factorial(self, n: int) -> int:
        # recurrrrrrrrrrrrrrrrrrrrsion
        return n * self.factorial(n-1) if n > 1 else 1
