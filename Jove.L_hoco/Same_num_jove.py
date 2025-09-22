def solution(arr):
    answer = []
    check = arr[0]
    answer.append(arr[0])
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for i in range(len(arr)-1):
        if check != arr[i+1]:
            answer.append(arr[i+1])
            check = arr[i+1]
        elif check == arr[i+1]:
            continue
    if check != arr[len(arr)-1]:
        answer.append(check)
    return answer