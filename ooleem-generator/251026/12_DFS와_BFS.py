from collections import deque

n, m, v = map(int, input().split())
graph = [[] for _ in range(n + 1)]
visited_d = [False] * (n + 1)
visited_b = [False] * (n + 1)
dfs_result = []
bfs_result = []
# print(graph)
for _ in range(m):
    i, j = map(int, input().split())
    graph[i].append(j)
    graph[j].append(i)

for node in graph:
    node.sort()

# print(graph)


def dfs(graph, v, visited):
    visited[v] = True
    dfs_result.append(str(v))
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)


def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True
    while queue:
        v = queue.popleft()
        bfs_result.append(str(v))
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True


dfs(graph, v, visited_d)
bfs(graph, v, visited_b)


print(" ".join(dfs_result))
print(" ".join(bfs_result))
