'''50. find special substring of length k'''
class Solution:
    def hasSpecialSubstring(self, s: str, k: int) -> bool:
        # initially i thought checking each character in 's' by appending and/or popping the incoming input one-by-one whilst detecing whether the input is the same character with the previous one to verify all conditions
        # in other words, to check each character in an incremental way, which made me realised it gets quite complex and computationally burdensome...
        # it turned out that i need to take an approach called 'two-pointer technique'.
        # why? all we need to do is to isolate a valid substring as a chunk because the chunk(=the consecutive segments) itself satisfies with the given conditions.
        # so, we set the start pointer 'left' to mark the start of a segment that's to be consecutive and the end pointer 'right' to mark the segment ends when we ecnoutner a different character.
        # the length of each segment is 'right' - 'left', if this equals 'k', voila, that is the answer.
        
        left = 0
        string_length = len(s)
      
        # iterate through the string to find groups of consecutive identical characters
        while left < string_length:
            right = left
          
            # extend right pointer while characters are the same as the character at left
            while right < string_length and s[right] == s[left]:
                right += 1
          
            # check if current group has exactly k consecutive identical characters
            if right - left == k:
                return True
          
            # move left pointer to the start of next different character group
            left = right
      
        return False

        # whoever they are, they must've been a genius when they developed this technique that i had no idea of at all...