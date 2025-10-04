'''
for i in magazine 같은 방법으로
magazine 의 글자를 순회하며 평가하기?

그 앞에 if문으로 len magazine 이 ransomeNote 글자수보다 많을때만 체크해주는 방식?
그런데 뭔가 비효율적인거 같네..

아 그냥 for문으로 magazine 을 순회하면서
magazine , ransomeNote의 각 알파뱃의 숫자를 배열로 만들고
알파벳 표 만들어서 각 문자별 수만 반복문으로 비교해보자
'''

class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        maga_list = [0]*26
        ransom_list = [0]*26
        for i in magazine:
            maga_list[ord(i)-ord('a')] += 1
        for i in ransomNote:
            ransom_list[ord(i)-ord('a')] += 1
        for i in range(26):
            if ransom_list[i] <= maga_list[i]:
                self = True
            else:
                self = False
                break
        return self