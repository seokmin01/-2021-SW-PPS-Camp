'''
answer 배열을 생성한다.
digits 배열을 숫자로 변환하자.
숫자에 1을 더한다.
숫자를 문자열로 변환하고 문자열을 순회하여
answer 배열을 채운다.
'''

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        answer = []
        num = 0
        for n in digits:
            num = num * 10 + n
        num += 1
        for c in str(num):
            answer.append(c)
        return answer