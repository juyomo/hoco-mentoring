from heapq import heappush, heappop
import sys

input = sys.stdin.readline

v, e = map(int, input().split())
start = int(input())
graph = [[] for _ in range(v + 1)]
shortest = [float("INF")] * (v + 1)

for _ in range(e):
    i, j, dist = map(int, input().split())
    graph[i].append([j, dist])


def dijkstra(start):
    global shortest
    shortest[start] = 0
    queue = []
    heappush(queue, [0, start])
    # accum_dist = 0
    while queue:
        accum_dist, curr_node = heappop(queue)

        for next_node, dist in graph[curr_node]:
            if accum_dist + dist >= shortest[next_node]:
                continue

            shortest[next_node] = accum_dist + dist
            heappush(queue, [accum_dist + dist, next_node])


dijkstra(start)

for i in shortest[1:]:
    if i == float("inf"):
        print("INF")
    else:
        print(i)
