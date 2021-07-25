'''
메모이제이션을 활용하는 피보나치 재귀함수를 선언하자.
'''

import sys
sys.setrecursionlimit(10**6)

memo = {}
def fib(n):
    if n == 1:
        return 1
    if n == 2:
        return 1
    if n in memo:
        return memo[n]
    memo[n] = fib(n - 1) + fib(n - 2)
    return memo[n]
    
n = int(input())
print(fib(n))