'''
약간 퍼즐푸는 느낌? 이네요

이웃한 두 수가 같으면
앞에수는 두배 , 뒤에수는 0이 되고
마지막에 남은 0은 뒤로 빼주는 문제

순서 바꾸는게 복잡해서 그냥 새 배열 만들어서 넣었어요

순회,연산 하면서 나온 일반 숫자들 차례대로 넣어주고
0 횟수만큼 뒤에 추가하기!
'''

from typing import List

class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        n = len(nums)
        
        for i in range(n - 1):
            if nums[i] == nums[i + 1]:
                nums[i] *= 2
                nums[i + 1] = 0
        
        result = []
        for num in nums:
            if num != 0:
                result.append(num)
        
        zeros_count = n - len(result)
        result.extend([0] * zeros_count)
        
        return result