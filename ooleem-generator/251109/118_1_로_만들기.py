# X//3 -> 3
# X//2 -> 2
# X-1


# dp[10] = 1 + dp[9]
# dp[9] = 1 + dp[3]
# dp[3] = 1 + dp[1]
# dp[1] = 0
# dp[2] = 1 + dp[1]
# dp[3] = 1 + dp[1]
# dp[4] = min(1 + dp[2], 1+dp[3])
# dp[5] = 1 + dp[4]
# dp[6] = min(1+dp[2])

n = int(input())
dp = [0] * (n + 1)
dp[1] = 0
for i in range(2, n + 1):
    candidate = []
    if i % 3 == 0:
        candidate.append(dp[i // 3] + 1)
    if i % 2 == 0:
        candidate.append(dp[i // 2] + 1)

    candidate.append(dp[i - 1] + 1)

    dp[i] = min(candidate)
    # print(dp)

print(dp[n])
