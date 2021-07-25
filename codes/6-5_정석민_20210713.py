'''
중복을 허용하지 않는 파이썬의 set을 사용하자.
sort하고 출력하자.
'''

n = int(input())
li = map(int, input().split())
li = sorted(list(set(li)))
for i in li:
    print(i, end = " ")