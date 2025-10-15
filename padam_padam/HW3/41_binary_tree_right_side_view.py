'''41. Binary Tree Right Side View'''
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from collections import deque

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        # we go with BFS
        # i should just put BFS (and DFS) code snippets into my memory just like 주영님 did
        result = list()

        if root is None:
            return result

        # initialise double-ended queue where you can pop and/or append an element at either the start or the end
        queue = deque([root])

        # process tree level by level
        while queue:
            level_size = len(queue)

            for i in range(level_size):
                current_node = queue.popleft()

                # append the rightmost node of this level to result
                if i == level_size - 1:
                    result.append(current_node.val)
                
                # append children to queue for next level
                if current_node.left:
                    queue.append(current_node.left)
                if current_node.right:
                    queue.append(current_node.right)
        
        return result

# trees (and graphs) are mint but how to appley them is always tricky for me..