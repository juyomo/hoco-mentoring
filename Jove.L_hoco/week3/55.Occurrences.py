'''
이것저것 해봤었는데
counter 함수 쓰니까 바로 풀리네요...
생각보다 대부분 기능은 함수가 있어서 신기하네요

마지막은 53번 풀때 썼던 set으로 중복 날려서 비교!
'''

from typing import List
from collections import Counter

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        freq_map = Counter(arr)
        frequencies = freq_map.values()
        return len(frequencies) == len(set(frequencies))