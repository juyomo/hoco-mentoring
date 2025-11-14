# dp
# dp[1] = 1
# dp[2] = dp[1] + 1
# dp[3] = dp[2] + dp[1]


# dp[n] = (dp[n-1] + 1)

n = int(input())
a, b = 0, 1

for _ in range(n):
    a, b = b, a + b

print(b % 10007)
