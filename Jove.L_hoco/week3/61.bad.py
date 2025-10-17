'''
맞는거 같기는 한데 시간초과가 뜨네요?
더 효율적이게 하려면 어떻게 해야될지 생각해봐야겠어요
중간을 찍고 반반 나누면서 탐색하면 좀더 빠를까요?
구현 부분에서 막히네요..ㅠㅠ
'''

# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        for version in range(1, n + 1):
            if isBadVersion(version):
                return version