'''49. clear digits'''
class Solution:
    def clearDigits(self, s: str) -> str:
        # we go with stack
        stack = []

        # search s through iteration from the left
        for char in s: # O(n)
            if char.isdigit():
                if stack: # if stack is not empty
                    stack.pop()
            else:
                stack.append(char)

        return ''.join(stack) # O(n)