# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def mergeTwoLists(self, list1, list2):

        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        """
        일단 노드 2개를 합쳐야 하는 느낌이니까
        하나의 노드에서 양쪽으로 뻗어나가는 공통 시작점 start 노드를 만들자
        
        그리고 현재 노드를 임시저장해서
        list1이나list2 노드를 알맞은 다음 노드랑 연결시키자 - 이걸반복

        list1노드의 값이 작거나 같으면 먼저 와야한다는 의미니까
        현 노드의 다음인 current.next를 list1로 지정하고
        list1는 다음 값으로 넘어가기
        
        list2 가 더 작을때도 같은 방법으로 처리하자
        
        일단 임시 변수인 current에 값을 넣어줬고
        list1이나 list2의 값을 최신화했다
        
        이제 current.next로 새로운 값을 받을 준비를 해보자
        
        그런데 while문에서 and를 사용했으니까
        list1이나 list2 중에서 하나는 비어서 none이 되고 거짓이 되서 반복이 중단됨
        
        그럼 반대쪽 리스트 하나가 남네?
        if list1 은 list1이 참일때, 즉 뭔가 남아있을때 실행되니까
        list1,list2 중에서 남는 리스트를 current.next에 통으로 넣어버리자
        
        어차피 남는건 딱 리스트 하나고 정렬도 되있으니까.
        
        그리고 공통시작점 start에서 갈라저 나왔는데
        start는 그냥 내가 추가한거니까
        start를 제외하고 시작하기위해 start 대신 start.next를 반환하기.
        """
        start = ListNode()
        current = start
        while list1 and list2:
            if list1.val <= list2.val:
                current.next = list1
                list1 = list1.next
            else:
                current.next = list2
                list2 = list2.next
            current = current.next
        if list1:
            current.next = list1
        elif list2:
            current.next = list2

        return start.next