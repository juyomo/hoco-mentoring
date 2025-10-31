n = int(input())
dp = [0] * n
nums = list(map(int, input().split()))
dp[0] = nums[0]
for i in range(1, len(nums)):
    dp[i] = max(nums[i], nums[i] + dp[i - 1])

print(max(dp))
