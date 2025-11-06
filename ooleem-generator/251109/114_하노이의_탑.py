def hanoi(n, start, end):
    rest = 6 - start - end
    if n == 1:
        return [[start, end]]
    else:
        return (
            hanoi(n - 1, start, rest) + hanoi(1, start, end) + hanoi(n - 1, rest, end)
        )


def solution(n):
    return hanoi(n, 1, 3)
