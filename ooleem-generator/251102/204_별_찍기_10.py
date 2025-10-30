def recursion(n, i, j):
    global matrix
    global directions
    if n == 3**0:
        matrix[i][j] = "*"
    else:
        for dr, dc in directions:
            recursion(n // 3, i + dr * (n // 3), j + dc * (n // 3))


n = int(input())
matrix = [[" "] * n for _ in range(n)]
directions = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]
recursion(n, n // 2, n // 2)
for i in range(n):
    print("".join(matrix[i]))
