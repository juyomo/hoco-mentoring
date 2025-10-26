# Definition for a binary tree node.
from collections import deque


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        answer = []
        queue = deque()
        if root:
            queue.append(root)
            while queue:
                same_level = []
                for _ in range(len(queue)):
                    node = queue.popleft()
                    same_level.append(node.val)
                    if node.left:
                        queue.append(node.left)
                    if node.right:
                        queue.append(node.right)
                answer.append(same_level)

        return answer
