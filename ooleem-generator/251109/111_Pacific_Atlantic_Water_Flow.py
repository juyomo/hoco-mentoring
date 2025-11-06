# bfs..?
from collections import deque


class Solution:

    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        m, n = len(heights), len(heights[0])  # m correspond r, n-c
        directions = [(-1, 0), (0, -1), (1, 0), (0, 1)]
        output = {}
        for i in range(m):
            for j in range(n):
                visited = [[False] * n for _ in range(m)]
                queue = deque()
                queue.append([i, j])
                po = False
                ao = False
                while queue:
                    for _ in range(len(queue)):
                        r, c = queue.popleft()
                        visited[r][c] = True
                        if r == 0 or c == 0:
                            po = True
                        if r == m - 1 or c == n - 1:
                            ao = True
                        if output.get((r, c)):
                            output[(i, j)] = True
                            break

                        for dr, dc in directions:
                            if 0 <= r + dr < m and 0 <= c + dc < n:
                                if (
                                    visited[r + dr][c + dc] == False
                                    and heights[r][c] >= heights[r + dr][c + dc]
                                ):
                                    visited[r + dr][c + dc] = True
                                    queue.append([r + dr, c + dc])
                if ao and po:
                    output[(i, j)] = True

        return list(output.keys())
