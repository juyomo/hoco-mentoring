def solution(arr):
    answer = []
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for i in range(len(arr)):
        if not answer or answer[-1] != arr[i]:
            answer.append(arr[i])
    return answer

    """
    
    if문 안에 answer가 비어을때 예외처리로 그냥
    arr[i] (for에서 지금 보고있는거)를 answer에 append 한다

    arr[i] (for에서 지금 보고있는거)가 (아까 마지막 숫자) answer[-1]랑 다르면
    answer에 append한다

    else 그냥 넘어가기

    근데 append가 겹치니까 or로 하나로 합치기!
    
    """