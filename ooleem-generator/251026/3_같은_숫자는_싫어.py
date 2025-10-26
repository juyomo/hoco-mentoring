def solution(arr):
    answer = []
    for i in arr:
        if answer == [] or i != answer[-1]:
            answer.append(i)

    return answer
