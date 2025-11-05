from math import ceil


def solution(n, times):
    manager = len(times)  # 1 <= manager <= 100,000
    # times.sort()
    left = min(times) * (ceil(n / manager))
    right = max(times) * (ceil(n / manager))

    # print(left, right)
    mid = (left + right) // 2
    # print(mid)

    while left < right:
        mid = (left + right) // 2
        summ = 0
        for time in times:
            summ += mid // time
        if summ >= n:
            right = mid
        else:
            left = mid + 1
    return left
