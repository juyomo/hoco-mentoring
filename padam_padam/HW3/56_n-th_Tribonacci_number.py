'''56. N-th Tribonacci Number'''
class Solution:
    def tribonacci(self, n: int) -> int:
        if n == 0:
            return 0
        
        elif n == 1 or n ==2:
            return 1
        
        else:
            output = self.tribonacci(n-1) + self.tribonacci(n-2) + self.tribonacci(n-3) # T(3^n)
            return output
        # recursive functions are cool for small cases but computationally inefficient on large N cases

# we should take an approach called sliding window (plus: have a look at 'memonization' and simultaneous vs. sequential assignment)
class Solution:
    def tribonacci(self, n: int) -> int:
        # base cases
        t0 = 0
        t1 = 1
        t2 = 1
        
        for i in range(n):
            t0, t1, t2 = t1, t2, t0 + t1 + t2 # you should use simultaneous(=multiple) assignment plus know how it works. it's not just about assigning multiple values. (spoiler: it's actually for swapping values).
        
        return t0