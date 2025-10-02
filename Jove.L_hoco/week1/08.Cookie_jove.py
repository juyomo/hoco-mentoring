"""
1. 정렬되있다는 말이 없으니까 정렬부터

2. 탐욕지수,쿠키 를 받을 변수를 만들어 리스트 번호로 활용

3. 만족하는 아이가 나올때마다 별도의 변수에 추가함

4. 값 반환
"""

class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g.sort()
        s.sort()
        answer = 0

        kid = 0
        cookie = 0

        while kid < len(g) and cookie < len(s):
            if s[cookie] >= g[kid]:
                answer += 1
                kid += 1
                cookie += 1
            else:
                cookie += 1
        return answer
