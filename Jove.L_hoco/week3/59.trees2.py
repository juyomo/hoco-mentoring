'''
5번 6번 문제랑 약간 비슷한거 같아요!
왼쪽은 작은거, 오른쪽은 큰거니까
찾는 값이 작으면 left / 크면 right
'''

from typing import Optional

# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        current_node = root
        
        while current_node:
            if val == current_node.val:
                return current_node
            elif val < current_node.val:
                current_node = current_node.left
            else:
                current_node = current_node.right
                
        return None