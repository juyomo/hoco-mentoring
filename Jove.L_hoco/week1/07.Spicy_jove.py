"""
가장 작은거 2개를 뽑아서 연산해야함
힙 정렬처럼 딱 2개만 뽑아서 연산해보자!

(힙 정렬 구현하는거는 아직 모르겠네요.. 그냥 import 해서 쓰는거로)
"""

import heapq

def solution(scoville, K):

    heapq.heapify(scoville)

    i = 0
    while scoville[0] < K:
        if len(scoville) < 2:
            return -1
        else:
            min1 = heapq.heappop(scoville)
            min2 = heapq.heappop(scoville)
            heapq.heappush(scoville , min1 + 2*min2)
        i += 1
    if scoville[0] < K:
        return -1
    else:
        return i