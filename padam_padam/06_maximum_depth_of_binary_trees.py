'''Maximum depth of binary tree'''
# Create the tree for [3,9,20,null,null,15,7]
# root = TreeNode(3)
# root.left = TreeNode(9)
# root.right = TreeNode(20)
# root.right.left = TreeNode(15)
# root.right.right = TreeNode(7)
#
#     ⬇️
#
#       3
#      / \
#     9   20
#        /  \
#       15   7

def maxDepth(self, root: TreeNode) -> int:
    if root is None:
        return 0

    # we go with deque (double-ended queue where you can insert/delete an element either left-end or right-end)
    queue = collections.deque()
    queue.append(root)
    depth = 0

    # this is called Breadth-First Search (BFS)
    while queue:
        depth += 1
        for i in range(len(queue)):
            node = queue.popleft()
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)
                
