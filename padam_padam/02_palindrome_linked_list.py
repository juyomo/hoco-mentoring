'''Palindrome linked list'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        # Find the middle of the linked list using slow and fast pointers
        slow = head
        fast = head.next
      
        # Move slow pointer one step and fast pointer two steps each iteration
        # When fast reaches the end, slow will be at the middle
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
      
        # Reverse the second half of the linked list
        # Initialize pointers for reversal
        pre = None
        cur = slow.next
      
        # Reverse the second half by changing the direction of pointers
        while cur:
            t = cur.next  # Store next node
            cur.next = pre  # Reverse the pointer
            pre = cur  # Move previous forward
            cur = t  # Move current forward
      
        # Compare the first half with the reversed second half
        # previous now points to the head of reversed second half
        while pre:
            if pre.val != head.val:
                return False
            pre = pre.next
            head = head.next
      
        return True


# 1      2        3            2                   1
# slow
# (head)
#        fast
#        (head.next)

# while...
# 1      2        3             2                  1
# slow
#        fast     fast.next

# ⬇️

# 1      2         3           2                   1
#        slow.next
#                              fast.next.next

# --------------

# (reversed)

# 1      2         3           2                   1
#        slow
#                  cur
#                  (slow.next)

# ⬇️ 리스트 끝에서 거꾸로 링크를 연결해준다

# 1      2         3           2                   1
#        slow
#                  cur         t
#                              (=cur.next)

# cur.next = 2
# cur.next = None

# 1     2          3       None
#                  cur

# pre = cur
# 1     2          3       None   # 여기서부터 왼쪽(=반대) 방향으로 보기
#                  pre

# cur = t
# 1     2          3       None # 1 왼쪽에 None이 있다고 가정
#       cur

# # iteration 1 끝남
# # cur이 아직 존재(=true)하니깐 iteration 2  시작

# t = cur.next
# 1            2           3       None # 1 왼쪽에 None이 있다고 가정
# cur.next     cur

# cur.next = pre
# 1            2           3       None # 1 왼쪽에 None이 있다고 가정
#              cur         pre
#                          (cur.next)

# pre = cur
# 1            2           3       None # 1 왼쪽에 None이 있다고 가정
#              pre
#              (cur)

# cur = t
# 1            2           3       None # 1 왼쪽에 None이 있다고 가정
# t
# (cur)

# # iteration 3
# pre : 2 (-> 3 -> None)
# cur : 1 (-> None)

# t = cur.next
# None        1            2            3       None # 1 왼쪽에 None 있다고 가정했으니깐..
# t
# cur.next

# cur.next = pre
# None        1            2            3       None # 1 왼쪽에 None 있다고 가정했으니깐..
# t          cur           pre
#                          (cur.next)

# pre = cur
# None        1            2            3       None # 1 왼쪽에 None 있다고 가정했으니깐..
# t           pre
#             (cur)

# cur = t
# None        1            2            3       None # 1 왼쪽에 None 있다고 가정했으니깐..
# cur         pre          
#             (cur.next)

# # iteration 끝
# # 첫 절반이란 거꾸로 된 나머지 절반을 비교시작

# pre.val == head.val -> True
# None        1           2             3             2        1  None
#             head.val                                        pre.val

# pre = pre.next
# head = head.next
# None        1           2             3             2        1  None
#                         head                        pre
#                         (head.next)                 (pre.val)
# 마찬가지로 비교. 똑같!

# 따라서 True 출력.