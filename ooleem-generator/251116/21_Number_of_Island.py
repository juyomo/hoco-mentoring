from collections import deque


class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m, n = len(grid), len(grid[0])  # m -> r, n -> c
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        count = 0
        visited = [[False] * n for _ in range(m)]
        for i in range(m):
            for j in range(n):
                if grid[i][j] == "1" and not visited[i][j]:
                    queue = deque()
                    visited[i][j] = True
                    queue.append([i, j])
                    while queue:
                        for _ in range(len(queue)):
                            r, c = queue.pop()
                            for dr, dc in directions:
                                newr, newc = r + dr, c + dc
                                if 0 <= newr < m and 0 <= newc < n:
                                    if (
                                        grid[newr][newc] == "1"
                                        and not visited[newr][newc]
                                    ):
                                        visited[newr][newc] = True
                                        queue.append([newr, newc])
                    count += 1
                    # print(visited)

        return count
