'''40. reverse linked list'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        node = head
        pre = None

        while node:
            next = node.next
            node.next = pre

            pre = node
            node = next
        
        return pre

# actually recusrive function seems easier for me..
def reverseList(self, head) -> ListNode:
    def reversef(node, prev=None):
        if not node:
            return prev
        next, node.next = node.next, prev
        return reversef(next, node)

    return reversef(head)