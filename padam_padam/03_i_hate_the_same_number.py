'''같은 숫자는 싫어'''
def solution(arr):

    stack = []
    for num in range(len(arr)):
        # append an element in a stack in arrv
        stack.append(arr[num])
        # if n+1 element is the same with the n element,
        if len(stack) >= 2 and stack[-1] == stack[-2]:
            # then pop the ne element
            stack.pop()
    
    return stack