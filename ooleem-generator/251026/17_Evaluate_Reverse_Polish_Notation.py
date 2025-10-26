class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        answer = []
        for token in tokens:
            try:
                answer.append(int(token))
            except:
                if token == "+":
                    b = answer.pop()
                    a = answer.pop()
                    answer.append(a + b)
                elif token == "-":
                    b = answer.pop()
                    a = answer.pop()
                    answer.append(a - b)
                elif token == "*":
                    b = answer.pop()
                    a = answer.pop()
                    answer.append(a * b)
                elif token == "/":
                    b = answer.pop()
                    a = answer.pop()
                    answer.append(int(a / b))
            # print(answer)
        return answer.pop()
