'''57. Greatest Common Divisor of Strings'''
# 전혀 easy하지 않은데 easy라고 태그 달아둔 리트코드 관리자들은 진짜 씨게 혼나야한다...
class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        
        def can_construct(pattern: str, target: str) -> bool:
            
            constructed = ""
            # build string by repeating pattern until it reaches target length
            while len(constructed) < len(target):
                constructed += pattern

            return constructed == target

    max_possible_length = min(len(str1), len(str2))

    # try all possible substring lengths from longest to shortest
    for length in range(max_possible_length, 0, -1):
        # extract candidate substring from str1
        candidate = str1[:length]

        if can_construct(candidate, str1) and can_construct(candidate, str2):
            return candidate

    # if no common divisor string is found...
    return ""