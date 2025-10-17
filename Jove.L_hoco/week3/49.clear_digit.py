'''
리스트에 일단 저장
스택쓰면 마지막꺼 나오는 원리 사용!
if문으로 숫자랑 문자 확인하기 - isdigit() 사용법
마지막에는 문자열 합치기
'''

class Solution:
    def clearDigits(self, s: str):
        result_stack = []
        
        for char in s:
            if char.isdigit():
                if result_stack:
                    result_stack.pop()
            else:
                result_stack.append(char)
                
        return "".join(result_stack)