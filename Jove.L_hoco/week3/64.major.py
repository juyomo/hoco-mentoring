f'''
55번 풀때 알게된 Counter 함수 사용해서 풀어봤어요!
과반수가 확실히 존재한다면, 가장 많이 나온수가 과반수니까
Counter로 각 요소별 몇번 나왔는지 체크하고
최대값 고르는 식으로 했어요!
'''
from collections import Counter

class Solution:
    def majorityElement(self, nums: List[int]) -> int:

        map = Counter(nums)
        majority_element = max(map.keys(), key=map.get)
        
        return majority_element