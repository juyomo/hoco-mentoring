# Practice : dijkstra

from heapq import heappush, heappop

n = int(input())
m = int(input())
graph = [[] for _ in range(n + 1)]
costs = [10**15] * (n + 1)  # 각 노드까지 가는 데 드는 비용 테이블


for _ in range(m):
    i, j, cost = map(int, input().split())
    graph[i].append((j, cost))

# print(graph)


def dijkstra(start):
    global costs
    queue = []
    costs[start] = 0
    heappush(queue, (0, start))
    while queue:
        # for _ in range(len(queue)):
        accum_cost, present_node = heappop(queue)
        if costs[present_node] < accum_cost:
            continue

        for next_node, cost in graph[present_node]:
            if costs[next_node] > accum_cost + cost:
                costs[next_node] = accum_cost + cost
                heappush(queue, (accum_cost + cost, next_node))
            # print(costs)


start, end = map(int, input().split())

dijkstra(start)

# print(costs)

print(costs[end])
