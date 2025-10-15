'''42. 올바른 괄호'''
def solution(s):
    stack = []
    valid = {")":"("}
    
    # p = parenthesis
    for p in s:
        if p in valid:
            if stack and stack[-1] == valid[p]:
                stack.pop()
            else:
                return False
        
        else:
            stack.append(p)
    
    if not stack:
        return True
    else:
        return False

# 비슷한 거 예전에 풀었는데 기억이 안 나서 결국 예전에 푼 거 다시 봐야만 했었다...🥲