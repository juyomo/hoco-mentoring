'''
풀면서 막막하던 문제..!

하나의 통 문자열에서 연속된 부분만 때내는 과정이 햇갈렸네요
리스트처럼 s의 몇번째 문자열인지 확인하면서 비교하고,
한 블럭 길이를 k랑 비교하는 식으로 풀었어요
이미 확인한 앞부분 글자는는 다시 안보고 넘어가기!
'''

class Solution:
    def hasSpecialSubstring(self, s: str, k: int) -> bool:
        n = len(s)
        i = 0
        
        while i < n:
            j = i
            while j < n and s[j] == s[i]:
                j += 1
            
            block_length = j - i
            
            if block_length == k:
                return True
            
            i = j
            
        return False