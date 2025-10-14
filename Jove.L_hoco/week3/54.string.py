'''
글자 번갈아가면서 합치다가
남는거 통으로 붙이기

빈 정답 리스트에 번갈아가며 하나씩 추가

끝까지 순회하려면 긴 문자 기준으로 횟수를 설정
'''

from typing import List

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        answer = []
        n1, n2 = len(word1), len(word2)
        max_len = max(n1, n2)
        
        for i in range(max_len):
            if i < n1:
                answer.append(word1[i])
            if i < n2:
                answer.append(word2[i])
                
        return "".join(answer)