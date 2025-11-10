n = int(input())
positive = []
negative = []
iszero = False
answer = 0
for _ in range(n):
    num = int(input())
    if num > 0:
        positive.append(num)
    elif num < 0:
        negative.append(num)
    else:
        iszero = True

positive.sort()
negative.sort(reverse=True)

if len(positive) > 1:
    while len(positive) > 1:
        a = positive.pop()
        b = positive.pop()
        if a != 1 and b != 1:
            answer += a * b
        else:
            answer += a
            answer += b
if len(positive) > 0:
    answer += positive.pop()

if len(negative) > 1:
    while len(negative) > 1:
        a = negative.pop()
        b = negative.pop()
        answer += a * b
if len(negative) > 0:
    if not iszero:
        answer += negative.pop()

print(answer)
