'''
한번이라도 등장하면 저장해두고 겹치는지 확인
나온게 또 나오면 무한루프니까 종료
최종 값이 1인지만 확인하자
'''
class Solution:
    def isHappy(self, n: int):
        seen = set()

        while n != 1 and n not in seen:
            seen.add(n)
            
            current_sum = 0
            temp_n = n
            while temp_n > 0:
                digit = temp_n % 10
                current_sum += digit * digit
                temp_n //= 10
            
            n = current_sum
            
        return n == 1