n = int(input())

info = []
count = []
for i in range(n):  # i는 학생
    count.append([0, i + 1])
    info.append(list(map(int, input().split())))
    if i > 0:
        for j in range(0, i):  # j는 또다른 학생 (비교대상)
            # info[j].append(student[j])
            for k in range(5):  # k는 학년
                if info[i][k] == info[j][k]:
                    count[i][0] += 1
                    count[j][0] += 1
                    break

    # print(info)
    # print(count)

count.sort(key=lambda x: (-x[0], x[1]))

# print(count)
print(count[0][1])
