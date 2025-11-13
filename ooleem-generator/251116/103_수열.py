n, k = map(int, input().split())
temperatures = list(map(int, input().split()))
dp = []
dp.append(sum(temperatures[:k]))
max_t = dp[0]

if k == n:
    print(max_t)
else:
    for i in range(1, n - k + 1):
        dp.append(dp[i - 1] - temperatures[i - 1] + temperatures[i - 1 + k])
        max_t = max(dp[i], max_t)

    print(max_t)
