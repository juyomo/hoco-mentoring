# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

'''
    일단 노드? 는 햇갈리니까 배열로 바꿔주자
    그리고 배열에서 앞,뒤 값 비교하고 반환하기!
'''

class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: bool
        """
        pal_list = []
        current = head
        while current:
            pal_list.append(current.val)
            current = current.next
        for i in range( len(pal_list) // 2 ):
            if pal_list[i] != pal_list[len(pal_list)-1-i]:
                return False

        return True