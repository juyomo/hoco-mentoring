n = int(input())
answer = n // 5
remainder = n % 5
if remainder != 0:
    for i in range(0, (n // 5) + 1):
        if remainder % 3 == 0:
            answer += remainder // 3
            break
        remainder += 5
        answer -= 1
    else:
        answer = -1

print(answer)
