# [False, False]
# [[], [0]]
# [[1], [0]]

# [2,0] [0,1]

# [[1] [] [0]]
# [[2],[0],[]]

# bfs

from collections import deque


class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        conditions = [[] for _ in range(numCourses)]
        curriculum = [[] for _ in range(numCourses)]
        taken = [False] * numCourses
        for a, b in prerequisites:
            conditions[a].append(b)
            curriculum[b].append(a)

        # print(conditions)

        queue = deque()

        for idx, condition in enumerate(conditions):
            if condition == []:
                queue.append(idx)
                taken[idx] = True

        # print(taken)

        if not queue:
            return False

        while queue:
            # print(queue)
            for _ in range(len(queue)):
                lecture = queue.popleft()
                for i in curriculum[lecture]:
                    if not taken[i]:
                        for j in conditions[i]:
                            if not taken[j]:
                                break
                        else:
                            taken[i] = True
                            queue.append(i)
        # print(taken)

        if taken == [True] * numCourses:
            return True
        else:
            return False
