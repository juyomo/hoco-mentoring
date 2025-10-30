from collections import deque
import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
    functions = input()
    n = int(input())
    nums = deque(eval(input()))
    reverse = False
    # print(functions)

    for f in functions:
        if f == "R":
            reverse = not reverse
        elif f == "D":
            if not nums:
                print("error")
                break
            else:
                if reverse:
                    nums.pop()
                else:
                    nums.popleft()
    else:
        if reverse:
            print("".join(str(list(nums)[::-1]).split(" ")))
        else:
            print("".join(str(list(nums)).split(" ")))
