# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
    not root는 텅 비었을때니까 거리를 0 반환
    왼쪽 오른쪽 깊이 비교할 변수를 만들어주고 maxDepth 함수로 깊이 찾고
    max() 로 비교해서 자기 자신 거리인 1 더해서 반환

    깊이 계산 알고리즘을 어떻게 짤지 한참을 고민했는데
    검색해보니까 그냥 이미 함수가 있었다..

    뭔가 허무하기는 한데 어떻게 직접 구현하는것도 가능할지도..?
"""

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        if not root:
            return 0
        left_dep = self.maxDepth(root.left)
        right_dep = self.maxDepth(root.right)

        return 1 + max(left_dep , right_dep)
        