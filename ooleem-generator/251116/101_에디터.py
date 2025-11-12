from collections import deque
import sys

# input = sys.stdin.readline

left = deque()
right = deque()

string = input()

for char in string:
    left.append(char)

n = int(input())
for _ in range(n):
    instruction = sys.stdin.readline().split()
    if instruction[0] == "L":
        if left:
            right.appendleft(left.pop())
    elif instruction[0] == "D":
        if right:
            left.append(right.popleft())
    elif instruction[0] == "B":
        if left:
            left.pop()
    elif instruction[0] == "P":
        left.append(instruction[1])

print("".join(left) + "".join(right))
